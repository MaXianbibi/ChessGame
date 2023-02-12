#include "../inc/chess.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "Chess game", sf::Style::Titlebar | sf::Style::Close);

    Piece a("./img/pieces.png", pion | white, window);

    sf::Vector2i mousePos;
    bool isPick = 0;

    while (window.isOpen())
    {
        sf::Event ev;
        while (window.pollEvent(ev))
        {
            if (ev.type == sf::Event::Closed || ev.key.code == sf::Keyboard::Escape)
                window.close();
            if (ev.type == sf::Event::MouseButtonReleased && ev.mouseButton.button == sf::Mouse::Left)
            {
                a.isPick = 0;
                window.setMouseCursorVisible(true);
                a.setPosition(a.Position);
                if (a.isPickable(mousePos))
                    a.isPick = 1;
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && a.isPick)
                {
                    window.setMouseCursorVisible(false);
                    a.setPosition(mousePos);
                }
            }
                mousePos = sf::Mouse::getPosition(window);
                window.clear();
                drawBoard(window);
                a.drawSpirte();
                window.display();
        }
    }
    return 42;
}
