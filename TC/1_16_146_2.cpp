#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class YahtzeeScore
{
  public:
  int maxPoints(vector <int> & toss)
  {
        int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,temp=0;
		vector <int> res;
		for(int i=0;i<5;i++)
		{   
		   switch(toss[i])
		   {
		       case 1 :  a1++;
			            break;
		       case 2 :  a2++;
			            break;
			   case 3 :  a3++;
			            break;
		       case 4 :  a4++;
			            break;
		       case 5 :  a5++;
			            break;
		       case 6 :  a6++;
			            break;
		   
		   }
		}
		res.push_back(a1);
		res.push_back(a2*2);
		res.push_back(a3*3);
		res.push_back(a4*4);
		res.push_back(a5*5);
		res.push_back(a6*6);
       for(int j=0;j<6;j++)
        {
		      if(res[j]>temp)
			        temp=res[j]; 
		
		}	
		return temp;
  }
};

int main()
{
     YahtzeeScore test;
	 vector <int> toss;//={2,2,2,3,5};
	 toss.push_back(2);
	 toss.push_back(2);
	 toss.push_back(2);
	 toss.push_back(4);
	 toss.push_back(3);
	 cout<<test.maxPoints(toss);
     return 0;

}
