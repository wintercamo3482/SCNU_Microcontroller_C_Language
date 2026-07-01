#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include "Book.h"

class ConversationBook : public Book
{
public:
    ConversationBook(int32_t s32_id = -1, int32_t s32_price = -1, std::string o_producer = "", std::string o_description = "", int32_t s32_isbn = -1, std::string o_author = "", std::string o_title = "", std::string o_language = "");

    void ShowConversationBook();

protected:
    std::string mo_language;
};

#endif /* CONVERSATIONBOOK_H */