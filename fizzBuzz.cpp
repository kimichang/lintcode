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
			default:
				result.push_back(to_string(i+1));
				break;
			case 0:
				result.push_back("fizz");
				break;
				}
		switch((i+1)%5){
			case 0:
				if((i+1)%3 == 0)
				{
					result.at(i) = result.at(1).append(" buzz");
					break;
				}else
				{
					result.at(i) = "buzz";
					break;
				}
			default:
				break;
		}
		}
	return result;
	}

int main()
{
	vector<string> aa = fizzBuzz(15);
	for(int index = 0; index < aa.size(); index++)
	  cout<<aa.at(index)<<endl;

}



