//  operator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CTeet
{
private:
	int feet;
	int inch;
public:
	CTeet()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int a, int b);
	void display();
	//	CTeet add(CTeet & obif);
	CTeet operator +(CTeet & ojbf);
	CTeet operator -(CTeet & ojbf);
};
void CTeet::setvalue(int a, int b)
{
	int g;
	g = a * 12 + b;
	feet = g / 12;
	inch = g % 12;
}
void CTeet::display()
{
	cout << feet << "英尺" << inch << "英寸" << endl;
}
CTeet CTeet::operator+(CTeet & oj)
{
	CTeet temp;
	temp.setvalue(feet + oj.feet, inch + oj.inch);
	return temp;
}
CTeet CTeet::operator -(CTeet & bf)
{
	CTeet pow;
	pow.setvalue(feet - bf.feet, inch - bf.inch);
	return pow;
}
int main()
{
	CTeet a, b, c, d;
	a.setvalue(1, 3);
	b.setvalue(2, 2);
	c = a - b;
	c.display();
	return 0;
}




