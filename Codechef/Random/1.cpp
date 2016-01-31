#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j,k,x,c=0,l,b;
    char arr[110];
    scanf("%d",&t);
    
	//gets(arr);
    getchar();
	while(t--)
    {         gets(arr);
              x=strlen(arr);
              b=1;
              k=j=l=0;
              for(i=x-1;b && i>0 && arr[i]!=' ';i--)
              {
                                if(arr[i]=='3')k++;
                                else if(arr[i]=='5')j++;
                                else if(arr[i]=='8')l++;
                                else if(arr[i]>='0' && arr[i]<='9')b=0;                                
              }
              if(b && l>=j && j>=k)
                          c++;
    }                    
    printf("%d\n",c);
    return 0;
    
}
 
