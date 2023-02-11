#include "../inc/chess.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "Chess game", sf::Style::Titlebar | sf::Style::Close);

    Piece a("./img/pieces.png", pion | white, window);

    sf::Vector2i mousePos;

    while (window.isOpen())
    {
        int i = 0;

        sf::Event ev;
        while (window.pollEvent(ev))
        {
            if (ev.type == sf::Event::Closed)
                window.close();
            if (ev.key.code == sf::Keyboard::Escape)
                window.close();
            mousePos = sf::Mouse::getPosition(window);
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {

            a = mousePos;

        }

        // a.setPosition();
        window.clear();
        drawBoard(window);
        a.drawSpirte();
        window.display();

        i++;
    }

    return 0;
}