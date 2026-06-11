#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"

class Library
{
	std::string mo_name;	// 도서관 이름
	Book* mpo_p;			// 동적 할당받을 Book [] 배열에 대한 포인터
	int32_t ms32_size;		// 동적 할당받은 Book [] 배열의 크기
	int32_t ms32_next;		// mpo[] 배열에 다음 삽입될 위치

public:
	Library(std::string o_name, int32_t s32_size);		// 생성자
	~Library();											// 소멸자
	void add(std::string o_name, int32_t s32_price);	// 책 한권 입고하여 정보 저장
	void show();										// 도서관에 들어 있는 모든 책 출력
	Book* mostExpensive();								// 가장 비싼 Book 객체에 대한 포인터 리턴. 책이 없으면 NULL 리턴
};

#endif /* LIBRARY_H */