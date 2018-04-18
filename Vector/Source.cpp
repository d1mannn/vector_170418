#include "Vector.h"
#include "Rectangle.h"
#include <fstream>

int main()
{	
	srand(time(NULL));
	double x; // нужны эти переменны чтобы работать как с числами а не как с символами
	double y;
	double xa, ya, xb, yb, xc, yc, xd, yd;
	double xCenter, yCenter, sideA, sideB;
	int i = 0;
	Rectangle *pointer; // состоит из 5 точек
	pointer = new Rectangle[5];
	
	ifstream in;
	//ofstream out2;
	ofstream out3;
	//out2.open("write.txt", ios::app); // открываем готовый и редактируем его дозаписыва€ в конец строки
	out3.open("write3.txt");
	in.open("read.txt");
	if (!in) {
		cerr << "file open error" << endl;
	}
	else
	{	
		while (!in.eof())
		{
			//in >> xa>> ya>> xb>> yb>>xc>> yc>> xd>> yd;
			//pointer[i++].setXY(x, y); // записывает в i = 0, а после делает i++;
			in >> xCenter >> yCenter >> sideA >> sideB;
			Rectangle R(xCenter, yCenter, sideA, sideB);
			pointer[i++] = R;
		}
	}
	//pointer[0].move('x', 5);
	//pointer[0].move('x', 5);

	pointer[0].resize(2, 10);
	out3 << pointer[0].getXA() << "\t" << pointer[0].getYA() << "\t"
		<< pointer[0].getXB() << "\t" << pointer[0].getYB() << "\t"
		<< pointer[0].getXC() << "\t" << pointer[0].getYC() << "\t"
		<< pointer[0].getXD() << "\t" << pointer[0].getYD() << "\t" << endl;

	//for (int k = 0; k < i; k++)
	//{	
	//	pointer[k].resize(2, 10);
	//	out3 << pointer[k].getXA() << "\t" << pointer[k].getYA() << "\t"
	//		<< pointer[k].getXB() << "\t" << pointer[k].getYB() << "\t"
	//		<< pointer[k].getXC() << "\t" << pointer[k].getYC() << "\t"
	//		<< pointer[k].getXD() << "\t" << pointer[k].getYD() << "\t" << endl;
	//	//cout << pointer[k].getX() << "\t" << pointer[k].getY() << endl;
	//	/*out2 << pointer[k].getX() << "\t" << pointer[k].getY() << endl;*/ // с файла считываем в ‘јйл
	//}
	

	//pointer[0].resize(2.0, 3.4);



	//Pointer pointer(x, y);
	////ofstream out("write.txt"); // создаем при открытии
	//cout << pointer.getX() << "\t" << pointer.getY() << endl;
	////out << pointer.getX() << "\t" << pointer.getY() << endl; // можем использовать out а не cout т.к. выше открыли поток
	//out2 << pointer.getX() << "\t" << pointer.getY() << endl;
	in.close(); // заркываем поток
	out3.close();
	//out2.close();
//	out.close();
	delete[] pointer;
	system("pause");
	return 0;
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