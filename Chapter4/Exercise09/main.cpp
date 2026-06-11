#include "Library.h"

#include <iostream>

using namespace std;

int main(void)
{
	Library* po_lib = new Library("한국도서관", 10);
	po_lib->add("명품 C++", 30000);
	po_lib->add("라즈베리파이", 34000);
	po_lib->add("HTML5", 33000);
	po_lib->show();
	Book* po_b = po_lib->mostExpensive();
	cout << "가장 비싼 책:" << po_b->getTitle() << ", " << po_b->getPrice() << endl;
	delete po_lib;
}