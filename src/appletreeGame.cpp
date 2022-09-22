//
//  appletreeGame.cpp
//
//
//  Created by Reshma Raghavan on 9/20/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "collisions.hpp"
#include "world.hpp"
#include "basket.hpp"

using namespace std;

void createWindow();

int main ()
{
    World world;
    world.loop();
    // create the window
//    sf::RenderWindow window(sf::VideoMode(2000, 2000), "Apple Tree Game");
//
//    window.setFramerateLimit(60);
//
//    // create a texture for the background
//    sf::Texture bgTexture;
//    // create a sprite for the background
//    sf::Sprite bgSprite;

    // store bgTexture size
//    sf::Vector2u TextureSize;
    // store window size
//    sf::Vector2u WindowSize;

    // create a texture for the squirrel
  //  sf::Texture squirrel;
    // create a sprite for the squirrel
//    sf::Sprite squirrelSprite;
    // create a vector for the squirrel's position
//    sf::Vector2f squirrelPosition(10.f, 1175.f);
    
    // create a velocity variable to move the squirrel
//    float squirrelXVelocity = 3;
//
//    // create a texture for the basket
//    sf::Texture basket;
//    // create a sprite for the basket
//    sf::Sprite basketSprite;
//    // create a vector for the basket's position
//    sf::Vector2f basketPosition(150.f, 1150.f);
//
//    // create a velocity variable to move the basket
//    float basketXVelocity = 4;
//
////    if(!bgTexture.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/background-with-trees.png")){
////        std::cerr << "Error while loading texture" << std::endl;
////        return -1;
////    }
////    else{
////        TextureSize = bgTexture.getSize(); //Get size of texture.
////        WindowSize = window.getSize(); //Get size of window.
////
////        // Calculate scale
////        float ScaleX = (float) WindowSize.x / TextureSize.x;
////        float ScaleY = (float) WindowSize.y / TextureSize.y;
////
////        // Set scale
////        bgSprite.setTexture(bgTexture);
////        bgSprite.setScale(ScaleX, ScaleY);
////    }
//
//    if(!squirrel.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/squirrel.png")){
//        std::cerr << "Error while loading texture" << std::endl;
//        return -1;
//    }
//
//    squirrelSprite.setTexture(squirrel);
//    squirrelSprite.setPosition(squirrelPosition);
//
//    if(!basket.loadFromFile("/Users/reshmaraghavan/Desktop/myGithubRepo/MSD/appletreeGame/FinalPictures/basket.png")){
//        std::cerr << "Error while loading texture" << std::endl;
//        return -1;
//    }
//
//    basketSprite.setTexture(basket);
//    basketSprite.setPosition(basketPosition);

//    // run the program as long as the window is open
//    while (window.isOpen())
//    {
//        // check all the window's events that were triggered since the last iteration of the loop
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            // "close requested" event: we close the window
//            if (event.type == sf::Event::Closed){
//                window.close();
//            }
//
////            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
////                window.close();
////            }
//        }
        
        //"physics"
        
        //Make sure the basket stays within the bounds of the window
//        if (basketPosition.x < 0 || basketPosition.x > 2000 - 116){ //116 = basket width
//            basketXVelocity *= -1;
//        }
//
//        //Move the squirrel along the x-axis
//        squirrelPosition.x += squirrelXVelocity;
//        squirrelSprite.setPosition(squirrelPosition);
//
//        //Move the basket along the x-axis
//        basketPosition.x += basketXVelocity;
//        basketSprite.setPosition(basketPosition);
//
        // Now we start rendering to the window, clear it first
      //  window.clear();

        // Draw the background
      //  window.draw(bgSprite);

        // Draw the squirrel
      //  window.draw(squirrelSprite);

        // Draw the basket
      //  window.draw(basketSprite);

        // End the current frame and display its contents on screen
      //  window.display();

//    }
    
    return 0;
}
