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
	cout << feet << "英尺" << inches << "英寸"<<endl;
}
void CSum::set(int fe,int in)
{
	feet = fe+in/12;
	inches = in%12;
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
	A.set(15,9);
	int i, k;
	cin >> i >> k;
	B.set(i,k);
	C = A - B;
	C.display();
    return 0;
}

