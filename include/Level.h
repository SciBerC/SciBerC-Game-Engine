#ifndef LEVEL_H
#define LEVEL_H

#include <SFML/Graphics.hpp>

namespace SC
{
    class Level
    {
        public:
            Level(sf::RenderWindow* Window);
            virtual ~Level();
            int iState;
            int levelState;
            int Run();
            //void Keyboard();
        protected:
        private:
            sf::RenderWindow* Window;
            void PollEvent();
            void Update();
            void Render();
    };
}
#endif // LEVEL_H
