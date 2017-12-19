#include <iostream>
#include <math.h>
using namespace std;
/*
long  long trailingZeros(long long n){
	long long result = 1;
	while(n>0){
		result *=n;
		n--;
	}
	cout<<result<<endl;
	int number =0;
	int mi = 10;
	int count = 1;
	while(result % mi == 0){
		number++;
		count++;
		mi = pow(10,count);
	
	}
	  
	return number;
}
*/

long long trailingZeros(long long n){
	long count = 0;
	long temp = n/5;
	while(temp!=0)
	{
		count+=temp;
		temp/=5;
	}
	return count;
}
int main(){
	long long zeros = trailingZeros(15);
	cout<<zeros<<endl;
	return 0;
}
