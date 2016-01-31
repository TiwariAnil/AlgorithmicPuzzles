#include<iostream>
using namespace std;
int d[5];
int main()
{
    int x,y,z,j,i,temp,count;
    cin>>x;
    d[0]=1;    
    while(x--)
    {
        cin>>y;
        i=1;temp=0;count=-1;z=0;
        while(i<y)
        {    
            if(y%i==0)  
             { 
               for(j=0;j<5;j++)
                 {
                       	z=d[j]*i+temp;
		                d[j]=z%10;
		                temp=z/10; 
                 
                 }  
              count++;
            }            
            i++;
        }
         for(j=4;j>=0;j--)
			cout<<d[j];d[j]=1;  
    }

    system("pause");
    return 0;
}
