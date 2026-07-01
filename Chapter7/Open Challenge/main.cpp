#include "Histogram.h"

int main(void)
{
	Histogram o_song("Wise men say, \nonly fools rush in But I can't help, \n");
	o_song << "falling" << " in love with you." << "- by ";	// 히스토그램에 문자열 추가
	o_song << 'K' << 'i' << 't';							// 히스토그램에 문자 추가
	!o_song;												// 히스토그램 그리기
	
	return 0;
}