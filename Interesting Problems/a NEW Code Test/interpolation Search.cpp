#include<iostream>
#include<stdio.h>
using namespace std;

int InterpolationSearch(int *A,int low,int high,int x)
{
    while(high >= low)
    {
        int mid = low + (high-low) * (x - A[low])/(A[high] - A[low]);
        if(A[mid] == x)
            return mid;
        else if(A[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}


int main(void)
{
    int A[] = {201,209,232,233,332,399,400};
    int N = sizeof(A)/sizeof(A[0]);
    int x = 201;
    int val=InterpolationSearch(A,0,N-1,x);
    if(val<0)
        printf("Element not found\n");
    else
        printf("Element found at index : %d\n",val);
    return 0;
}
