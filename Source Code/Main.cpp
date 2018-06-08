#include <SFML/Graphics.hpp>
#include <Adonis/Utility.hpp>
#include <iostream>
#include "Engine/AdnConfig.hpp"
#include "Application.hpp"

int main(int argc, char* argv[])
{
    SetUp_IO_File_UF8();

    Adn::Application application;

    application.run();

    return EXIT_SUCCESS;
}