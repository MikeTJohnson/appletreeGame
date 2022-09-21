
#include <SFML/Graphics.hpp>



int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(2400, 2000), "My window");
    window.setFramerateLimit(60);
    
    sf::CircleShape circle;
    
    sf::Vector2f circlePosition(1600, 1000);
    
    circle.setPosition(circlePosition);
    
    circle.setRadius(50);
    
    float xvelocity = -30.0;
    window.clear();

    window.display();

    
    // run the program as long as the window is open
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            while (window.isOpen()) {
                circlePosition.x += xvelocity;
                circle.setPosition(circlePosition);
                window.clear();
                window.draw(circle);
                window.display();
            }

        }

    }

    return 0;
}

