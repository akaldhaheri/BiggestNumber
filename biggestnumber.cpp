//Author: Abdulla Aldhaheri
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{

	int whole_number_1, whole_number_2, biggest_number;

	cout<<"Please enter a whole number:\n";
	cin>> whole_number_1;

	cout<<"Please enter another whole number:\n";
	cin>> whole_number_2;

	if(whole_number_1 > whole_number_2)
	{
		biggest_number=whole_number_1;

	}
	else{
		biggest_number+whole_number_2;

	}

	cout<<"Of those two numbers, the biggest is: "<<biggest_number;

	cout<<endl<<"Thank you for playing.\n";

  return 0;
}
