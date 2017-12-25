#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n){
	string fizz = "fizz";
	string Buzz = "buzz";
	string empty = "";

	vector<string> result;
	int row = 0;
	int column = 0;

	for(int i = 0; i < n; i++)
	{
		switch((i+1)%3){
			case 1:
				result.push_back(to_string(i+1));
				break;
			case 2:
				result.push_back(to_string(i+1));
				break;
			case 0:
				if((i+1)%5 == 0)
				{
					result.push_back("fizz");
					break;
				}
				else
				{
					result.push_back("fizz");
					break;
				}
		}
	}
}


