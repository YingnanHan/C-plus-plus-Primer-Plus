//改自清单16.9
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>

struct Review
{
    string title;
    int rating;
    double price;
};

//按题，不使用vector<Review>来存储输入，而使用vector<shared_ptr<Review>>
bool operator <(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
//添加betterthan(),expensivethan(),cheapthan()函数，来让用户选择按评级降序显示，按价格降序显示，按价格升序显示
bool worsethan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool betterthan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool expensivethan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool cheapthan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool FillReview(Review& rr);
void ShowReview(const shared_ptr<Review>& rr);

int main()
{
    vector<shared_ptr<Review>> books;
    Review temp;
    while (FillReview(temp))
    {
        shared_ptr<Review> newtemp(new Review(temp));
        books.push_back(newtemp);
    }
    if (books.size() > 0)
    {
        cout << "Thank you. You entered the following "
            << books.size() << " ratings:\n"
            << "Rating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        cout << "Please choose a type to show(0 for original order, 1 for alphabet order, 2 for rating ascend order, \n3 for rating discend order, 4 for price ascend order, 5 for price discend order, q for quit): ";
        int input;
        while (cin >> input)
        {
            switch (input)
            {
            case 0:
                break;
            case 1:
                sort(books.begin(), books.end());
                break;
            case 2:
                sort(books.begin(), books.end(), worsethan);
                break;
            case 3:
                sort(books.begin(), books.end(), betterthan);
                break;
            case 4:
                sort(books.begin(), books.end(), cheapthan);
                break;
            case 5:
                sort(books.begin(), books.end(), expensivethan);
                break;
            default:
                break;
            }
            for_each(books.begin(), books.end(), ShowReview);
            cout << "Please choose a type to show(0 for original order, 1 for alphabet order, 2 for rating ascend order, \n3 for rating discend order, 4 for price ascend order, 5 for price discend order, q for quit): ";
        }

    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";

    return 0;
}

bool operator <(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worsethan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool betterthan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
    if (r1->rating > r2->rating)
        return true;
    else
        return false;
}

bool expensivethan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
    if (r1->price > r2->price)
        return true;
    else
        return false;
}

bool cheapthan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool FillReview(Review& rr)
{
    cout << "Enter book title(q to quit): ";
    getline(cin, rr.title);
    if (rr.title == "q")
        return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    cout << "Enter book price: ";
    cin >> rr.price;
    if (!cin)
        return false;
    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review>& rr)
{
    cout << rr->rating << "\t" << rr->price << "\t" << rr->title << endl;
}