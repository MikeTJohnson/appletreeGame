//
//  fallingApple.hpp
//  testSFML
//
//  Created by Michael Johnson on 9/21/22.
//

#include "thrownApple1.hpp"
#pragma once

class FallingApple {
private:
    
    sf::Texture fallingAppleTexture;
    sf::Sprite fallingApple;
    float yvelocity = 2;
    int spawnclock = 0;
    std::vector<sf::Sprite> fallingApples;
    sf::Vector2f fallingApplePosition;
//    std::random_device rando;
//    std::mt19937 mersenne(rando());
//    std::uniform_real_distribution<> randomtest (0,1);

    
public:
    


    
    //make the apple fall from the tree
    void makeTheAppleFall (std::vector<sf::Sprite>& fallingApples){
        fallingApple.move(0, yvelocity);
    }
    
    //check that the image for the sprite works and apply it to our object
    void appleLoaded () {
        if (!fallingAppleTexture.loadFromFile("apple.png")) {
            std::cerr << "error while loading texture" << std::endl;
        }
        else {
            fallingApple.setTexture(fallingAppleTexture);
        }
    }
    
    //assemble all pieces of the falling apple when the whenever the spawn clock reaches 150
    void buildFallingApple () {
        if (spawnclock > 150) {
            appleLoaded();
            spawnFallingApple(fallingApplePosition);
            fallingApple.setPosition(fallingApplePosition);
            fallingApples.push_back(fallingApple);
            //reset the spawnclock to 0 so the spawning doesn't happen continuously
            spawnclock = 0;
        }
        //increment the spawnclock so it keeps pace
        else {
            spawnclock++;
        }
    }

    //draw the assembled falling apple on the screen with it's variables
    void drawFallingApple (sf::RenderWindow& window) {
        buildFallingApple();
        for (int i = 0; i < fallingApples.size(); i++) {
            fallingApples[i].move(0, yvelocity);
            window.draw(fallingApples[i]);
        }
    }
    
    // assign the spawn coordinates for the apple on the left tree
    void spawnAppleLeft (sf::Vector2f& spawnPositionLeft) {
        std::srand(time(NULL));
        spawnPositionLeft.x = rand()% 100 + 50;
        spawnPositionLeft.y = rand()% 100 + 50;
        
    }
    
    // assign the spawn coordinates for the apple on the right tree
    void spawnAppleRight (sf::Vector2f& spawnPositionRight) {
        std::srand(time(NULL));
        spawnPositionRight.x = rand()% 700 + 50;
        spawnPositionRight.y = rand()% 100 + 50;
        
    }
    
    // assign spawn coordinates for the apple to one of the trees
    void spawnFallingApple (sf::Vector2f& spawnposition) {
        //get a ranom number and determine if it is even or odd
        if (rand() % 2 == 0) {
            //if the random number is even, the position is on the left tree
            spawnAppleLeft(spawnposition);
        }
        else {
            //if the random number is odd, the position is on the right tree
            spawnAppleRight(spawnposition);
        }
    }
};
