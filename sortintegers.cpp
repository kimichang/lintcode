#include <iostream>

class Solution {
	public:
		int Arr[] = {3,2,1,5,4};
	
		void sortIntegers(vector<int> &A){
			int i = 0;
			int j = 0;
			int tmp = 0;
			for(;i<A.size();i++)
			{
				for(j = i + 1;j<A.size();j++)
				{	
					if(A[i] > A[j])
					{
						tmp = A[i];
						A[j] = A[i];
						A[i] = tmp;
					}
				}
			}

		}
}
