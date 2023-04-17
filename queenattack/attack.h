#ifndef ATTACK_H_INCLUDED
#define ATTACK_H_INCLUDED

#include <iostream>
#include <utility>
#include <stdexcept>
#include <string>

using namespace std;

namespace queen_attack
{
    class board final
    {
    private:
        pair<int,int> queen_white;
        pair<int, int> queen_black;

        static constexpr int board_size = 8;
        static constexpr bool is_on_board(const pair<int,int> queen)
        {
            const auto [row, column] = queen;
            return 0 <= row && row < board_size && 0 <= column && column < board_size;
        }

    public:
        board() : board({0,3}, {7,3}){};
        board(pair<int,int> white, pair<int,int> black):queen_white(white), queen_black(black)
        {
            if (!is_on_board(white))
                throw domain_error("White queen is not on the board");
            if (!is_on_board(black))
                throw domain_error("Black queen is not on the board");
            if (white == black)
                throw domain_error("The queens osition must be distinct");
        }

        [[nodiscard]] pair<int,int> white() const { return queen_white; }
        [[nodiscard]] pair<int,int> black() const { return queen_white; }
        [[nodiscard]] bool can_attack() const
        {
            const auto [white_row, white_column] = queen_white;
            const auto [black_row, black_column] = queen_black;
            return (black_row == white_row ||
                    black_column == white_column ||
                    black_row + black_column == white_row + white_column ||
                    black_row - black_column == white_row - white_column);
        }

        [[nodiscard]] explicit operator string() const
        {
            std::string board {
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                "_ _ _ _ _ _ _ _\n"
                };

            const auto [white_row, white_column] = queen_white;
            board[white_row * board_size * 2 + white_column * 2] = 'W';
            const auto [black_row, black_column] = queen_black;
            board[black_row * board_size * 2 + black_column * 2] = 'B';
            return board;
        }
    };
}


#endif // ATTACK_H_INCLUDED
