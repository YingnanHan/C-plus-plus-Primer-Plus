#include<iostream>
#include<cstring>

using namespace std;

const int Len = 40;
class Golf {
private:
	char fullname[Len];
	int g_handicap;
public:
	Golf(const char* name, int hc);
	Golf();
	void setgolf();
	const char* rtfname();//要实现输入名字为空时结束循环，因此要一个成员函数返回私有数据比较
	void handicap(int hc);//此处函数名和私有数据同名
	//后面的赋值会报错，所以给私有数据名加了前缀g_handicap
	void showgolf()const;
};


Golf::Golf(const char* name, int hc) {
	strcpy_s(fullname, name);
	g_handicap = hc;
}
Golf::Golf() {
	strcpy_s(fullname, "no name");
	g_handicap = 0;
}
void Golf::setgolf() {
	cout << "Please enter the information for golf" << endl;
	Golf golf;
	cout << "The fullname: ";
	cin.getline(golf.fullname, Len);
	cout << "The handicap: ";
	cin >> golf.g_handicap;
	cin.get();//凡是输入使用getline（）使都要考虑之前的输入是否有
	//换行符留在输入队列中，使用cin.get()丢弃换行符
	*this = golf;
}
const char* Golf::rtfname() {
	return fullname;
}
void Golf::handicap(int hc) {
	g_handicap = hc;
}
void Golf::showgolf()const {
	cout << "The information of " << fullname << ": \n";
	cout << "Fullname: " << fullname << endl;
	cout << "Handicap: " << g_handicap << endl;
}


int main() {
	Golf g1;
	g1.showgolf();

	Golf g[3];
	for (int i = 0; i < 3; i++) {
		g[i].setgolf();
		if (g[i].rtfname()[0] == '\0')//这里在调用setgolf输入名字时使用了cin.getline()
			//它会把换行符变为空字符储存在字符串里,因此检查第一个字符
			// 我不会太具体的解释具体为什么==""不对
			break;
		g[i].showgolf();
	}

	g1.handicap(100);
	g1.showgolf();
	return 0;
}