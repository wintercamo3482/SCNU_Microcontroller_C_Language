#include "Board.h"

#include <iostream>

int main(void)
{
    // Board o_myBoard; // 주석을 지우면 컴파일 오류 발생. 객체 생성 불가
    while (true)
    {
        int32_t s32_menu;
        std::string o_text;

        std::cout << "1:게시글 입력, 2:게시글 보기>>";
        std::cin >> s32_menu;
        std::cin.ignore(1); // 뒤의 std::
        
        switch (s32_menu)
        {
        case 1:
            std::getline(std::cin, o_text); // 빈칸을 포함하는 텍스트 입력
            Board::add(o_text);             // 게시판에 입력받은 텍스트 추가
            break;

        case 2:
            Board::print();                 // 게시판 전체 출력
        }
    }
}