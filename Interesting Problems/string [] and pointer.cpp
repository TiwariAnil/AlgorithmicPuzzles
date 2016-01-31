#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	
	char *str="Fuck";   // we have not allocated any memory to str, 
	// Fuck is stored somwhere else and we are pointing that address by str pointer !   
	
	printf("%s\n", str);
	
	printf("%c\n", *str);
	//READ ONLY memory !
	printf("%c\n", *(str+1));
	
	// Trick is you can print *(str+1) but you cant change its content as its READ ONLY memory !
	
	// Segmentation falut or Crash will occur when you will do below thing
	//*(str+1)='L';
	
	// Where as if
	
	char st[]="Fuck"; // we have allocated st[5] here !
	
	printf("%s\n", st);
	
	printf("%c\n", *(st+1));
	
	// Now its read and write memory so we can actually change any shit !
	
	*(st+2)='X';
	
	printf("%s\n", st);
	
	
	
	return 1;
}
