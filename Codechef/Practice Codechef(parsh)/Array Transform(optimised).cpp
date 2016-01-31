#include<stdio.h>
#include<iostream>
using namespace std;

  class array
  {  
    public:
    int result()
    {
		int i,j,p,a[1000],t,count,flag,k,q,sex,rem[1000],test[11];
         scanf("%d",&i);
     
     while(i--)
     {   q=0;flag=0;sex=0;
         for(t=0;t<11;t++)
             test[t]=0;
        
         q=0;count=0;
          scanf("%d",&j); scanf("%d",&k);
         for(p=0;p<j;p++)
         { 
             scanf("%d",&a[p]);
            rem[p]=a[p]%(k+1);
            
         }b: 
        for(p=0;p<j;p++)
        { if(test[rem[p]]==0)
             {test[rem[p]]=1; count++;}
          else
		         sex++;   
          if(count>2)
             { printf("NO");goto c;}
			      
        }
       if(sex==j-1 || sex==j-2 )
         printf("YES");
       else  
         printf("NO");
        /* scanf("%d",&j); scanf("%d",&k);
         for(p=0;p<j;p++)
         { 
             scanf("%d",&a[p]);
            if(flag==0)
            {
			    rem[p]=a[p]%(k+1);
			    if(test[rem[p]]==0)
				   { test[rem[p]]=1;sex++;}
		        else
				      count++;
				if(sex>2 || count!=p-2 || count!=j)
				   flag=1;   
		    }   
         }
		if(sex>2 )
         printf("NO");
        else
         printf("YES");
          */
         
        c:  
     if(i>0)
     printf("\n");
     }
}
};

int main()
{  array a;
   a.result();
   return 0;
}
