#ifndef LEVELTEST_HPP
#define LEVELTEST_HPP
#include "../Level.h"
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
        protected:
        private:
            sf::RenderWindow* Window;
            void PollEvent();
            void Update();
            void Render();
    };
}
#endif // LEVELTEST_HPP
