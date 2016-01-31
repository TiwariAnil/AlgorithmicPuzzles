// All test cases passed
#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;

int main()
{
int n;
cin>>n;
multiset<int> s;
int b; char c;
long long median=0;
static multiset<int>::iterator it, prev,temp;
for(int i=0;i<n;i++) 
{

    cin >> c >> b;
    
    if(c=='a')
	{
        s.insert(b);
        if(s.size()==1)
			 prev = s.begin();
        else if(b >= *prev && s.size()%2 == 0)
			 prev++;
        else if(b < *prev && s.size()%2 != 0)
			 prev--; 
    }         
    else if(c=='r' && s.size() > 0) 
	{
        it = s.find(b);
        if(it == s.end() || *it != b)
			 { cout << "Wrong!\n"; continue;}
        else if(*prev == b) 
		{
        	if(s.size()%2 != 0)
				prev++;
           	else 
			{
            	temp = prev; 
				temp--;
            	if(*temp != b) 
				  prev--;
            }   
        }
        else if(b>=*prev && s.size()%2 == 0)
			 prev--;
        else if(b<=*prev && s.size()%2 != 0)
			 prev++;
        s.erase(it);                      
    }
    
    // to print median
    if(s.size()==0) 
		cout << "Wrong!\n";
    else if(s.size()%2!=0)
		cout << *prev << endl;
    else 
	{ 
          median = *prev;
          prev--;
          median = (median+*prev);
          if(median%2==0)
              printf("%.0lf\n", median/2.);
          else
              printf("%.1lf\n", median/2.);
          prev++;
    }
}


}   


