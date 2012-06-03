#include "../include/State.h"

using namespace SC;
State::State(sf::RenderWindow* Window)
{
    this->Window = Window;
    iState = 0;
}

State::~State()
{
    //dtor
}

int State::Run()
{
    PollEvent();
    Update();
    Render();
    return iState;
}

void State::PollEvent()
{
    sf::Event event;
    while(Window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            Window->close();
    }

}

void State::Update()
{

}

void State::Render()
{
    State::Window->clear(sf::Color(0,0,0));
    State::Window->display();
}
