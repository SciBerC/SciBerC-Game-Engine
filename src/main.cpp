#include "../include/main.h"
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow Window(sf::VideoMode(800, 600), "SciBerC Game Engine!", sf::Style::Close);
    Window.setFramerateLimit(60);

    int State = 2;
    int levelState = 1;

    // States
    SC::GameState Game(&Window);
    SC::MenuState Menu(&Window);

    // Levels
    SC::LevelTest levelOne(&Window);

    while (Window.isOpen())
    {
        switch (State)
        {
            case 0:
                return EXIT_FAILURE;
            break;

            case 1: // Loading Screen
            break;

            case 2: // Menu Screen
                Menu.iState = State;
                State = Menu.Run();
            break;

            case 3: // Game Screen
                Game.iState = State;
                levelState = Game.levelState;
                State = Game.Run();
            break;

            case 4: // Pause Screen
            break;

            case 5: // Level Section
                switch(levelState)
                {
                    case 1:
                        levelOne.iState = State;
                        levelState = Game.levelState;
                        State = levelOne.Run();
                    break;
                    default:
                        return EXIT_FAILURE;
                    break;
                }
            break;
            default:
                return EXIT_FAILURE;
            break;
        }
    }
    return EXIT_SUCCESS;
}
