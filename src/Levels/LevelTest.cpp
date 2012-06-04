#include "../../include/Levels/LevelTest.hpp"
#include <SFML/System.hpp>

using namespace SC;
//Declarations
Ball ball1 = Ball(9, 32, 5, true, "redBall.png");
Ball ball2 = Ball(700, 500, 5, true, "blueBall.png");

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

        Player1Keys();
        Player2Keys();
    }
}

void LevelTest::Update()
{
//    ball1.Sprite.setPosition();
}

void LevelTest::Render()
{
    ball1.setPosition(ball1.getPosition());
    ball2.setPosition(ball2.getPosition());
    Window->clear(sf::Color(137,177,134));
    Window->draw(ball1.Sprite, sf::BlendAlpha);
    Window->draw(ball2.Sprite, sf::BlendAlpha);
    Window->display();
}

void LevelTest::Player1Keys()
{
    // Ball1 keys
    sf::Keyboard keyboard;
    if (ball1.getPosition().x > 0)
    {
        if(keyboard.isKeyPressed(sf::Keyboard::Left))
            ball1.setPosition(sf::Vector2f(ball1.getPosition().x - ball1.getSpeed(), ball1.getPosition().y));
    }

    if (ball1.getPosition().y > 0)
    {
        if(keyboard.isKeyPressed(sf::Keyboard::Up))
            ball1.setPosition(sf::Vector2f(ball1.getPosition().x, ball1.getPosition().y - ball1.getSpeed()));
    }

    if (ball1.getPosition().y < (Window->getSize().y - 34))
    {
        if(keyboard.isKeyPressed(sf::Keyboard::Down))
            ball1.setPosition(sf::Vector2f(ball1.getPosition().x, ball1.getPosition().y + ball1.getSpeed()));
    }

    if (ball1.getPosition().x < (Window->getSize().x - 36))
    {
        if(keyboard.isKeyPressed(sf::Keyboard::Right))
            ball1.setPosition(sf::Vector2f(ball1.getPosition().x + ball1.getSpeed(), ball1.getPosition().y));
    }
}

void LevelTest::Player2Keys()
{
            // ball2 keys
        sf::Keyboard keyboard;
        if (ball2.getPosition().x > 0)
        {
            if(keyboard.isKeyPressed(sf::Keyboard::A))
                ball2.setPosition(sf::Vector2f(ball2.getPosition().x - ball2.getSpeed(), ball2.getPosition().y));
        }

        if (ball2.getPosition().y > 0)
        {
            if(keyboard.isKeyPressed(sf::Keyboard::W))
                ball2.setPosition(sf::Vector2f(ball2.getPosition().x, ball2.getPosition().y - ball2.getSpeed()));
        }

        if (ball2.getPosition().y < (Window->getSize().y - 34))
        {
            if(keyboard.isKeyPressed(sf::Keyboard::S))
                ball2.setPosition(sf::Vector2f(ball2.getPosition().x, ball2.getPosition().y + ball2.getSpeed()));
        }

        if (ball2.getPosition().x < (Window->getSize().x - 36))
        {
            if(keyboard.isKeyPressed(sf::Keyboard::D))
                ball2.setPosition(sf::Vector2f(ball2.getPosition().x + ball2.getSpeed(), ball2.getPosition().y));
        }
}
