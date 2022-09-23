//
//  thrownApple.cpp
//  testSFML
//
//  Created by Michael Johnson on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include "thrownApple1.hpp"

void ThrownApple::thrownAppleLoaded () {
    if (!apple.loadFromFile("../apple-new.png")) {
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

void ThrownApple::throwTheApple () {
    if (shotClock > 10 && sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    thrownAppleLoaded();
    setThrowPosition(thrownApplePosition);
    thrownApple.setPosition(thrownApplePosition);
    thrownApples.push_back(thrownApple);
    shotClock = 0;
}



//void ThrownApple::setThrowPosition (sf::Vector2f& thrownApplePosition) {
////        thrownApplePosition = basket::getBasketPosition();
//}


void ThrownApple::drawThrownApple (sf::RenderWindow& window) {
    throwTheApple();
    for (int i = 0; i < thrownApples.size(); i++) {
        thrownApple.move(xvelocity, 0);
        window.draw(thrownApple);
        if (thrownApples[i].getPosition().y > 1280) {
            thrownApples.erase(thrownApples.begin() + i);
        }
    }
}



