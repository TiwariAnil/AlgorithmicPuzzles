#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
void swapstr(char *str1, char *str2)
{
	printf("IN THE SWAP\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	char *temp;
	temp=str1;
	str1=str2;
	str2=temp;
	printf("%s\n", str1); // Changed over here, but no reflection in main()
	printf("%s\n", str2);
}

void swapptr(char **p1, char **p2)
{
	char *tmp=*p1;
	*p1=*p2;
	*p2=tmp;
	
}

void swapdata(char *s1, char *s2)
{
	char temp[20];
	int cnt=0;
	for (int i=0; i<strlen(s1); i++)
		temp[i]=*(s1+i), cnt++;
	for (int i=0; i<strlen(s2); i++)
		*(s1+i)=*(s2+i);
	
	for (int i=0; i<= cnt; i++)
		*(s2+i)=temp[i];
		
	
}

/*

I LOVE POINTERS

*/

int main()
{
	char str1[5]="Anil", str2[5]="Evil";
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	
	printf("---------------FIRST WRONG CODE---------------\n");
	swapstr(str1, str2);       // Will not work 
	printf("%s\n", str1);
	printf("%s\n\n\n", str2);
	
	
	printf("---------------SECOND CODE (NOT for Char Arrays)---------------\n");
	
	char **ptr1, **ptr2, *s1, *s2;
	s1=str1;    // Cant do it for Arrays, so have to convert it into char pointer !
	s2=str2;
	ptr1=&s1;        // Cool !!!
	ptr2=&s2;
	
	swapptr(ptr1, ptr2);
	
	printf("%s\n", s1);
	printf("%s\n\n\n", s2);
	
	printf("%s\n", str1);
	printf("%s\n\n\n", str2);
	
	
	printf("---------------THIRD CODE (Swap the Data)---------------\n");
	
	swapdata(str1, str2);
	
	
	printf("%s\n", str1);
	printf("%s\n\n\n", str2);
	
	return 1;
	
}
