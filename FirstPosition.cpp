#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int index = 0;
int binarySearch(vector<int> &array, int target){
	int midIndex = array.size()/2;
	int mid = array.at(midIndex);
//	int index = 0;
	if(array.size() == 0 )
	  return -1;
	if(target == mid)
	  return midIndex;

	if(target > mid)
	{
		vector<int> tmp;
		copy(tmp.begin(),array.begin()+ mid+1,array.end());
		binarySearch(tmp,target);
	}
	else
	{
		vector<int> tmp;
		copy(tmp.begin(),array.begin(),array.begin()+mid);
		binarySearch(tmp,target);
	}
	
}


int main() {
	int arr[] = {1,4,4,5,7,7,8,9,9,10};
	vector<int> a(&arr[0],&arr[9]);

	int in = binarySearch(a,1);

}

