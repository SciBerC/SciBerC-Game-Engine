#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP
#include "../State.h"
#include <SFML/Graphics.hpp>

namespace SC
{
    class GameState : public State
    {
        public:
            GameState(sf::RenderWindow* Window);
            virtual ~GameState();
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
#endif // GAMESTATE_HPP
