/*
 * Board.h
 *
 *  Created on: Apr 25, 2016
 *      Author: peress
 */

#ifndef BOARD_H_
#define BOARD_H_

namespace tictactoe {

class Board {
public:
	enum class State {
		VALID, DRAW, WINNER_X, WINNER_O
	};

	Board();

	bool move(int x, int y);

	State getBoardState();

private:
	bool is_turn_x;
	int board[3][3];
};

} /* namespace tictactoe */

#endif /* BOARD_H_ */
