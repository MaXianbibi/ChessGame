/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:06:42 by justinmorne       #+#    #+#             */
/*   Updated: 2023/02/11 20:39:15 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIECE_HPP
# define PIECE_HPP

#include "chess.hpp"

class Piece
{
protected:
    sf::Texture texture;
    sf::Sprite sprite;
    sf::RenderWindow & window;


public:
    Piece(std::string img, int _mask, sf::RenderWindow & _window);
    ~Piece();
    sf::Vector2i Position;
    int mask;

    bool isPick;

    void drawSpirte( void );
    void operator=(const sf::Vector2i &tmp);
    bool isPickable(const sf::Vector2i &mousePos);
    void setPosition( sf::Vector2i mousePos );

};




#endif