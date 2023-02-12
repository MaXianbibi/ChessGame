#include "../inc/chess.hpp"

sf::Vector2i findSpriteModel(const int _mask)
{
    sf::Vector2i vector;

    int piece = king;

    for (int i = 0; i < 6; i++)
    {
        if (piece == _mask)
            return vector;
        if ((piece | white) == _mask )
        {
            vector.y += 16;
            return (vector);
        }
        vector.x += 16;
        piece <<= 1;
    }
    return (vector);
}

Piece::Piece(std::string img, int _mask, sf::RenderWindow & _window) : mask(_mask), window(_window), isPick(0)
{
    sf::Vector2i tmp = findSpriteModel(mask);

    this->Position.x = 0;
    this->Position.y = 0;

    this->texture.loadFromFile(img);
    sprite.setTexture(texture);
    sprite.setPosition(12.f, 12.f);
    sprite.setTextureRect(sf::IntRect(tmp.x, tmp.y, 16, 16));
    sprite.setScale(6.5,6.6);

    this->Position.x = 64;
    this->Position.y = 64;
}

Piece::~Piece()
{
}

void Piece::drawSpirte( void ) {
    this->window.draw(this->sprite);
}


void Piece::setPosition( sf::Vector2i mousePos )
{
    this->sprite.setPosition(sf::Vector2f(mousePos.x - 52, mousePos.y - 52));

}

void Piece::operator=(const sf::Vector2i &tmp)
{
    this->Position.x = tmp.x;
    this->Position.y = tmp.y;

    this->sprite.setPosition(sf::Vector2f(this->Position.x - 52, this->Position.y - 52));
}

bool Piece::isPickable(const sf::Vector2i &mousePos)
{
    if (mousePos.x >= this->Position.x && mousePos.x <= this->Position.x + 104
        && mousePos.y >= this->Position.y && mousePos.y <= this->Position.y + 104)
        {
            return (1);
        }
    return (0);


}