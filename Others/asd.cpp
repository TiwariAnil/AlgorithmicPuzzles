#include<iostream.h>
#include<stdio.h>

int main(){

    int a=5,b=10;

    a=a+b-(b=a);
    printf("\na= %d  b=  %d",a,b);
      system("pause");
      return 0;
    }
