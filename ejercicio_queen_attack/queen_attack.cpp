#include "queen_attack.h"
#include <cmath>

namespace queen_attack {

chess_board::chess_board(std::pair<int, int> white, std::pair<int, int> black) {
    if (white.first < 0 || white.first >= 8 || white.second < 0 || white.second >= 8 ||
        black.first < 0 || black.first >= 8 || black.second < 0 || black.second >= 8) {
        throw std::domain_error("Las posiciones deben estar dentro del tablero de 8x8.");
    }

    if (white == black) {
        throw std::domain_error("Las reinas no pueden estar en la misma casilla.");
    }

    white_queen = white;
    black_queen = black;
}

std::pair<int, int> chess_board::white() const {
    return white_queen;
}

std::pair<int, int> chess_board::black() const {
    return black_queen;
}

bool chess_board::can_attack() const {
    if (white_queen.first == black_queen.first) return true;
    if (white_queen.second == black_queen.second) return true;
    if (std::abs(white_queen.first - black_queen.first) == std::abs(white_queen.second - black_queen.second)) return true;

    return false;
}

}
