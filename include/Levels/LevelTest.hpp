#ifndef LEVELTEST_HPP
#define LEVELTEST_HPP
#include "../Level.h"
#include "../Objects/Ball.hPP"
#include <SFML/Graphics.hpp>

namespace SC
{
    class LevelTest : public Level
    {
        public:
            LevelTest(sf::RenderWindow* Window);
            virtual ~LevelTest();
            int iState;
            int levelState;
            int Run();
            void Player1Keys();
            void Player2Keys();
        protected:

        private:
            sf::RenderWindow* Window;
            sf::Texture Texture;
            sf::Sprite Sprite;
            void PollEvent();
            void Update();
            void Render();
    };
}
#endif // LEVELTEST_HPP
