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
    sf::Vector2f screenSize(Window->getSize().x, Window->getSize().y);
    text1 = sf::Text("Press Escape and Shift to quit.");
    text2 = sf::Text("Press Space to Play Game.");
    text3 = sf::Text("Created by SciberC. The Engine uses SFML.");
    text4 = sf::Text("SciBerC - Test Game");

    text3.setColor(sf::Color::Black);
    text4.setColor(sf::Color(177, 0, 0));

    text3.scale(0.5, 0.5);
    text4.scale(2, 2.5);

    text1.setPosition(screenSize.x / 4.5 ,screenSize.y / 1.5);
    text2.setPosition(screenSize.x / 4 ,screenSize.y / 1.25);
    text3.setPosition(0.1, screenSize.y / 1.03);
    text4.setPosition(screenSize.x / 6, screenSize.y / 4);
}

void MenuState::Render()
{
    Window->clear(sf::Color(67, 89, 99));
    Window->draw(text1);
    Window->draw(text2);
    Window->draw(text3);
    Window->draw(text4);
    Window->display();
}
