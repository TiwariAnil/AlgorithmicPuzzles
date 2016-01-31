#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	char *a ="Fucker";
	char b[]="Fucker";
	printf("%s", a);
	//*(a+3)='r';
	printf("\n%c", *(a+3));
	return 1;
}
