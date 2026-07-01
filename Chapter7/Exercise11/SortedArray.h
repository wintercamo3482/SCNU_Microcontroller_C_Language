#ifndef SortedArray_H
#define SortedArray_H

#include <stdint.h>

class SortedArray
{
private:
	int32_t ms32_size;		// 현재 배열의 크기
	int32_t* mps32_p;		// 정수 배열에 대한 포인터
	void sort();			// 정수 배열을 오름차순으로 정렬
	
public:
	SortedArray();			// mps32_p는 NULL로 ms32_size는 0으로 초기화
	SortedArray(const SortedArray& ro_src);	// 복사 생성자
	SortedArray(int32_t as32_p[], int32_t s32_size);	// 생성자, 정수 배열과 크기를 전달받음
	~SortedArray();			// 소멸자
	SortedArray operator+(const SortedArray& ro_op2);	// 현재 배열에 ro_op2 배열 추가
	SortedArray operator=(const SortedArray& ro_op2);	// 현재 배열에 ro_op2 배열 복사
	void show();			// 배열의 원소 출력
};

#endif /* #ifndef SortedArray_H */