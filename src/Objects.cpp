#include "../include/Objects.h"

using namespace SC;
Objects::Objects(float posX, float posY, float speed, bool solid, std::string texture)
{
    Position = sf::Vector2f(posX, posY);
    Speed = speed;
    isSolid = solid;
    setTexture(texture);
}

Objects::~Objects()
{
    //dtor
}

sf::Texture Objects::getTexture()
{
    return Texture;
}

sf::Sprite Objects::getSprite()
{
    return Sprite;
}

sf::Vector2f Objects::getPosition()
{
    return Position;
}

float Objects::getSpeed()
{
    return Speed;
}

bool Objects::getSolidState()
{
    return isSolid;
}

void Objects::setPosition(sf::Vector2f newPosition)
{
    Position = newPosition;
}

void Objects::setTexture(std::string newTexture)
{
    Texture.loadFromFile("media/textures/" + newTexture);
}

void Objects::setSprite(sf::Texture newSprite)
{
    Sprite.setTexture(newSprite);
}

void Objects::setSpeed(float newSpeed)
{
    Speed = newSpeed;
}

void Objects::setSolidState(bool newSolidState)
{
    isSolid = newSolidState;
}
