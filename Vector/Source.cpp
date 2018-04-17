#include "Vector.h"

int main()
{	
	srand(time(NULL));
	int length = 4 + rand() % 4;
	Vector v2(length);
	//v2.setVector();
	//Vector v1(10); // вектор из 10 элементов
	//Vector v2(v1); // копируем при динамике
	//v2.print();
	//v1.push_back(15);
	v2.at(4) = 5;
	v2.print();
	/*v2.push_back(15, 2);
	cout << endl;
	v2.print();*/
	v2.~Vector();
	system("pause");
	return 0;
}