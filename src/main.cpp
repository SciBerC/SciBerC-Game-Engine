#include "../include/main.h"
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow Window(sf::VideoMode(800, 600), "SciBerC Game Engine!", sf::Style::Close);

    int State = 3;

    SC::GameState Game(&Window);
    SC::MenuState Menu(&Window);

    while (Window.isOpen())
    {
        switch (State)
        {
            case 0:
                return EXIT_SUCCESS;
            break;

            case 1: // Loading Screen
            break;

            case 2: // Menu Screen
                Menu.iState = State;
                State = Menu.Run();
            break;

            case 3: // Game Screen
                Game.iState = State;
                State = Game.Run();
            break;

            case 4: // Pause Screen
                break;
        }
    }
    return EXIT_SUCCESS;
}
