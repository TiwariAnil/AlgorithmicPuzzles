#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Time
{
 public:
 string whatTime(int seconds)
 { int h=seconds/3600;
   int m= (seconds % 3600)/60;
   int s= (seconds % 3600)%60;
   char z[40];
   sprintf(z,"%d:%d:%d",h,m,s);
   return z;
  }
};
