// fltadd.cpp -- precision problems with float
#include<iostream>

using namespace std;

int main()
{
	double a = 2.34e22f;
	double b = a + 1.0f;//floatֻ�ܱ�ʾ���ֵ�ǰ��λ����ǰ��λ��1�����˵�23λdouble���Ȳ���

	cout << "a = " << a << endl;
	cout << "b-a = " << b - a << endl;
	return 0;
}