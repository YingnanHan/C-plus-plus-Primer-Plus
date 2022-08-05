#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;			//定义int类型数据为键类型
typedef std::pair<const KeyType, std::string> Pair;	//定义Pair这个新类型为pair，封装了一对数据，方便后面直接使用
typedef std::multimap<const KeyType, std::string> MapCode;	//定义MapCode为multimap的缩写，方便后面直接使用

int main() {
	using namespace std;
	MapCode codes;				//定义codes是一个multimap类型的容器

	codes.insert(Pair(415, "San Francisco"));	//向multimap容器中插入数据，因为每个数据包含两个值（键类型和值类型）
												//因此这里需要使用pair，每次使用pair时均需要进行定义，所以这里使用了typedef，
												//简化了调用pair的步骤，否则需要这样书写代码： 
												//  codes.insert(pair<const KeyType, std::string>(415, "San Francisco"));
												//ps：这样写真的很麻烦
	codes.insert(Pair(510, "Oakland"));
	codes.insert(Pair(718, "Brooklyn"));
	codes.insert(Pair(718, "Staten Island"));
	codes.insert(Pair(415, "San Rafael"));
	codes.insert(Pair(510, "Berkeley"));

	cout << "Number of cities with area code 415: "
		<< codes.count(415) << endl;				//codes是一个multimap类型的容器，使用count接收键类型，返回具有该键的元素数目
	cout << "Number of cities with area code 718: "
		<< codes.count(718) << endl;
	cout << "Number of cities with area code 510: "
		<< codes.count(510) << endl;
	cout << "Area Code City\n";
	MapCode::iterator it;						//定义了一个multimap类型的迭代器
	for (it = codes.begin(); it != codes.end(); ++it)	//让迭代器指向容器的开始位置，然后开始循环
		cout << "    " << (*it).first << "    " << (*it).second << endl;	//取出迭代器it指向的pair中的元素 （是否可用指针 it->first？？？）

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	//pair了两个MapCode类型的迭代器，目的是为了接收equal_range对应的键值返回的两个迭代器，
	//这两个迭代器表示的区间与该键匹配，因此这时的range的first元素就是lower_bound，
	//second元素就是upper_bound
	cout << "Cities with area code 718:\n";

	for (it = range.first; it != range.second; ++it)	// equal_range执行二分查找操作，找出所有键值为参数718的pair，并且返回K-V各自的查找结果迭代器
		cout << (*it).second << endl;					//这里的*it是取出对应位置处的元素的值类型

	return 0;
}
