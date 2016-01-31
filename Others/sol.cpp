#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);
long long count=0;
int main()
{
    	int n,*arr,i;
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;++i)
	scanf("%d",&arr[i]);
	partition(arr,0,n-1);
	printf("%lld\n",count);
	return 0;
}
void sort(int arr[],int low,int mid,int high)
{
	int i,j,k,l,b[200000];
	l=low;
	i=low;
	j=mid+1;
	while((l<=mid)&&(j<=high))
   	{
    		if(arr[l]<=arr[j])
       			b[i]=arr[l++];
    		else
		{
       			b[i]=arr[j++];
			     count += (mid-l+1);
			//	 printf("Mid: %d\n",mid-l+1);
			//	  printf("Low: %d\n",l);
			 //    printf("Count: %d\n",count);
		}
    		i++;
   	}
 	if(l>mid)
    		for(k=j;k<=high;k++)
        		b[i++]=arr[k];
 	else
    		for(k=l;k<=mid;k++)
        		b[i++]=arr[k];
 	
	for(k=low;k<=high;k++)
     		arr[k]=b[k];
	
}
 
void partition(int arr[],int low,int high)
{
	int mid;
 	if(low<high)
   	{
    		mid=(low+high)/2;
    		partition(arr,low,mid);
    		partition(arr,mid+1,high);
    		sort(arr,low,mid,high);
   	}
}
