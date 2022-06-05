#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>
#include <sstream>
#include <iostream>

class Game {
private:
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videoMode;

    sf::Vector2i mousePosWindow;
    sf::Vector2f mousePosView;

    sf::Font font;

    sf::Text uiText;

    bool endGame;
    float enemySpawnTimer;
    float enemySpawnTimerMax;
    int maxEnemies;
    unsigned int points;
    unsigned int health;
    bool mouseHelds;

    std::vector<sf::RectangleShape> enemies;
    sf::RectangleShape enemy;

    void initVariables();
    void initWindow();
    void initEnemies();
    void initFonts();
    void initText();

public:
    Game();
    virtual ~Game();

    const bool isRunning() const;
    const bool getEndGame() const;

    void spawnEnemy();
    void pollEvents();
    void updateMousePosition();
    void updateEnemies();
    void update();
    void renderEnemies(sf::RenderTarget &target);
    void render();
    void renderText(sf::RenderTarget &target);
    void updateText();
};

#endif
