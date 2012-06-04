#ifndef BALL_HPP
#define BALL_HPP
#include "../Objects.h"

namespace SC
{
    class Ball : Objects
    {
        public:
            Ball(float posX, float posY, float speed, bool solid, std::string texture);
            virtual ~Ball();
            sf::Texture getTexture(); // Gets the texture of the object
            sf::Sprite getSprite(); // Gets the Sprite of the object
            sf::Vector2f getPosition(); // Gets the position of the object
            float getSpeed(); // Gets the speed of the object
            bool getSolidState(); // Gets the solidness state of the object

            void setPosition(sf::Vector2f newPosition); // Changes the Position of the object
            void setTexture(std::string newTexture); // Changes the Texture of the object
            void setSprite(sf::Texture newSprite); // Changes the Sprite of the object
            void setSpeed(float newSpeed); // Changes the Speed of the object
            void setSolidState(bool newSolidState); // Changes weather the object is solid or not

            sf::Sprite Sprite;
        protected:
        private:
            sf::Vector2f Position;
            sf::Texture Texture;

            float Speed;
            bool isSolid;
    };
}
#endif // BALL_HPP
