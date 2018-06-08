#ifndef _ParticleSystem_HPP_
#define _ParticleSystem_HPP_

#include <SFML/Graphics.hpp>

#include "ParticleGenerator.hpp"
#include "ParticleSpawner.hpp"
#include "ParticleUpdater.hpp"

namespace Adn 
{

    class ParticleData;

    /* Abstract base class for all particle system types */
    class ParticleSystem : public sf::Transformable 
    {
    public:
        ParticleSystem(int maxCount);
        virtual ~ParticleSystem();

        ParticleSystem(const ParticleSystem &) = delete;
        ParticleSystem &operator=(const ParticleSystem &) = delete;

        virtual void update(const sf::Time &dt);
        virtual void render(sf::RenderTarget &renderTarget) = 0;

        virtual void reset();

        inline void addGenerator(ParticleGenerator *generator) 
        {
            if (!generator) return;
            m_generators.push_back(generator);
        }

        inline void addSpawner(ParticleSpawner *spawner)
        {
            if (!spawner) return;
            m_spawners.push_back(spawner);
        }

        inline void addUpdater(ParticleUpdater *updater) 
        {
            if (!updater) return;
            m_updaters.push_back(updater);
        }

        template<typename T>
        inline T *addGenerator()
        {
            T *g = new T();
            m_generators.push_back(g);
            return g;
        }

        template<typename T>
        inline T *addSpawner()
        {
            T *s = new T();
            m_spawners.push_back(s);
            return s;
        }

        template<typename T>
        inline T *addUpdater() 
        {
            T *u = new T();
            m_updaters.push_back(u);
            return u;
        }

        void emitParticles(int count); 	// emit a fix number of particles

        inline size_t getNumberGenerators() const { return m_generators.size(); }
        inline size_t getNumberSpawners() const { return m_spawners.size(); }
        inline size_t getNumberUpdaters() const { return m_updaters.size(); }

        inline void clearGenerators()
        {
            for (auto g : m_generators)
            {
                delete g;
            }
            m_generators.clear();
        }

        inline void clearSpawners()
        {
            for (auto s : m_spawners)
            {
                delete s;
            }
            m_spawners.clear();
        }

        inline void clearUpdaters() 
        {
            for (auto u : m_updaters)
            {
                delete u;
            }
            m_updaters.clear();
        }

        template<typename T>
        inline void removeUpdaters()
        {
            for (auto u : m_updaters) 
            {
                if (dynamic_cast<T *>(u))
                {
                    delete u;
                    u = nullptr;
                }
            }
            m_updaters.erase(std::remove_if(m_updaters.begin(), m_updaters.end(),
                [](ParticleUpdater *p) { return !p; }), m_updaters.end());
        }

        template<typename T>
        inline void removeSpawners() 
        {
            for (auto u : m_spawners) 
            {
                if (dynamic_cast<T *>(u)) 
                {
                    delete u;
                    u = nullptr;
                }
            }
            m_spawners.erase(std::remove_if(m_spawners.begin(), m_spawners.end(),
                [](ParticleSpawner *p) { return !p; }), m_spawners.end());
        }

        template<typename T>
        inline void removeGenerators()
        {
            for (auto u : m_generators) 
            {
                if (dynamic_cast<T *>(u)) 
                {
                    delete u;
                    u = nullptr;
                }
            }
            m_generators.erase(std::remove_if(m_generators.begin(), m_generators.end(),
                [](ParticleGenerator *p) { return !p; }), m_generators.end());
        }

    protected:
        void emitWithRate(float dt);	// emit a stream of particles defined by emitRate and dt

    public:
        float emitRate;	// Note: For a constant particle stream, it should hold that: emitRate <= (maximalParticleCount / averageParticleLifetime)

    protected:
        float m_dt;

        ParticleData *m_particles;

        std::vector<ParticleGenerator *> m_generators;
        std::vector<ParticleSpawner *> m_spawners;
        std::vector<ParticleUpdater *> m_updaters;

        sf::VertexArray m_vertices;
    };


    class PointParticleSystem : public ParticleSystem 
    {
    public:
        PointParticleSystem(int maxCount);
        virtual ~PointParticleSystem() {}

        PointParticleSystem(const PointParticleSystem &) = delete;
        PointParticleSystem &operator=(const PointParticleSystem &) = delete;

        virtual void render(sf::RenderTarget& renderTarget) override;

    protected:
        void updateVertices();
    };


    class TextureParticleSystem : public ParticleSystem
    {
    public:
        TextureParticleSystem(int maxCount, sf::Texture *texture);
        virtual ~TextureParticleSystem() {}

        TextureParticleSystem(const TextureParticleSystem &) = delete;
        TextureParticleSystem &operator=(const TextureParticleSystem &) = delete;

        virtual void render(sf::RenderTarget &renderTarget) override;

        void setTexture(sf::Texture *texture);

    protected:
        void updateVertices();

    public:
        bool additiveBlendMode;

    protected:
        sf::Texture *m_texture;
    };


    class SpriteSheetParticleSystem : public TextureParticleSystem 
    {
    public:
        SpriteSheetParticleSystem(int maxCount, sf::Texture *texture) : TextureParticleSystem(maxCount, texture) {}
        virtual ~SpriteSheetParticleSystem() {}

        SpriteSheetParticleSystem(const SpriteSheetParticleSystem &) = delete;
        SpriteSheetParticleSystem &operator=(const SpriteSheetParticleSystem &) = delete;

        virtual void render(sf::RenderTarget &renderTarget) override;

    protected:
        void updateVertices();
    };


    class MetaballParticleSystem : public TextureParticleSystem 
    {
    public:
        MetaballParticleSystem(int maxCount, sf::Texture *texture, int windowWidth, int windowHeight);
        virtual ~MetaballParticleSystem() {}

        MetaballParticleSystem(const MetaballParticleSystem &) = delete;
        MetaballParticleSystem &operator=(const MetaballParticleSystem &) = delete;

        virtual void render(sf::RenderTarget &renderTarget) override;

    public:
        sf::Color color{ sf::Color::White };
        float threshold{ 0.5f };

    protected:
        sf::RenderTexture m_renderTexture;
        sf::Sprite m_sprite;
        sf::Shader m_shader;
    };

}

#endif 