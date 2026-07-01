#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

#define MAX_PRODUCT 100

class Product
{
public:
    Product(int32_t s32_id = -1, int32_t s32_price = -1, std::string o_producer = "", std::string o_description = "");

    void ShowProduct();

protected:
    int32_t ms32_id;
    int32_t ms32_price;

    std::string mo_producer;
    std::string mo_description;
};

#endif /* PRODUCT_H */
