#include "../../include/Objects/Ball.hPP"

using namespace SC;
Ball::Ball(float posX, float posY, float speed, bool solid, std::string texture)
            : Objects(posX, posY, speed, solid, texture)
{
    Position = sf::Vector2f(posX, posY);
    Speed = speed;
    isSolid = solid;
    Texture.loadFromFile("media/images/" + texture);
    Sprite.setTexture(Texture);
}

Ball::~Ball()
{
    //dtor
}

// Most of this does not work... Yet :(

sf::Texture Ball::getTexture()
{
    return Texture;
}

sf::Sprite Ball::getSprite()
{
    return Sprite;
}

sf::Vector2f Ball::getPosition()
{
    return Position;
}

float Ball::getSpeed()
{
    return Speed;
}

bool Ball::getSolidState()
{
    return isSolid;
}

void Ball::setPosition(sf::Vector2f newPosition)
{
    Position = newPosition;
    Sprite.setPosition(newPosition);
}

void Ball::setTexture(std::string newTexture)
{
    Texture.loadFromFile("media/textures/" + newTexture);
}

void Ball::setSprite(sf::Texture newSprite)
{
    Sprite.setTexture(newSprite);
}

void Ball::setSpeed(float newSpeed)
{
    Speed = newSpeed;
}

void Ball::setSolidState(bool newSolidState)
{
    isSolid = newSolidState;
}
