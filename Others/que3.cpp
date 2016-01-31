#include<iostream>
using namespace std;
main()
{
      long m,k,l,i,j,c,flag=1,*ptr;
      scanf("%d",&l);
      
      ptr=(long*)malloc(sizeof(long)*l);
      
      
      
 for(k=0;k<l;k++)
 {
     scanf("%d",&m);
     c=0;
    // while(flag!=0)
     // {
         for(i=m;i<100000;i++)
          {   
              //if(flag=0)
               // break;
             for(j=2;j<i;j++)
              {
                if(i==2)
                printf("%d",i);
                if(i%j==0)
                c++;
               }
             if(c==0)
               {
                ptr[k]=i;
                flag=0;
                break;
                }
             c=0;
             if(flag=0)
               break;

        }
         
       //}
   }
   
   for(j=0;j<l;j++)
   cout<<ptr[j]<<"\n";
   //system("pause");
   return 0;
   
}
