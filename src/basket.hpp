//
//  basket.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Basket
{
    
private:
    sf::Texture basket; // Texture for the sprite
    sf::Sprite basketSprite; // Sprite to work with
    sf::Vector2f basketPosition; // Sprite's position
    
    bool onScreen = false; // Determining whether or not it is on screen
    
public:
    
    Basket();
    
    void move(int winWidth);
    void drawBasket(sf::RenderWindow& window);
    
    sf::Vector2f getBasketPosition();
    
};




