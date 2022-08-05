// travel.cpp -- using structures with functions
#include<iostream>

using namespace std;

struct travel_time
{
	int hours;
	int minutes;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
	travel_time day1 = { 5, 45 };
	travel_time day2 = { 4, 55 };

	travel_time trip = sum(day1, day2);
	cout << "2-day total:";
	show_time(trip);

	travel_time day3 = { 4, 32 };
	cout << "3-day total:";
	show_time(sum(trip, day3));

	return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;

	total.minutes = (t1.minutes + t2.minutes) % Mins_per_hr;
	total.hours = t1.hours + t2.hours +
		(t1.minutes + t2.minutes) / Mins_per_hr;

	return total;
}

void show_time(travel_time t)
{
	using namespace std;
	cout << t.hours << " hours, " << t.minutes << " minutes\n";
}