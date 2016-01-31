#include<iostream>
#include<math.h>
using namespace std;
int a[200];
int m;
void calculate(int,int);
int main()
{
    int x,y,z,i,j,k,count,root;
    cin>>x;
   
    while(x--)
    {
        cin>>y;m=1;a[0]=1;
        i=2;count=0;z=1;
        while(i<y)
        {    
            if(y%i==0)  
                count++;
                     
            i++;
        }
        root=sqrt(y);
        z=(count/2);
        k=y;
        calculate(y,z);
        
        if(root*root==k )
           if(y!=k)
               calculate(root,1);
            else
               y=root;                                                         
        if(m<4)         //// problem is here.............lol!!
          for(j=m-1;j>=0;j--)
          cout<<a[j];
        else
          for(int j=m-1;j>=m-4;j--)
			cout<<a[j];   		
    }
    system("pause");
    return 0;
}
void calculate(int y,int z)
{
	
	while(z--)
  {  
    int index;
	int temp=0;
	long int x;          
    
    for(index=0;index<m;index++)
	{
		x=a[index]*y+temp;
		a[index]=x%10;
		temp=x/10;
	}
	if(temp!=0)
	  while(temp!=0)
		{
			a[m]=temp%10;
			temp=temp/10;
			m++;
		}
	
    }
}
