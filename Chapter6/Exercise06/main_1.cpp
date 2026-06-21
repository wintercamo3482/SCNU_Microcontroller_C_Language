#include "GameBoard_1.h"

int main(void)
{
	GameBoard o_board;
	o_board.increase();				// 청군 백군 모두 10점 증가
	o_board.increase(20);			// 청군 백군 모두 20점 증가
	o_board.increase(30, "청군");	// 청군만 30점 증가
	o_board.increase(40, "백군");	// 백군만 30점 증가
	o_board.show();					// 청군 백군 모두 점수 출력
	o_board.show("청군");			// 청군 점수만 출력

	return 0;
}