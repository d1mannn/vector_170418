#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;


class Vector
{
public:
	Vector() {// ����������� �� ���������
		cur_size = 0; 
		buf_size = 0;
		els = nullptr; 
	};
	Vector(int size) {
		this->cur_size = size;
		this->buf_size = size;
		this->els = new int[buf_size];
		for (int i = 0; i < buf_size; i++)
			els[i] = 0;
	}

	void setVector()
	{
		for (int i = 0; i < cur_size; i++)
		{
			els[i] = i;
		}
	}

	//consturctor copy
	Vector(const Vector &src) { //source - ��������, ������ ��������
		this->cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		//this->els = src.els; // ��� ������ �� �����, �.�. ��������� �� ���� �����. ������� ������
		this->els = new int[cur_size]; //�������� ����� ��� �������� �������
		for (int i = 0; i < cur_size; i++)
		{
			els[i] = src.els[i];
		}
	}

	void print()
	{
		for (int i = 0; i < cur_size; i++) // �������� �� cur_size
		{
			cout << left << setw(5) /*������ ���� 5*/ << els[i]/* << endl*/; // �� ��������� right, �� ����� ������� left
		}
	}

	void push_back(const int & element) { // push back ������ ���� ����������� �������� � �������� ������
		//  � ��������� ��������� ��, ��� ����� �������� � ����� �������
		if (cur_size >= buf_size)
		{	
			int *temp; // ��������� ���������� ��� ������ pushback - ��������� ����� ���������� ������ ������
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}
		els[cur_size++] = element;
	}
	void push_back(const int & element, const int & position) {
		//if (cur_size > 0)
		//	cur_size--; // �������� ��������� ��������

		if (cur_size >= buf_size)
		{
			int *temp; // ��������� ���������� ��� ������ pushback - ��������� ����� ���������� ������ ������
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}
		els[cur_size++]; // ����������� �� 1
		for (int i = 0; i < cur_size; i++)
		{
			if (i == position)
				els[i - 1] = element;
		}
	}

	int &at(int pos)// ���� ������ ������ � ��������� ������� 
	{
		return els[pos - 1];
	}
	~Vector() { //���������� -  ��� �������� ��������� ������������ ������ ���������� ������������� 
		delete[] els;
		els = nullptr;
	};

private:
	int *els;
	int cur_size;
	int buf_size;
};

