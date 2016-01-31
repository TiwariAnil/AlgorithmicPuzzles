#include<stdlib.h>
#include<iostream>
using namespace std;

int a[]={75,95, 64,17, 47, 82,18, 35, 87, 10,20, 04, 82, 47, 65,19, 01, 23, 75, 03, 34,88, 02, 77, 73, 07, 63, 67,99, 65, 04, 28, 06, 16, 70,92,41, 41, 26, 56, 83, 40, 80, 70, 33,41, 48, 72, 33, 47, 32, 37, 16, 94, 29,53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23};
main()
{
    int lines,temp,var,i,nos,line;
     var=sizeof(a)/sizeof(int);
     nos=var; 
     for(i=1;i<100;i++)
      {     var=var-i;
           if(var==0)
               {line=i;break;}//{cout<<"No of lines : "<<i; break;}
      }
      
      
    
           int n=1;
           for(i=nos-line;i<nos;i++)
                 c[i-nos+line]=a[i];
           for(i=nos-line-line+1;i<nos-line;i++)
                 d[i-nos+line+line-1]=a[i];      
           if(line%2==0)
               zep=line-2;
            else
                zep=line-2;   
           temp=line-1; 
           temp*=2;
           for(i=line-1;i>=1;i++)
           {
                         
                 if(n%2!=0)
                  
                  for(j=0;j<temp-1;j++)
                  {
                              
                              if(i%2==0)
                                    zep=2*(i-1);
                               else
                                    zep=2*(i-1);               
                              c[j]=a[2*zep-]+d[];
                              check++;
                              n++;
                              temp*=2;
                  }  
                 else
                 for(j=0;j<temp-1;j++)
                  {
                              d[j]=a[]+c[];
                              n++;
                              temp*=2;
                  } 
           }
           for(j=0;j<temp-1;j++)
               cout<<c[j]<<"\t"<<d[j]<<endl;
           system("pause");
}
/*
int solve()
{
    for(i=0;i<n;i++)
          
    
}

*/
