#include<iostream>

namespace SALES {
	const int QUARTERS = 4;
	class Sales {
	private:
		double sales[QUARTERS];
		double average;
		double min;
		double max;
	public:
		Sales(const double ar[], int n = 4);
		Sales();
		void setsales();
		void showsales();
	};
}

namespace SALES {
	using namespace std;
	Sales::Sales(const double ar[], int n) {
		double mx = ar[0];
		double mn = ar[0];
		double total = 0;
		for (int i = 0; i < n; i++) {
			sales[i] = ar[i];
			total += ar[i];
			if (mx < ar[i])
				mx = ar[i];
			if (mn > ar[i])
				mn = ar[i];
		}
		average = total / n;
		max = mx; min = mn;
	}
	Sales::Sales() {
		sales[0] = sales[1] = sales[2] = sales[3] = 0;
		min = max = average = 0;
	}
	void Sales::setsales() {
		cout << "Enter an array treat as sales of quarters:(most at 4)";
		double arr[4] = {};
		int i = 0;
		for (i; i < 4; i++) {
			if (cin >> arr[i]);
			else
				break;
		}
		*this = Sales(arr, i);
	}
	void Sales::showsales() {
		cout << "Here is the information of sales of quarters: \n";
		cout << "Every sale: " << sales[0] << "    " << sales[1] << "    " << sales[2]
			<< "    " << sales[3] << endl;
		cout << "Average: " << average << endl;
		cout << "The max sale: " << max << endl;
		cout << "The min sale: " << min << endl;
		cout << endl;
	}
}

int main() {
	using namespace SALES;
	double ar[4] = { 90,80,120,110 };
	Sales s1(ar, 4);
	s1.showsales();
	Sales s2;
	s2.setsales();
	s2.showsales();
	return 0;
}