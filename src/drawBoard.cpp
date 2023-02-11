#include "../inc/chess.hpp"

void drawBoard(sf::RenderWindow & window)
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            sf::RectangleShape square(sf::Vector2f(128.f, 128.f));
            square.setPosition(j * 128, i * 128);
            if ( (i + j) & 1 )
                square.setFillColor(sf::Color(DARK));
            else
                square.setFillColor(sf::Color(LIGHT));
            window.draw(square);
        }
    }
}


void drawPieces(sf::RenderWindow & window)
{
    Piece a("./img/pions.jpg", pion, window);
}