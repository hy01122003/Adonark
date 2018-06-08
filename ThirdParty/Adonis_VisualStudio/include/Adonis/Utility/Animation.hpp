//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#ifndef _Animation_Adonis_HPP_
#define _Animation_Adonis_HPP_

#include <SFML/Graphics.hpp>
#include <vector>

namespace Ado
{
	class Animation
	{
	public:
		enum Kinds
		{
			Horizontal,        //   Chiều ngang
			Vertical           //   Chiều dọc
		};

	private:
		std::vector<sf::IntRect>     m_all_frames;
		sf::Clock                    m_timer;

		float                        m_time_to_next_frame;
		unsigned int                 m_current_frame;

	public:
		Animation();
		Animation(float time_to_next_frame, sf::IntRect frame, int count, Kinds kinds = Kinds::Horizontal);

		/*
		**   Hoạt động như một Constructor
		*/
		void create(float time_to_next_frame, sf::IntRect frame, int count, Kinds kinds = Kinds::Horizontal);

		/*
		**   Lấy kích thước khung hiện hành
		*/
		sf::IntRect getIntRect();

		/*
		**   Lấy số thứ tự của khung hiện tại
		**   Phần tử đầu tiên là 0
		*/
		unsigned int getCurrentFrame();

        /*
        **   Đặt lại khung hiện tại
        */
		void setCurrentFrame(int frame);

	};
}

#endif //   _Animation_Adonis_HPP_