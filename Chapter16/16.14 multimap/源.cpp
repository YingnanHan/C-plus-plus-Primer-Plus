#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;			//����int��������Ϊ������
typedef std::pair<const KeyType, std::string> Pair;	//����Pair���������Ϊpair����װ��һ�����ݣ��������ֱ��ʹ��
typedef std::multimap<const KeyType, std::string> MapCode;	//����MapCodeΪmultimap����д���������ֱ��ʹ��

int main() {
	using namespace std;
	MapCode codes;				//����codes��һ��multimap���͵�����

	codes.insert(Pair(415, "San Francisco"));	//��multimap�����в������ݣ���Ϊÿ�����ݰ�������ֵ�������ͺ�ֵ���ͣ�
												//���������Ҫʹ��pair��ÿ��ʹ��pairʱ����Ҫ���ж��壬��������ʹ����typedef��
												//���˵���pair�Ĳ��裬������Ҫ������д���룺 
												//  codes.insert(pair<const KeyType, std::string>(415, "San Francisco"));
												//ps������д��ĺ��鷳
	codes.insert(Pair(510, "Oakland"));
	codes.insert(Pair(718, "Brooklyn"));
	codes.insert(Pair(718, "Staten Island"));
	codes.insert(Pair(415, "San Rafael"));
	codes.insert(Pair(510, "Berkeley"));

	cout << "Number of cities with area code 415: "
		<< codes.count(415) << endl;				//codes��һ��multimap���͵�������ʹ��count���ռ����ͣ����ؾ��иü���Ԫ����Ŀ
	cout << "Number of cities with area code 718: "
		<< codes.count(718) << endl;
	cout << "Number of cities with area code 510: "
		<< codes.count(510) << endl;
	cout << "Area Code City\n";
	MapCode::iterator it;						//������һ��multimap���͵ĵ�����
	for (it = codes.begin(); it != codes.end(); ++it)	//�õ�����ָ�������Ŀ�ʼλ�ã�Ȼ��ʼѭ��
		cout << "    " << (*it).first << "    " << (*it).second << endl;	//ȡ��������itָ���pair�е�Ԫ�� ���Ƿ����ָ�� it->first��������

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	//pair������MapCode���͵ĵ�������Ŀ����Ϊ�˽���equal_range��Ӧ�ļ�ֵ���ص�������������
	//��������������ʾ��������ü�ƥ�䣬�����ʱ��range��firstԪ�ؾ���lower_bound��
	//secondԪ�ؾ���upper_bound
	cout << "Cities with area code 718:\n";

	for (it = range.first; it != range.second; ++it)	// equal_rangeִ�ж��ֲ��Ҳ������ҳ����м�ֵΪ����718��pair�����ҷ���K-V���ԵĲ��ҽ��������
		cout << (*it).second << endl;					//�����*it��ȡ����Ӧλ�ô���Ԫ�ص�ֵ����

	return 0;
}
