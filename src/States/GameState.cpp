#include "../../include/States/GameState.hpp"

using namespace SC;
GameState::GameState(sf::RenderWindow* Window) : State(Window)
{
    this->Window = Window;
    iState = 3;
}

GameState::~GameState()
{
    //dtor
}

int GameState::Run()
{
    PollEvent();
    Update();
    Render();
    return iState;
}

void GameState::PollEvent()
{
    sf::Event event;
    sf::Keyboard keyboard;
    while(Window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            Window->close();

        if(keyboard.isKeyPressed(sf::Keyboard::Escape))
            iState = 2;
    }
}

void GameState::Update()
{

}

void GameState::Render()
{
    Window->clear(sf::Color(223, 42, 180));
    Window->display();
}
