#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box b)
{
    cout << "maker:" << b.maker << " "
        << "height:" << b.height << " "
        << "width:" << b.width << " "
        << "length:" << b.length << " "
        << "volume:" << b.volume << endl;
}

void set_volume(box* b)
{
    b->volume = b->height * b->width * b->length;
}

int main()
{
    box b = { "tupper", 1, 2, 3 };
    set_volume(&b);
    show(b);
    return 0;
}
