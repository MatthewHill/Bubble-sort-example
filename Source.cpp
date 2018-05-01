#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>



using namespace std;
int main()
{
	string userString;
	int temp;
	int hold;
	int myint;
	int count = 0;
	double oes  = '\n';
	bool sorting = true;
	bool swapped = false;
	cout << "What values would you like to organize?";
	cout << "Enter the values seperated by spaces.";
	vector<int> myVector;
	std::istream_iterator<double> eos;              // end-of-stream iterator
	std::istream_iterator<double> itt(cin);   // stdin iterator
	cout << "Information collected \n";
		do                                             // Big O max of N
		{
			hold = *itt;										
			myVector.push_back (hold);
			cout << "number pushed \n";
			itt++;
			count++;
		
		}while ((*itt != *eos)&&count < 10);
	
	cout << "Information formated";
		while (sorting = true)
		{
			for (int i = 0; i < myVector.size()-1; i++)
			{

				if (myVector.at(i) > myVector.at(i + 1))                             //Bubble sort max of n^2 for Big O
				{
					temp = myVector.at(i + 1);
					myVector.at(i + 1) = myVector.at(i);
					myVector.at(i + 1) = temp;
					swapped = true;
				}
			}
			if (swapped == false)
			{
				sorting = false;
			}
		}
		cout << "The ordered list is ";
		for (int j = 0; j < myVector.size();j++)
		{
			cout <<  myVector.at(j);
		}
	return 0;
}