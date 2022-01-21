#include <iostream>
#include <string.h>
#include <cstdlib>
#include <typeinfo> 
typedef int zh_CNv;
#define type(a,b) (a)b
#define var(a,b,c) a b=c
#define vname(value) (#value)
unsigned int address(std::string s)
{
	int a;
	sscanf(s.c_str(),"%X",&a);
	return a;
}
long int*getadd(long int*a)
{
	return a;
}
short*getadd(short*a)
{
	return a;
}
char*getadd(char*a)
{
	return a;
}
int *getadd(int*a)
{
	return a;
}
std::string *getadd(std::string*a)
{
	return a;
}
