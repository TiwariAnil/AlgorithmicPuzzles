#include<iostream>
#include<stdio.h>

#include<string.h>
using namespace std;




#include<stdio.h>
#include<stdarg.h>
void display(char *s, ...);
void show(char *t, ...);

int main()
{
    display("Hello", 4, 12, 13, 14, 44);
    return 0;
}
void display(char *s, ...)
{
    show(s, ...);
}
void show(char *t, ...)
{
    int a;
    va_list ptr;
    va_start(ptr, s);
    a = va_arg(ptr, int);
    printf("%f", a);
}



















/*
#include<stdio.h>

int main() 
{
   unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)    
       printf("Little endian");
   else
       printf("Big endian");
   getchar();
   return 0;
}


























/*()()
#include<stdio.h>

#include<stdio.h>

int main()
{
    unsigned int res=4;
    
    printf("%d\n", ~res);
    return 0;
}

/*

int main()
{
    char str1[] = "Hello";
    char str2[10];
    char *t, *s;
    s = str1;
    t = str2;
    while(*t=*s)
        *t++ = *s++,cout<<"er\n";
    printf("%s\n", str2);
    return 0;
}





/*


int main()
{
   int i=65;
   printf("%d %d",++i,++i);
    return 0;
}








/*
int main()
{
    int i=0;
    int a[10]={2,3,4,5,6,7,8,9,1,5};
for(int j=0;j<10;j++)
{i=i^a[j];
cout<<i<<" ";
}
cout<<endl;
cout<<i;
cin>>i;
//return i;
}










/*
main()
{
	char s[]= "This is called sex";
	strcpy(s+5,"fuckoff");
	cout<<s;
}












/*
main()
{
printf("\nab");
printf("\bsi");
printf("Aniltiwarigmail.com");
printf("\rI am the c");
}


/*
main()
{
struct xx
{
int x;
char name;
};
struct xx s;
printf("%d",s.x);
printf("%s",s.name);
}







/*
#define int char
main()
{
int i=65;// will store some character
printf("sizeof(i)=%d",sizeof(i));
printf("%d    %c",i,i);
}

/*
struct node
{
	int info;
//	char gl[5];// 22
	//node * next;
}*start,u;

void display(char *string)
{
printf("%s",string);
}

main()
{
char string[]="Hello World";
display(string);

	int a=4;
	printf("%d",a);

}









/*main()
{
	int x;
	printf("%d",-1<<4);
	printf("%x",-1<<4);
	printf("%c",-1<<4);
}
	
/*	int a=8,*p,*c;
	p=&a;
	c=p+1;
	*c=22;
	cout<<endl;
	//printf("%d",a<=2);
	
	//cout<<a&&2;
	//cout<<a++;
	//cout<<--a;
	//a=*p;
	//a++;
	*p++;
	//p++;
	cout<<*p;
	
	
}
/*	short int x;
	cout<<sizeof(x); //4
	cout<<endl;
	cout<<sizeof(&x);//8
		cout<<endl;
	cout<<sizeof(start);//8
	cout<<endl;//
	cout<<sizeof(*start);//16
		cout<<endl;
		cout<<sizeof(u);//16
			cout<<endl;	cout<<endl;	cout<<endl;	cout<<endl;
	int static p=5;
	p--;
	if(p)
		{cout<<"Anil";calling();}
}
void calling()
{
	main();
}
*/
