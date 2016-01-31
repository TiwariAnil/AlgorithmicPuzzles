#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
int tobinary(short ); 
int legendre(long ,long );

int arr[16];
long long c[16];
int msg;//[16];
int yrange[]={1,3,4,6,8,7,9};

main()
{
      double p=653,q=751,N=p*q; //N=368292653
     // double p=2,q=3,N=p*q;
      double temp,x=313599//,temp;
      short msg=101,i,y;
      tobinary(msg);printf("Original Message: \n");
      for(i=0;i<16;i++)
                 printf("%d   ",arr[i]);    
      
      printf("\n\nEncrypted Message: \n");
      for(i=15;i>=0;i--)
       {
               // srand(NULL);
            
                y=yrange[rand()%7]; 
                //y=3;
                printf("\ny= %d     ",y);
                c[i]=fmod((pow(y,2)*pow(x,arr[i])),N); 
                printf("%ld ",c[i]);
       }        
      printf("\n\nDecrypted Message:  \n");
       //decryption  
     
     for(i=0;i<16;i++)
       {
                temp=c[i];        
                printf("%d   ",legendre(temp,p)); 
                
       }
      printf("\n\n\n");
      system("pause"); 
}     
              
int tobinary(short num)
{
             int i;            
             if(num<0)
              {
                       arr[0]=1;
                       num*=-1;
              }
              else 
                       arr[0]=0;
              for( i=15;i>0;i--)
              {
                      if((num & 0x01)==1)
                      {
                             arr[i]=1;     
                      }
              else 
                      arr[i]=0;
                      num=num>>1;
              }

    return 0;
    }

// Program to calculate Legendre Symbol
int legendre(long x,long p)
{ // finds (x/p) as 1 or -1
        int m,k,p8,t;
 
        m=0;
        while(p>1)
        {  
// extract powers of 2
                for (k=0;x%2==0;k++) 
                       x/=2;
                p8=p%8;
                if (k%2==1) 
                       m+=(p8*p8-1)/8;
 
// quadratic reciprocity
                t=p;  t%=x;
                p=x;  x=t;
                m+=(p8-1)*(x%4-1)/4;
                m%=2;
        }
        if (m==0) 
               return 1;
        else   
               return 0;//(-1);
}
