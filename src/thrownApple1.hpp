//
//  thrownApple.hpp
//  testSFML
//
//  Created by Michael Johnson on 9/21/22.
//
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
    std::vector<sf::Sprite> thrownApples;
    sf::Vector2f thrownApplePosition;
    int shotClock = 0;
    


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
        if (shotClock > 10);
        thrownAppleLoaded();
        setThrowPosition(thrownApplePosition);
        thrownApple.setPosition(thrownApplePosition);
        thrownApples.push_back(thrownApple);
        shotClock = 0;
    }
    
    
    
    void setThrowPosition (sf::Vector2f& thrownApplePosition) {
//        thrownApplePosition = basket::getBasketPosition();
        return thrownApplePosition;
    }

    
    void drawThrownApple (sf::RenderWindow& window) {
        throwTheApple();
        for (int i = 0; i < thrownApples.size(); i++) {
            thrownApple.move(xvelocity, 0);
            window.draw(thrownApple);
            if (thrownApples[i].getPosition().y > 1280) {
                thrownApples.erase(thrownApples.begin() + i);
            }
        }
    }
    
    
    
//    void draw (sf::RenderWindow &window){
//        window.draw(thrownApples);
//    }
};

