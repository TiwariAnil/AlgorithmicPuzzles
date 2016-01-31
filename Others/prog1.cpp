#include<stdio.h>
#include<iostream.h>
int main(){
  int a[1000],k,t,temp,size,i,*big,*small;
  int j=0;
scanf("%d",&t);
small=new int[t];
big=new int[t];
temp=t;
while(t!=0)
  {
  scanf("%d",&size);
  {
     for(i=0;i<size;i++)
     scanf("%d",&a[i]);
  }
  k=a[0];
  for(i=1;i<size;i++)
  {
      if(k<a[i])
           k=a[i];
   }
  big[j]=k;
 
  k=a[0];
  for(i=1;i<size;i++)
          {       if(k>a[i])
                      k=a[i];
                      }
  small[j]=k;
  t--;
  j++;
}
for(j=0;j<temp;j++)
{
cout<<small[j]<<" "<<big[j]<<"\n";
}
//system("pause");
}
