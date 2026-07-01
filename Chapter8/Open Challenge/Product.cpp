#include "Product.h"

#include <iostream>

Product::Product(int32_t s32_id, int32_t s32_price, std::string o_producer, std::string o_description)
{
    ms32_id = s32_id;
    ms32_price = s32_price;
    mo_producer = o_producer;
    mo_description = o_description;
}

void Product::ShowProduct()
{
    std::cout << "--- 상품ID : " << ms32_id << std::endl;
    std::cout << "상품설명 : " << mo_description << std::endl;
    std::cout << "생산자 : " << mo_producer << std::endl;
    std::cout << "가격 : " << ms32_price << std::endl;
}