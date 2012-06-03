#include "../../include/Levels/LevelTest.hpp"

using namespace SC;
LevelTest::LevelTest(sf::RenderWindow* Window) : Level(Window)
{
    this->Window = Window;
    iState = 5;
    levelState = 1;
}

LevelTest::~LevelTest()
{
    //dtor
}

int LevelTest::Run()
{
    PollEvent();
    Update();
    Render();
    return iState;
}

void LevelTest::PollEvent()
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

void LevelTest::Update()
{

}

void LevelTest::Render()
{
    Window->clear(sf::Color(0,0,0));
    Window->display();
}
