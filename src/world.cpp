//
//  world.cpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/21/22.
//
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "world.hpp"
#include "basket.hpp"

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
    
//    sf::Texture basketTexture;
//    basketTexture.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/basket.png");
//    sf::Sprite basketSprite;
//    basketSprite.setTexture(basketTexture);
//    sf::Vector2f basketPosition(150.f, 1150.f);
//    basketSprite.setPosition(basketPosition);
    
    if(!bgTexture.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/background-with-trees.png")){
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
        
        basket.drawBasket(window);
        
        basket.move(2000);
        
        window.display();
    }
}

void World::reset()
{
    
}
