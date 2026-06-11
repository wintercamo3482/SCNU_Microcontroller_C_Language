#include "StringTokenizer.h"

#include <iostream>

using namespace std;

int main(void)
{
	StringTokenizer o_code("i++; for(); sum+=i;", " ");	// 텍스트에서 " "으로 문자열 분리
	
	for (int32_t s32_i = 0; s32_i < o_code.length(); s32_i++)
		cout << o_code.next() << endl;

	StringTokenizer o_text("모짜르트,베토벤,슈베르트,황기태", ",");	// ","으로 문자열 분리
	
	while (o_text.hasNext())	// 분리된 단어 하나씩 출력
		cout << o_text.next() << endl;
}