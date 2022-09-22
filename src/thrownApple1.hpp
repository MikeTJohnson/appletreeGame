//
//  thrownApple.hpp
//  testSFML
//
//  Created by Michael Johnson on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <random>
#pragma once

class ThrownApple {
private:
    
    sf::Texture apple;
    sf::Sprite thrownApple;
    float xvelocity = -30.0;
    float yvelocity = 10;
    std::vector<sf::Sprite> thrownApples;
    sf::Vector2f thrownApplePosition;
    


public:
    
    
    void thrownAppleLoaded () {
        if (!apple.loadFromFile("apple.png")) {
            std::cerr << "error while loading texture" << std::endl;
        }
        else {
            thrownApple.setTexture(apple);
        }
    }
    
    void getBounds() {
        
    }
//    void buildTheApple () {
//        appleLoaded();
//        thrownApple.setTexture(apple);
//    }
    
    void throwTheApple () {
        thrownApple.move(xvelocity, 0);
        
    }
    

    
    void drawThrownApple (sf::RenderWindow& window) {
        window.draw(thrownApple);
        
    }
    
    
    
//    void draw (sf::RenderWindow &window){
//        window.draw(thrownApples);
//    }
};

