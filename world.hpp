//
//  world.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "world.hpp"
#include "basket.hpp"

class World
{
public:
    World()
    : window(sf::VideoMode(2000,2000), "Apple Tree Game")
    {
        //reset();
    }
    
    void loop();
    
private:
    void draw();
    void moveBasket();
    
    void reset();
    
    void throwApple();
    void fallApple();
    void handleCollisions();
    
    sf::RenderWindow window;
};
