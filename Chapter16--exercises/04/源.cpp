//����ȥ��
#include <iostream>
using namespace std;
#include <algorithm>

int reduce(long ar[], int n);

int main()
{
    long arr_test[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 56 };
    cout << "Original array:\n";
    for (int i = 0; i < 10; i++)
        cout << arr_test[i] << " ";
    cout << endl;

    int newsize = reduce(arr_test, 10);//���������������е�Ԫ����Ŀ
    cout << "Newsize: " << newsize << endl;
    cout << "After reduction, array:\n";
    for (int i = 0; i < newsize; i++)
        cout << arr_test[i] << " ";
    cout << endl;

    return 0;
}

int reduce(long ar[], int n)
{
    sort(ar, ar + n);//����
    long* arr_new;
    arr_new = unique(ar, ar + n);//ȥ��
    //��unique()�������ؽ�������β���ص㣬���ý�βָ���ַ����һ��longָ�룬���õ�ַ��ȥʵ�ε���������ַ�������������Ԫ����Ŀ
    return arr_new - ar;
}