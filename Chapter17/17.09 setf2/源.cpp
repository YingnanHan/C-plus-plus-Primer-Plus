// setf2.cpp
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	// �����
	cout.setf(ios_base::left, ios_base::adjustfield);
	// ������ǰ�����+
	cout.setf(ios_base::showpos);
	// ��ʾĩβС����
	cout.setf(ios_base::showpoint);
	// �涨��ȷ����λ
	cout.precision(3);
	// ʹ�ÿ�ѧ������, ������֮ǰ������
	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Left Justification:\n";
	long n;
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(2);
		cout << sqrt(double(n)) << "|\n";
	}
	// �Ҷ���
	cout.setf(ios_base::right, ios_base::adjustfield);
	// ʹ�ö���С����
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Right Justification:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	return 0;
}