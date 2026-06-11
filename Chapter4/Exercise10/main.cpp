#include "Recommender.h"

#include <iostream>

using namespace std;

int main(void)
{
    Recommender* po_mr = new Recommender("베스트 영화 추천", 3);
    po_mr->read();
    po_mr->list();
    Movie o_m = po_mr->recommend();
    cout << "추천 영화: " << o_m.getTitle() << endl;
    delete po_mr;

    return 0;
}