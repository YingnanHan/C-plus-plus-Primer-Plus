// float num.cpp -- floating points types

#include<iostream>

using namespace std;

int main()
{
	/*
		C++��ͨ��cout��ʵ�ָ�ʽ�������������C������ͨ��printf()��ʵ�ָ�
		ʽ�����cout.setf()��������ͨ�����ø�ʽ��־�����������ʽ������
		ios_base::fixed      ��ʾ���������ļ���������ʾ������(���ѧ���������Ӧ)��
		ios_base::floatfield ��ʾ��С�������6λС����
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0; //���������ڲ��� float�����double�ľ�������
	const float million = 1.0e6;

	cout << "tub = " << tub << ", a million tubs = " << million * tub << endl << " and ten million tubs " << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = " << million * mint << endl;
	return 0;
}