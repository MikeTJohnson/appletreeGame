//
//  world.cpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "world.hpp"
#include "basket.hpp"
#include "squirrel.hpp"
#include "thrownApple1.hpp"
#include "fallingApple.hpp"

void World::loop()
{
    window.setFramerateLimit(60);
    
    // create a texture for the background
    sf::Texture bgTexture;
    // create a sprite for the background
    sf::Sprite bgSprite;
    
    // store bgTexture size
    sf::Vector2u TextureSize;
    // store window size
    sf::Vector2u WindowSize;
    
    Basket basket;
    
    Squirrel squirrel;

    FallingApple appleFalling;
    
//    Squirrel squirrelPos1(150.f,150.f);
//    Squirrel squirrelPos2(400.f,150.f);
//    Squirrel squirrelPos3(150.f,400.f);
//    Squirrel squirrelPos4(400.f,400.f);
//
//    Squirrel squirrelPos5(1000.f,400.f);
//    Squirrel squirrelPos6(1000.f,75.f);
//    Squirrel squirrelPos7(750.f,400.f);
//    Squirrel squirrelPos8(750.f,75.f);

    
//    sf::Texture basketTexture;
//    basketTexture.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/basket.png");
//    sf::Sprite basketSprite;
//    basketSprite.setTexture(basketTexture);
//    sf::Vector2f basketPosition(150.f, 1150.f);
//    basketSprite.setPosition(basketPosition);
    
    if(!bgTexture.loadFromFile("/Users/reshmaraghavan/Desktop/finalProject/appletreeGame/src/background-new.png")){
        std::cerr << "Error while loading texture" << std::endl;
    }
    else{
        TextureSize = bgTexture.getSize(); //Get size of texture.
        WindowSize = window.getSize(); //Get size of window.
        
        // Calculate scale
        float ScaleX = (float) WindowSize.x / TextureSize.x;
        float ScaleY = (float) WindowSize.y / TextureSize.y;
        
        // Set scale
        bgSprite.setTexture(bgTexture);
        bgSprite.setScale(ScaleX, ScaleY);
    }
    
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
            
            
        }
        window.clear(sf::Color::Black);
        window.draw(bgSprite);
       // Basket basket(basketTexture, basketSprite, basketPosition);
      //  basket.move(2000);
        
       // window.draw(basketSprite);
        
        //handleCollisions();
        
        squirrel.drawSquirrel(window);
        
        basket.drawBasket(window);
        
        basket.move(800);
        
        appleFalling.drawFallingApple(window);
        
//        squirrelPos1.drawSquirrel(window);
//        squirrelPos2.drawSquirrel(window);
//        squirrelPos3.drawSquirrel(window);
//        squirrelPos4.drawSquirrel(window);
//        squirrelPos5.drawSquirrel(window);
//        squirrelPos6.drawSquirrel(window);
//        squirrelPos7.drawSquirrel(window);
//        squirrelPos8.drawSquirrel(window);
//
        window.display();
    }
}
