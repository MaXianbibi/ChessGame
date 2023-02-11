/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chess.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:07:41 by justinmorne       #+#    #+#             */
/*   Updated: 2023/02/10 20:54:13 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHESS_HPP
# define CHESS_HPP

# include <iostream>

#include <SFML/Graphics.hpp>

#include "piece.hpp"


enum MaskNb {
    black   =       0b00000000,
    white   =       0b10000000,
    king    =       0b00000001,
    queen   =       0b00000010,
    bishop  =       0b00000100,
    horse   =       0b00001000,
    rook    =       0b00010000,
    pion    =       0b00100000
};

void drawPieces(sf::RenderTexture & window);
void drawBoard(sf::RenderWindow & window);

#define LIGHT   0xF0, 0xD9, 0xB5

#define DARK    0xb5, 0x88, 0x63

#endif