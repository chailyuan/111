#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

typedef char *pstring;

using namespace std;

int main()
{
	char a=0;
	char b = 0;

	const pstring cstr = &a;
	const char *cstrb = &a;

	
	cstrb = &b;
//	cstr = &b;

	string line;
	
	vector<string> atricles(10,"a");
	vector<int>intv(10,-1);

	system("pause");
	return 0;
	

	
}