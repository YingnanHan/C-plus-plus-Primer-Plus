//���Ե�4��
#include <iostream>
using namespace std;
#include <algorithm>

template <class T>
int reduce(T ar[], int n);

int main()
{
    long arr_test[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 56 };
    cout << "Original array:\n";
    for (int i = 0; i < 10; i++)
        cout << arr_test[i] << " ";
    cout << endl;
    int newsize = reduce(arr_test, 10);//���������������е�Ԫ����Ŀ
    cout << "Newsize: " << newsize << endl;
    cout << "After reduction, the long array:\n";
    for (int i = 0; i < newsize; i++)
        cout << arr_test[i] << " ";
    cout << endl;

    cout << "The second test array: \n";
    string arr_test2[10] = { "hah", "china", "play", "end", "hah", "play", "speak", "play", "zero", "apple" };
    cout << "Original array:\n";
    for (int i = 0; i < 10; i++)
        cout << arr_test2[i] << " ";
    cout << endl;
    int newsize2 = reduce(arr_test2, 10);//���������������е�Ԫ����Ŀ
    cout << "Newsize: " << newsize2 << endl;
    cout << "After reduction, the long array:\n";
    for (int i = 0; i < newsize2; i++)
        cout << arr_test2[i] << " ";
    cout << endl;

    return 0;
}

template <class T>
int reduce(T ar[], int n)
{
    sort(ar, ar + n);//����
    T* arr_new;
    arr_new = unique(ar, ar + n);//ȥ��
    //��unique()�������ؽ�������β���ص㣬���ý�βָ���ַ����һ��longָ�룬���õ�ַ��ȥʵ�ε���������ַ�������������Ԫ����Ŀ
    return arr_new - ar;
}