#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	string str;
	int count = 0;
	cin >> str;//cin会以空格 回车等元素进行对一个句子的分割
	while (str != "done")
	{
		count++;
		cin >> str;
	}
	cout << count;

	return 0;
}
