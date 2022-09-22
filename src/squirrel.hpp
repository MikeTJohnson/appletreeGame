//
//  squirrel.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/22/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Squirrel{
    
private:
    sf::Texture squirrel;
    sf::Sprite squirrelSprite;
    sf::Vector2f squirrelPosition;
    
    bool onScreen = false;
    
public:
    Squirrel();
    
    void drawSquirrel(sf::RenderWindow& window);
    
    void moveSquirrel(Squirrel& squirrel);
};
