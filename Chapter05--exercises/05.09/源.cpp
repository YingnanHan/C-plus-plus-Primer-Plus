#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	string str;
	int count = 0;
	cin >> str;//cin���Կո� �س���Ԫ�ؽ��ж�һ�����ӵķָ�
	while (str != "done")
	{
		count++;
		cin >> str;
	}
	cout << count;

	return 0;
}
