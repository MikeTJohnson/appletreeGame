//
//  thrownApple.cpp
//  testSFML
//
//  Created by Michael Johnson on 9/21/22.
//
//  Group members: Michael Johnson and Reshma Raghavan

#include "thrownApple1.hpp"
#include "basket.hpp"

Basket basket;

void ThrownApple::thrownAppleLoaded () {
    if (!apple.loadFromFile("apple.png")) {
        std::cerr << "error while loading texture" << std::endl;
    }
    else {
        thrownApple.setTexture(apple);
    }
}


void ThrownApple::throwTheApple () {
    if (shotClock > 10)
    thrownAppleLoaded();
    thrownApple.setPosition(thrownApplePosition);
    thrownApples.push_back(thrownApple);
    shotClock = 0;
}



void ThrownApple::setThrowPosition (sf::Vector2f& basketPosition) {
        thrownApplePosition = basketPosition;
}


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

void ThrownApple::destroyThrownApple () {
    for (int i = 0; i < thrownApples.size(); i++) {
            thrownApples.erase(thrownApples.begin() + i);
    }
}

sf::FloatRect ThrownApple::getBounds() {
    return thrownApple.getGlobalBounds();
}

