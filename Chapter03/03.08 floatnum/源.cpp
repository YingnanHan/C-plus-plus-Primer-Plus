// float num.cpp -- floating points types

#include<iostream>

using namespace std;

int main()
{
	/*
		C++中通过cout来实现格式输出，就类似于C语言中通过printf()来实现格
		式输出。cout.setf()的作用是通过设置格式标志来控制输出形式，其中
		ios_base::fixed      表示：用正常的记数方法显示浮点数(与科学计数法相对应)；
		ios_base::floatfield 表示：小数点后保留6位小数。
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0; //本程序用于阐明 float相对于double的精度限制
	const float million = 1.0e6;

	cout << "tub = " << tub << ", a million tubs = " << million * tub << endl << " and ten million tubs " << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = " << million * mint << endl;
	return 0;
}