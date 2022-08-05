#include <iostream>
using namespace std;
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <string>

const int NUM = 10000000;
int main()
{
    cout << "-------begin--------" << endl;
    srand(time(0));
    vector<int> vi0(NUM);
    for (int i = 0; i < NUM; i++)
        vi0[i] = rand();

    vector<int> vi(vi0);//创建vector<int>对象vi和list<int>对象li，它们的长度都和初始值与vi0相同
    list<int> li(vi0.begin(), vi0.end());
    cout << "Measure the sort() algorithm's running time for vector<int>:\n";
    clock_t vector_start = clock();
    sort(vi.begin(), vi.end());
    clock_t vector_end = clock();
    cout << "The time is " << (double)(vector_end - vector_start) / CLOCKS_PER_SEC << "s.\n";

    cout << "Measure the sort() algorithm's running time for list<int>:\n";
    clock_t list_start = clock();
    li.sort();
    clock_t list_end = clock();
    cout << "The time is " << (double)(list_end - list_start) / CLOCKS_PER_SEC << "s.\n";

    cout << "Measure the copy() and sort() algorithm's running time:\n";
    copy(vi0.begin(), vi0.end(), li.begin());//li重置为排序的vi0的内容
    clock_t copy_start = clock();
    copy(li.begin(), li.end(), vi.begin());//将li的内容复制到vi中
    sort(vi.begin(), vi.end());//对vi进行排序
    copy(vi.begin(), vi.end(), li.begin());//并将结果复制到li中
    clock_t copy_end = clock();
    cout << "The time is " << (double)(copy_end - copy_start) / CLOCKS_PER_SEC << "s.\n";

    return 0;
}