#include "Book.h"

#include <iostream>

Book::Book(int32_t s32_id, int32_t s32_price, std::string o_producer, std::string o_description, int32_t s32_isbn, std::string o_author, std::string o_title)
: Product(s32_id, s32_price, o_producer, o_description)
{
	ms32_isbn = s32_isbn;
	mo_author = o_author;
	mo_title = o_title;
}

void Book::ShowBook()
{
	ShowProduct();
	std::cout << "ISBN : " << ms32_isbn << std::endl;
	std::cout << "책제목 : " << mo_title << std::endl;
	std::cout << "저자 : " << mo_author << std::endl;
}