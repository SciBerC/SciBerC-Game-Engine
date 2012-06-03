#include "../../include/States/MenuState.hpp"

using namespace SC;
MenuState::MenuState(sf::RenderWindow* Window) : State(Window)
{
    this->Window = Window;
    iState = 2;
}

MenuState::~MenuState()
{
    //dtor
}

int MenuState::Run()
{
    PollEvent();
    Update();
    Render();
    return iState;
}

void MenuState::PollEvent()
{
    sf::Event event;
    sf::Keyboard keyboard;
    while (Window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            Window->close();
        if ((keyboard.isKeyPressed(sf::Keyboard::Escape)) && ((keyboard.isKeyPressed(sf::Keyboard::LShift)) || (keyboard.isKeyPressed(sf::Keyboard::RShift))))
            Window->close();

        if (keyboard.isKeyPressed(sf::Keyboard::Space))
            iState = 3;
    }
}

void MenuState::Update()
{
    text1 = sf::Text("Press Escape and Shift to quit.");
    text2 = sf::Text("Press Space to Play Game.");
    text3 = sf::Text("Created by SciberC. The Engine uses SFML.");
}

void MenuState::Render()
{
    Window->clear(sf::Color(67, 89, 99));
    Window->draw(text1);
    Window->draw(text2);
    Window->draw(text3);
    Window->display();
}
