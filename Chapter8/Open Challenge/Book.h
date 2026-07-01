#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

class Book : public Product
{
public:
	Book(int32_t s32_id = -1, int32_t s32_price = -1, std::string o_producer = "", std::string o_description = "", int32_t s32_isbn = -1, std::string o_author = "", std::string o_title = "");

	void ShowBook();

protected:
	int32_t ms32_isbn;
	std::string mo_author;
	std::string mo_title;
};

#endif /* BOOK_H */