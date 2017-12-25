#include <iostream>
#include <vector>
using namespace std;
int arr1[] = {1,2,3,4};
int arr2[] = {2,4,5,6};
vector<int> A(arr1,arr1+(sizeof(arr1)/sizeof(arr1[0])));
vector<int> B (arr2,arr2+(sizeof(arr2)/sizeof(arr2[0])));





vector<int> mergeSortedArray(vector<int> &A, vector<int> &B){
vector<int> result;

int currentA = 0;
int currentB = 0;
if(A.size() == 0){
	if(B.size() != 0)
	  return B;
//	else
//	  return NULL;

}
if(B.size() == 0)
{
	return A;
}

while(currentA < A.size() || currentB < B.size())
{
if(A.size() == currentA && B.size() == currentB)
		return result;
else if(A.size() == currentA)
{
	result.push_back(B.at(currentB));
	currentB++;
	continue;
}else if(B.size() == currentB)
{
	result.push_back(A.at(currentA));
	currentA++;
	continue;
}else if(A.size() == currentA && B.size() == currentB) {

	return result;
}
if(A.at(currentA) > B.at(currentB))
{
	result.push_back(B.at(currentB));
				currentB++;
}
else if(A.at(currentA) < B.at(currentB))
	{
		result.push_back(A.at(currentA));
					currentA++;
	}
	else {
		result.push_back(A.at(currentA));
		result.push_back(B.at(currentB));
		currentA ++;
		currentB ++;
		}

if(A.size() == currentA && B.size() == currentB)
		return result;
else if(A.size() == currentA)
{
	result.push_back(B.at(currentB));
	currentB++;
}else if(B.size() == currentB)
{
	result.push_back(A.at(currentA));
	currentA++;
}


}
//return result;
}


int main(){

	vector<int> aa = mergeSortedArray(A,B);
	for(int index = 0;index < aa.size();index ++)
	  cout<<aa.at(index)<<endl;
}

