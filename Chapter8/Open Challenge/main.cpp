#include "Book.h"
#include "ConversationBook.h"
#include "CompactDisc.h"

#include <iostream>

int main(void)
{
    Product* pao_product[MAX_PRODUCT];
    
    std::string o_description;
    std::string o_producer;
    std::string o_title;
    std::string o_author;
    std::string o_album_title;
    std::string o_singer;
    std::string o_language;

    int32_t s32_count = 0;
    int32_t s32_menu = 0;
    int32_t s32_kind = 0;
    int32_t s32_price = 0;
    int32_t s32_isbn;

    int32_t as32_types[MAX_PRODUCT];
    std::memset(as32_types, 0, sizeof(int32_t) * MAX_PRODUCT);

    std::cout << "***** 상품 관리 프로그램을 작동합니다 *****" << std::endl;

    do
    {
        std::cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
        std::cin >> s32_menu;
        std::cin.ignore();

        if (s32_menu == 1)
        {
            std::cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
            std::cin >> s32_kind;
            std::cin.ignore();

            std::cout << "상품설명>>";
            std::getline(std::cin, o_description);

            std::cout << "생산자>>";
            std::getline(std::cin, o_producer);

            std::cout << "가격>>";
            std::cin >> s32_price;
            std::cin.ignore();

            if (s32_kind == 1)
            {
                std::cout << "책제목>>";
                std::getline(std::cin, o_title);

                std::cout << "저자>>";
                std::getline(std::cin, o_author);

                std::cout << "ISBN>>";
                std::cin >> s32_isbn;
                std::cin.ignore();

                pao_product[s32_count] = new Book(s32_count, s32_price, o_description, o_producer, s32_isbn, o_author, o_title);
                as32_types[s32_count] = 1;
            }
            else if (s32_kind == 2)
            {
                std::cout << "앨범제목>>";
                std::getline(std::cin, o_album_title);

                std::cout << "가수>>";
                std::getline(std::cin, o_singer);

                pao_product[s32_count] = new CompactDisc(s32_count, s32_price, o_description, o_producer, o_album_title, o_singer);
                as32_types[s32_count] = 2;
            }
            else
            {
                std::cout << "책제목>>";
                std::getline(std::cin, o_title);

                std::cout << "저자>>";
                std::getline(std::cin, o_author);

                std::cout << "언어>>";
                std::getline(std::cin, o_language);

                std::cout << "ISBN>>";
                std::cin >> s32_isbn;
                std::cin.ignore();

                pao_product[s32_count] = new ConversationBook(s32_count, s32_price, o_description, o_producer, s32_isbn, o_author, o_title, o_language);
                as32_types[s32_count] = 3;
            }
            s32_count++;
        }
        
        else if (s32_menu == 2)
        {
            for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
            {
                if (as32_types[s32_i] == 1)
                {
                    ((Book*)pao_product[s32_i])->ShowBook();
                }
                else if (as32_types[s32_i] == 2)
                {
                    ((CompactDisc*)pao_product[s32_i])->ShowCD();
                }
                else
                {
                    ((ConversationBook*)pao_product[s32_i])->ShowConversationBook();
                }
                std::cout << std::endl;
            }
            
        }
        else
        {
            break;
        }
        std::cout << std::endl;
        
    } while (true);

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        delete pao_product[s32_i];
    }

    return 0;
}