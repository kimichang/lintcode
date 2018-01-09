#include <string>
#include <iostream>
using namespace std;

int strstr(string source,string target){
	int targetindex = 0;
	int targetcount = target.length();
	int count = 0;
	if(target.length()>source.length())
	  return -1;

	for(int index = 0;index < source.length(); index ++)
	{
		if(target[targetindex] == source[index]){
			targetindex ++;
			count++;
			if(targetindex == target.length() -1)
			{
				return index - targetindex + 1;
			}
			else{
				continue;
			}
		}
		else {
			targetindex = 0;
			if(count !=0){
			index = index + count -1;
			}else{
				index = index + count;
			count = 0;
			}
		}
	}
	return -1;
}


int main(){
	int result = strstr("sourcettargetttarget","target");
}

