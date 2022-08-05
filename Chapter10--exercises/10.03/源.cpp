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
	const char* rtfname();//Ҫʵ����������Ϊ��ʱ����ѭ�������Ҫһ����Ա��������˽�����ݱȽ�
	void handicap(int hc);//�˴���������˽������ͬ��
	//����ĸ�ֵ�ᱨ�����Ը�˽������������ǰ׺g_handicap
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
	cin.get();//��������ʹ��getline����ʹ��Ҫ����֮ǰ�������Ƿ���
	//���з�������������У�ʹ��cin.get()�������з�
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
		if (g[i].rtfname()[0] == '\0')//�����ڵ���setgolf��������ʱʹ����cin.getline()
			//����ѻ��з���Ϊ���ַ��������ַ�����,��˼���һ���ַ�
			// �Ҳ���̫����Ľ��;���Ϊʲô==""����
			break;
		g[i].showgolf();
	}

	g1.handicap(100);
	g1.showgolf();
	return 0;
}