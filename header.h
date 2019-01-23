#ifndef _HEADER_H
#define _HEADER_H
#include <iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
string ChartoString(char a[])
{
	string ans = "";
	int n = strlen(a);
	for(int i=0 ;i<n; i++) ans = ans + a[i];
	return ans;
}
#endif

