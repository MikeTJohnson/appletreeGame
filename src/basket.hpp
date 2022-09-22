//
//  basket.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Basket
{
    
private:
    sf::Texture basket;
    sf::Sprite basketSprite;
    sf::Vector2f basketPosition;
    
    bool onScreen = false;
    
public:
    
    Basket();
//    Basket(sf::Texture basket, sf::Sprite basketSprite, sf::Vector2f basketPosition);
    
    void move(int winWidth);
    void drawBasket(sf::RenderWindow& window);
    
};




