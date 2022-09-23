//
//  world.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#pragma once

#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "world.hpp"
#include "basket.hpp"
#include "squirrel.hpp"

class World
{
public:
    World()
    : window(sf::VideoMode(1240,960), "Apple Tree Game")
    {
        
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
