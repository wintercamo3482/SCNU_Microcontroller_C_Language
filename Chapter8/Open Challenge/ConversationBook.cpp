#include "ConversationBook.h"

#include <iostream>

ConversationBook::ConversationBook(int32_t s32_id, int32_t s32_price, std::string o_producer, std::string o_description, int32_t s32_isbn, std::string o_author, std::string o_title, std::string o_language)
: Book(s32_id, s32_price, o_producer, o_description, s32_isbn, o_author, o_title)
{
    mo_language = o_language;
}

void ConversationBook::ShowConversationBook()
{
    ShowBook();
    std::cout << "언어 : " << mo_language << std::endl;
}