#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MinStack {
	public :
		stack<int> tmp;
		MinStack(){
			tmp = stack<int>();
		}

		int rush = 0;
		vector<int> attend;
		int index = 0;
		vector<int>::iterator it;
		void push(int number){
			tmp.push(number);
			attend.push_back(number);
		}

		int pop(){
			rush = tmp.top();
			tmp.pop();
			cout<<"pop :"<<rush<<endl;
			it = find(attend.begin(),attend.end(),rush);
			attend.erase(it);
		}
		int min(){
			sort(attend.begin(),attend.end());
			return attend.at(0);
		}
};


int main(){
	MinStack ms;
	ms.push(1);
	ms.pop();
	ms.push(2);
	ms.push(3);
	cout<<"min is "<<ms.min()<<endl;
	ms.push(1);
	ms.push(-99);
	cout<<"min is "<<ms.min()<<endl;
}
