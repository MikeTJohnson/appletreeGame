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
    std::vector<sf::Sprite> thrownApples;
    sf::Vector2f thrownApplePosition;
    int shotClock = 0;
    


public:
    
    
    void thrownAppleLoaded ();
    
    sf::FloatRect getBounds();

    
    void throwTheApple ();
    
    
    
    void setThrowPosition (sf::Vector2f& basketPosition);

    
    void drawThrownApple (sf::RenderWindow& window);
    
    void destroyThrownApple ();
    
    
};
