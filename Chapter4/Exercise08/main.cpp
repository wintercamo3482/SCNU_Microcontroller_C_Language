#include <iostream>
#include <string>
#include <stdint.h>

#define DEFAULT_PORT    80

#define START_POS_HOST  3

int main(void)
{
    std::string o_url;
    std::string o_protocol;
    std::string o_host;
    std::string o_rest;

    int32_t s32_port = DEFAULT_PORT;

    size_t sz_protocol_pose = 0;
    size_t sz_host_start = 0;
    size_t sz_colon_pose = 0;
    size_t sz_slash_pose = 0;

    do
    {
        s32_port = DEFAULT_PORT;
        o_rest = "";

        std::cout << "웹 주소 입력>>";
        std::cin >> o_url;
        
        if (o_url == "그만")
        {
            break;
        }

        sz_protocol_pose = o_url.find("://");
        o_protocol = o_url.substr(0, sz_protocol_pose);

        sz_host_start = sz_protocol_pose + START_POS_HOST;
        sz_colon_pose = o_url.find(':', sz_host_start);
        sz_slash_pose = o_url.find('/', sz_host_start);

        if (sz_colon_pose == std::string::npos && sz_slash_pose == std::string::npos)
        {
            o_host = o_url.substr(sz_host_start);
        }
        else if (sz_colon_pose != std::string::npos &&
                (sz_slash_pose == std::string::npos || sz_colon_pose < sz_slash_pose))
        {
            o_host = o_url.substr(sz_host_start, sz_colon_pose - sz_host_start);
            
            if (sz_slash_pose == std::string::npos)
            {
                s32_port = stoi(o_url.substr(sz_colon_pose + 1));
            }

            else
            {
                s32_port = stoi(o_url.substr(sz_colon_pose + 1, sz_slash_pose - sz_colon_pose - 1));
                o_rest = o_url.substr(sz_slash_pose);
            }
        }
        else
        {
            o_host = o_url.substr(sz_host_start, sz_slash_pose - sz_host_start);
            o_rest = o_url.substr(sz_slash_pose);
        }

        std::cout << "프로토콜: " << o_protocol << std::endl;
        std::cout << "호스트: " << o_host << std::endl;
        std::cout << "포트: " << s32_port << std::endl;
        std::cout << "나머지 부분: " << (o_rest.empty() ? "/" : o_rest) << std::endl;

    } while (true);
    
    return 0;
}