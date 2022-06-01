#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game {
private:
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videoMode;

    sf::RectangleShape enemy;

    void initVariables();
    void initWindow();
    void initEnemies();

public:
    Game();
    virtual ~Game();

    const bool isRunning() const;
    void pollEvents();
    void update();
    void render();
};

#endif
