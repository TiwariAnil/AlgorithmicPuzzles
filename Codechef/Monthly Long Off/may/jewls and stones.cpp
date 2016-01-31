#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>

using namespace std;

int main()
{
    int test,i,j,k,flag,count=0;
    char str[100],b[100];
    char hash[26]={0};
    scanf("%d",&test);

    while(test--)
    {
           count=0;
           scanf("%s",&str);  //gets(a);
           
           
for(i=0,j=0;str[i];)
{
    // if the char is not hashed.
    if(!hash[str[i] - 'a'])
    {
        // hash it.
        hash[str[i] - 'a'] = 1;
        // copy the char at index i to index j.
        str[j++] = str[i++];
    }
    else
    {
        // move to next char of the original string.
        // do not increment j, so that later we can over-write the repeated char.
        i++;
    }
}

// add a null char.
str[j] = 0;
           
           
           
           i=strlen(str);
           //cout<<"\n"<<i;
           scanf("%s",&b); //gets(b);
           
           j=strlen(b);
          // cout<<"\n"<<j;
           while(i--)    
            {  k=0;flag=0;
                 while(k<j)
                  {   if(str[i]==b[k])
                        {flag=1;break;}
                        k++;
                  }
              if(flag==1)
               count++;   
            }    
            printf("%d",count); 
     }
  getch();
  return 0;
}
