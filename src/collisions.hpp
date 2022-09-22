//
//  collisions.hpp
//  testappletreeGame
//
//  Created by Reshma Raghavan on 9/20/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#pragma once

class Collision {
  
    
public:
    
    bool isColliding(sf::Sprite image1, sf::Sprite image2) {
        if (image1.getGlobalBounds().intersects(image2.getGlobalBounds())) {
            return true;
        }
    }
};
