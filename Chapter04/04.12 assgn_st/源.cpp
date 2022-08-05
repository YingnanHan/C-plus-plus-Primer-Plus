// assgn_st.cpp -- assigning structures

#include<iostream>

struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable choice;
	choice = bouquet;
	std::cout << "bouquet:" << bouquet.name << " for $";
	std::cout << bouquet.price << std::endl;
	std::cout << choice.price << std::endl;

	return 0;
}