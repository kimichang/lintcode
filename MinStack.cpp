#include <stack>
#include <iostream>
using namespace std;

class MinStack {
	public :
		stack<int> tmp;
		MinStack(){
			tmp = stack<int>();
		}

		int minnumber = 0;
		int count = 0;

		void push(int number){
			if(count == 0)
			{
				minnumber = number;
				count++;
				tmp.push(number);
				return;
			}
			if(number <= minnumber)
			{
				minnumber = number ;
				count++;
				tmp.push(number);
				return ;
			}
			else{
				count++;
				tmp.push(number);
				return;
			}
		}

		int pop(){
			tmp.pop();
		}
		int min(){
			return minnumber;
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
