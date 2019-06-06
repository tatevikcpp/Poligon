#include "Polynom.h"
#include <iostream>
using namespace std;

int main()
{
	Polynom *t = new Triangle(10, 2, 3, 5);
	cout << "Area Triangle is:  " << (t->area()) << endl;
	cout << "Per Triangle is:  " << (t->per()) << endl;
	

	Polynom *r = new Rectangle(5, 10);
	cout << "Area Rectangle is:  " << (r->area()) << endl;
	cout << "Per Rectangle is:  " << (r->per()) << endl;

	system("pause");
}