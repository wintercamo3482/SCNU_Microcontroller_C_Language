#include <iostream>
#include <string>

std::string erase(std::string o_text)
{
    std::string o_ret = o_text;
    size_t sz_pos = 0;

    while ((sz_pos = o_ret.find(" ")) != std::string::npos)
    {
        o_ret.erase(sz_pos, 1);
    }

    return o_ret;
}

std::string erase(std::string o_text, std::string o_remove)
{
    std::string o_ret = o_text;
    size_t sz_pos = 0;

    while ((sz_pos = o_ret.find(o_remove)) != std::string::npos)
    {
        o_ret.erase(sz_pos, o_remove.length());
    }
    
    return o_ret;
}

std::string erase(std::string o_text, std::string o_old, std::string o_new)
{
    std::string o_ret = o_text;
    size_t sz_pos = 0;
    
    while ((sz_pos = o_ret.find(o_old, sz_pos)) != std::string::npos)
    {
        o_ret.replace(sz_pos, o_old.length(), o_new);
        sz_pos += o_new.length();
    }

    return o_ret;
}

int main(void)
{
    std::string o_a = erase("Hello  world,  Yaho");             // 모든 " " 지우기
    std::cout << "모든 빈 칸 지운 결과\t" << o_a << std::endl;

    std::string o_b = erase("Hello  world,  Yaho", "ll");       // 모든 "ll" 지우기
    std::cout << "모든 빈 칸 지운 결과\t" << o_b << std::endl;

    std::string o_c = erase("Hello  world,  Yaho", "o", "77");  // 모든 "o"를 "77"로 바꾸기
    std::cout << "모든 빈 칸 지운 결과\t" << o_c << std::endl;

    return 0;
}