#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
class List
{
     
// int * data = new int[100];
// int * data = new int[5];
 public : int data[100];
 bool search(int v, int n)
 {//v is the value we search for,
  // n is length of array to search
  if(n==0) return false;
  if(data[n-1]==v) return true;
  return search(v,n-1);
 }
};
int main()
{
      List l1;
      l1.data[33]=40;
      if(l1.search(40,100))
         cout<<"yes";
         else 
         cout<<"Mo";
      system("pause");
      getch();   
       return 0;
}        
