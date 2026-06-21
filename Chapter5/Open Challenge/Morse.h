#ifndef MORSE_H
#define MORSE_H

#include <string>

#define ALPHABET_NUM	26
#define NUMBER_NUM		10

class Morse
{
private:
    std::string mo_alphabet[ALPHABET_NUM];	// 알바펫의 모스 부호 저장
    std::string mo_digit[NUMBER_NUM];		// 숫자의 모스 부호 저장

    // 특수 문자의 모스 부호 저장
    std::string mo_slash;
    std::string mo_question;
    std::string mo_comma;
    std::string mo_period;
    std::string mo_plus;
    std::string mo_equal;

    std::string charToMorse(char c8_ch);
    char morseToChar(std::string o_code);

public:
    Morse();								// mo_alphabet[], mo_digit[] 배열 및 특수 문자의 모스 부호 초기화
    void text2Morse(std::string o_text, std::string& ro_morse);	// 영문 텍스트를 모스 부호로 변환
    bool morse2Text(std::string o_morse, std::string& ro_text);	// 모스 부호를 영문 텍스트로 변환
};

#endif /* MORSE_H */