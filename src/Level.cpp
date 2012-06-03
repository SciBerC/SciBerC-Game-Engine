#include "../include/Level.h"

using namespace SC;
Level::Level(sf::RenderWindow* Window)
{
    this->Window = Window;
    iState = 5;
    levelState = 0;
}

Level::~Level()
{
    //dtor
}

int Level::Run()
{
    PollEvent();
    Update();
    Render();
    return iState;
}

void Level::PollEvent()
{

}

void Level::Update()
{

}

void Level::Render()
{
    Level::Window->clear(sf::Color(0,0,0));
    Level::Window->display();
}
