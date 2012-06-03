#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP
#include "../State.h"

namespace SC
{
    class MenuState : public State
    {
        public:
            MenuState(sf::RenderWindow* Window);
            virtual ~MenuState();
            int iState;
            int Run();
        protected:
            sf::Text text1;
            sf::Text text2;
            sf::Text text3;
        private:
            sf::RenderWindow* Window;
            void PollEvent();
            void Update();
            void Render();
    };
}

#endif // MENUSTATE_HPP
