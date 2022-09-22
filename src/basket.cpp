//
//  basket.cpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//

#include "basket.hpp"

#include <iostream>

Basket::Basket()
{
    this->basket.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/basket.png");
    
    this->basketSprite.setTexture(this->basket);
    this->basketSprite.setPosition(150.f, 1150.f);
    
    
    if(!basket.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/basket.png")){
        std::cerr << "Error while loading texture" << std::endl;
    }
}

void Basket::move(int winWidth)
{
    //create a velocity variable to move the basket
    float basketXVelocity = 10;
    
    //Keystroke A moves basket left
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        //Make sure the basket stays within the bounds of the window
        if (basketPosition.x < 0){ //116 = basket width
            basketXVelocity *= -1;
        }
        basketPosition.x-=basketXVelocity;
        basketPosition.y = 1150.f;
        basketSprite.setPosition(basketPosition);
    }

    //Keystroke D moves basket right
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        //Make sure the basket stays within the bounds of the window
        if (basketPosition.x > 2000 - 116){ //116 = basket width
            basketXVelocity *= -1;
        }
        basketPosition.x+=basketXVelocity;
        basketPosition.y = 1150.f;
        basketSprite.setPosition(basketPosition);
    }
}

void Basket::drawBasket(sf::RenderWindow& window){
    window.draw(basketSprite);
}
