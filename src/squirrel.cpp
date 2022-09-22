//
//  squirrel.cpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/22/22.
//

#include "squirrel.hpp"

#include <iostream>

Squirrel::Squirrel()
{
    this->squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/squirrel-new.png");
    
    this->squirrelSprite.setTexture(this->squirrel);
    this->squirrelSprite.setPosition(50.f, 625.f);
    
    
    if(!squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/squirrel-new.png")){
        std::cerr << "Error while loading texture" << std::endl;
    }
}

void Squirrel::drawSquirrel(sf::RenderWindow& window){
    window.draw(squirrelSprite);
}

