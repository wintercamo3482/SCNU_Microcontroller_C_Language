#include "Wallet.h"

int main(void)
{
    Wallet o_a("옥지윤", 2000);
    Wallet o_b("성주연", 100);
    Wallet o_c("박채원");          // 박채원 지갑은 0원

    o_a += 1000;
    o_a.show();
    o_a -= 500;
    o_a.show();

    o_b = o_a + o_b + 100;         // = 연산자는 금액만 복사
    o_b.show();                    // o_b의 주인은 "성주연"으로 출력
    o_c = 500 + o_b;               // = 연산자는 금액만 복사
    o_c.show();                    // o_c의 주인은 "박채원"으로 출력

    return 0;
}