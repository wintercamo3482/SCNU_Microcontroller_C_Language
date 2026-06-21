#include "Morse.h"

#include <stdint.h>

Morse::Morse()
{
    mo_alphabet[0] = ".-";      // A
    mo_alphabet[1] = "-...";    // B
    mo_alphabet[2] = "-.-.";    // C
    mo_alphabet[3] = "-..";     // D
    mo_alphabet[4] = ".";       // E
    mo_alphabet[5] = "..-.";    // F
    mo_alphabet[6] = "--.";     // G
    mo_alphabet[7] = "....";    // H
    mo_alphabet[8] = "..";      // I
    mo_alphabet[9] = ".---";    // J
    mo_alphabet[10] = "-.-";    // K
    mo_alphabet[11] = ".-..";   // L
    mo_alphabet[12] = "--";     // M
    mo_alphabet[13] = "-.";     // N
    mo_alphabet[14] = "---";    // O
    mo_alphabet[15] = ".--.";   // P
    mo_alphabet[16] = "--.-";   // Q
    mo_alphabet[17] = ".-.";    // R
    mo_alphabet[18] = "...";    // S
    mo_alphabet[19] = "-";      // T
    mo_alphabet[20] = "..-";    // U
    mo_alphabet[21] = "...-";   // V
    mo_alphabet[22] = ".--";    // W
    mo_alphabet[23] = "-..-";   // X
    mo_alphabet[24] = "-.--";   // Y
    mo_alphabet[25] = "--..";   // Z

    mo_digit[0] = "-----";      // 0
    mo_digit[1] = ".----";      // 1
    mo_digit[2] = "..---";      // 2
    mo_digit[3] = "...--";      // 3
    mo_digit[4] = "....-";      // 4
    mo_digit[5] = ".....";      // 5
    mo_digit[6] = "-....";      // 6
    mo_digit[7] = "--...";      // 7
    mo_digit[8] = "---..";      // 8
    mo_digit[9] = "----.";      // 9

    mo_slash = "-..-.";         // /
    mo_question = "..--..";     // ?
    mo_comma = "--..--";        // ,
    mo_period = ".-.-.-";       // .
    mo_plus = ".-.-.";          // +
    mo_equal = "-...-";         // =
}


std::string Morse::charToMorse(char c8_ch)
{
    std::string o_ret = "";

    do
    {
        if (isalpha(c8_ch))
        {
            c8_ch = tolower(c8_ch);
            o_ret = mo_alphabet[c8_ch - 'a'];
            break;
        }
        else if (isdigit(c8_ch))
        {
            o_ret = mo_digit[c8_ch - '0'];
            break;
        }
        else if (c8_ch == '/')
        {
            o_ret = mo_slash;
            break;
        }
        else if (c8_ch == '?')
        {
            o_ret = mo_question;
            break;
        }
        else if (c8_ch == ',')
        {
            o_ret = mo_comma;
            break;
        }
        else if (c8_ch == '.')
        {
            o_ret = mo_period;
            break;
        }
        else if (c8_ch == '+')
        {
            o_ret = mo_plus;
            break;
        }
        else if (c8_ch == '=')
        {
            o_ret = mo_equal;
            break;
        }
        
    } while (0);

    return o_ret;
}

char Morse::morseToChar(std::string o_code)
{
    char c8_ret = '\0';

    do
    {
        for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
        {
            if (mo_alphabet[s32_i] == o_code)
            {
                c8_ret = 'a' + s32_i;
                break;
            }
        }

        for (int32_t s32_i = 0; s32_i < NUMBER_NUM; s32_i++)
        {
            if (mo_digit[s32_i] == o_code)
            {
                c8_ret = '0' + s32_i;
                break;
            }
        }
        
        if (o_code == mo_slash)
        {
            c8_ret = '/';
            break;
        }
        else if (o_code == mo_question)
        {
            c8_ret = '?';
            break;
        }
        else if (o_code == mo_comma)
        {
            c8_ret = ',';
            break;
        }
        else if (o_code == mo_period)
        {
            c8_ret = '.';
            break;
        }
        else if (o_code == mo_plus)
        {
            c8_ret = '+';
            break;
        }
        else if (o_code == mo_equal)
        {
            c8_ret = '=';
            break;
        }
        
    } while (0);
    
    return c8_ret;
}

void Morse::text2Morse(std::string o_text, std::string & ro_morse)
{
    std::string o_code = "";
    
    ro_morse = "";

    for (int32_t s32_i = 0; s32_i < o_text.size(); s32_i++)
    {
        if (o_text[s32_i] == ' ')
        {
            ro_morse += "  ";
            continue;
        }
        
        o_code = charToMorse(o_text[s32_i]);

        if (o_code != "")
        {
            ro_morse += o_code;
            ro_morse += " ";
        }
    }
}

bool Morse::morse2Text(std::string o_morse, std::string& ro_text)
{
    bool b1_ret = false;
    
    ro_text = "";

    char c8_ch = '\0';
    char c8_decoded = '\0';
    int32_t s32_space_count = 0;
    std::string o_token = "";
    
    do
    {
        for (int32_t s32_i = 0; s32_i <= o_morse.size(); s32_i++)
        {
            if (s32_i < o_morse.size())
            {
                c8_ch = o_morse[s32_i];
            }
            else
            {
                c8_ch = ' ';
            }

            if (c8_ch != ' ')
            {
                o_token += c8_ch;
                s32_space_count = 0;
            }
            else
            {
                if (o_token != "")
                {
                    c8_decoded = morseToChar(o_token);

                    if (c8_decoded == '\0')
                    {
                        b1_ret = false;
                        break;
                    }

                    ro_text += c8_decoded;
                    o_token = "";
                }

                s32_space_count++;

                if (s32_space_count == 3)
                {
                    ro_text += " ";
                }
            }
        }

        b1_ret = true;

    } while (0);

    return b1_ret;
}