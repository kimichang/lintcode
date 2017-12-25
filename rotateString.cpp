#include <iostream>
#include <string>
using namespace std;

void rotateString(string &str,int offset){

	if(0 == offset)
	  return ;
	if(str.length() < offset)
	  return ;
	string end = substr(0,strlen(str) - offset);
	string start = substr(strlen(str) - offset,offset);

	start += end;

	str = start;



}



