#include<iostream>
#include<vector>
using namespace std;

class RotatingBot
{
	public:
	int minArea(vector <int> moves)
	{
	   int a,i,b,c;
		a=moves.size();
		if(a==0)
		   return -1;
		else if(a==1)
		    return (moves[0]+1);
		else if(a==2)
		  	return ((moves[0]+1)*(moves[1]+1));	   
		else if(a%2==0 && a!=2)
		      return -1;
		else      
		{
			b=moves[3];
			c=moves[2];
			if(moves[1]>moves[3])
			   b=moves[1];
			for(i=4;i<a;i++)
			{
		     	if(i%2!=0)
		     	  if(b < moves[i])
		     	     return -1;
		     	else
				 {    
				      if(c<moves[i])
				          return -1;
				    }
			}
		}
		b++;
	  return ((b)*(c+1));
	  }

    
};
int main()
{
	cout<<a;
}
    
"aaaaabaa"
"bbbbbabbanil"
8
Returns: "POSSIBLE"



{5,3,5,3}
Returns: -1
