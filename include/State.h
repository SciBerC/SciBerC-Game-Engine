#ifndef STATE_H
#define STATE_H
#include <SFML/Graphics.hpp>

namespace SC
{
    class State
    {
        public:
            State(sf::RenderWindow* Window);
            virtual ~State();
            int iState;
            int Run();
        protected:
        private:
            sf::RenderWindow* Window;
            void PollEvent();
            void Update();
            void Render();
    };
}

#endif // STATE_H
