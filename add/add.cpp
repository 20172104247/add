// add.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CSum
{
private:
	int feet;
	int inches;
public:
	void display();
	void set(int fe,int in);
	CSum operator -(CSum & pdd);
};
void CSum::display()
{
	if (inches < 0)
	{
		inches = (-1)*inches;
		feet = inches / 12;
		inches = inches % 12;
		feet = feet*(-1);
	}
	else
	{
		feet = inches / 12;
		inches = inches % 12;
	}
	cout << feet << "英尺" << inches << "英寸"<<endl;
}
void CSum::set(int fe,int in)
{
	inches = in + fe * 12;
}
CSum CSum::operator-(CSum & pdd)
{
	CSum tem;
	tem.set(feet - pdd.feet, inches - pdd.inches);
	return tem;
}

int main()
{
	CSum A, B, C;
	int i, k, x, y;
	cin >> x >> y >> i >> k;
	A.set(x, y);
	B.set(i,k);
	C = A - B;
	C.display();
    return 0;
}

