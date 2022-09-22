//
//  squirrel.cpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/22/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "fallingApple.hpp"
#include "thrownApple1.hpp"
#include "collisions.hpp"
#include "world.hpp"
#include "basket.hpp"
#include "squirrel.hpp"

#include <iostream>

Squirrel::Squirrel()
{
    this->squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/squirrel-new.png");
    
    this->squirrelSprite.setTexture(this->squirrel);
    this->squirrelSprite.setPosition(50.f, 625.f);
    
    // Update squirrelPosition to the correct position on screen
    this->squirrelPosition.x = 50.f;
    this->squirrelPosition.y = 625.f;
    
    if(!squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/squirrel-new.png")){
        std::cerr << "Error while loading texture" << std::endl;
    }
}

Squirrel::Squirrel(float posOfSquirrelX, float posOfSquirrelY)
{
    this->squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/squirrel-new.png");
    this->squirrelSprite.setTexture(this->squirrel);
    
    this->squirrelSprite.setPosition(posOfSquirrelX, posOfSquirrelY);
    
    // Update squirrelPosition to the correct position on screen
    this->squirrelPosition.x = posOfSquirrelX;
    this->squirrelPosition.y = posOfSquirrelY;
}

void Squirrel::drawSquirrel(sf::RenderWindow& window){
    window.draw(squirrelSprite);
}

sf::FloatRect Squirrel::getSquirrelGlobalBounds()
{
    return squirrelSprite.getGlobalBounds();
}

void Squirrel::moveSquirrel(){
//    int spawnClock = 0;
//    if (spawnClock > 2000){
//
//    }
}



