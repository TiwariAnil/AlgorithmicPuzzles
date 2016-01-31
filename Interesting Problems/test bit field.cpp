#include<iostream>
#include<cstdio>

using namespace std;
struct node
{
char a;
int b;
//int c:3;

int d:36;
int e;
int f:4;
int g:5;
int :0;
char i;
};

struct node tmp;
int main()
{
//Assume sizeof(char)=1 and sizeof(int) = 4 and sizeof(pointer)=4
printf("%u\n",sizeof(struct node)); 
int q:8;

 cin>>tmp.d;
 cout<<tmp.d;

return 0;
}
