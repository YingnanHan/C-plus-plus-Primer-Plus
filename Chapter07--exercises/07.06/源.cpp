#include <iostream>
using namespace std;
int Fill_array(double array[], int size);
void Show_array(const double array[], int size);
void Reverse_array(double array[], int size);

int main()
{
    double array[5];
    cout << "Fill array:" << endl;
    Fill_array(array, 5);
    Show_array(array, 5);
    Reverse_array(array, 5);
    cout << "Reverse array" << endl;
    Show_array(array, 5);
    Reverse_array(array + 1, 3);
    cout << "Reverse array, except the first and the last one:" << endl;
    Show_array(array, 5);
    return 0;
}

int Fill_array(double array[], int size)
{
    cout << "Please enter double value:";
    int i = 0;
    while (size && cin >> array[i])
    {
        i++, size--;
        if (size != 0)
            cout << "Please enter double value:";
    }
    cout << "total numbers is:" << i << endl;
    return 0;
}

void Show_array(const double array[], int size)
{
    cout << "current array:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double array[], int size)
{
    double temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
