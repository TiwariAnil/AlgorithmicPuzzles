#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	char info[3][5]={"Yesy", "Nono", "Mayb"};
	
	printf("%s\n", info);
	
	printf("%s\n", *(info+1));
	
	printf("%s\n", *(info+1)+1);

//     %c
	printf("%c\n", *(info+1)[0]);	
	printf("%c\n", *(info+1)[2]);
	printf("%c\n", *(info+1)[2]);
	printf("%c\n", *(info+1)[3]);
	
	return 0;
}
