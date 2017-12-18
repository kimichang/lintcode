#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int a,b,c[32],d[32],rem,result;
	int e[32]={0};
	int i=0, j=0;
	a = 1;
	b = 2;

	while(a)
	{
//		int i=0;
		rem = a%2;
		a=a/2;
		c[i++] = rem;
	}
	while(b)
	{
//		int j =0;
		rem = b%2;
		b=b/2;
		d[j++]=rem;
	}

//	cout<<c[0]<<c[1]<<c[2]<<c[3]<<endl;
//	cout<<d[0]<<d[1]<<d[2]<<d[3]<<d[4]<<endl;
	for(int index=0;index<32;index++)
	{ int flag;
	  switch(c[index] & d[index]){
		  case 0:
			  if((c[index] | d[index])==1)
			  {	
				e[index] =1 | flag ;
				flag = 0;
			  }else{
				e[index]=0 | flag;
				flag = 0;
			  }

				break;
		  case 1:
			e[index]=flag;
			flag =1;
			break;
		   
	  }
	}		
	//cout<<e[0]<<e[1]<<e[2]<<e[3]<<e[4]<<e[5]<<endl;
	for(int index=0;index<32;index++)
		result+=e[index]*pow(2,index);
	
	cout<<"result is :"<<result<<endl;
//	cout<<"2^2 ="<<2^2<<endl;

}


