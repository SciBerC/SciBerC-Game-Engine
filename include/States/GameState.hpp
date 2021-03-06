#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP
#include <SFML/Graphics.hpp>
#include "../State.h"

namespace SC
{
    class GameState : public State
    {
        public:
            GameState(sf::RenderWindow* Window);
            virtual ~GameState();
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
#endif // GAMESTATE_HPP
