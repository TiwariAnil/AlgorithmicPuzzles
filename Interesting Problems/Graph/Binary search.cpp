
BINARY SEARCH
Recursion
binarysearch(int a[],int n,int low,int high)
{
    int mid;
    if (low > high)
        return -1;
    mid = (low + high)/2;
    if(n == a[mid])
    {
        printf("The element is at position %d\n",mid+1);
        return 0;
    }
    if(n < a[mid])
    {
        high = mid - 1;
        binarysearch(a,n,low,high);
    }
    if(n > a[mid])
    {
        low = mid + 1;
        binarysearch(a,n,low,high);
    }
}
Non Recursion
void binsearch(int ar[],int size,int ele)
{
    int lb=0,ub=size-1,mid;             //lb=>lower bound,ub=>upper bound

    while(lb<up)
    {
        mid=(lb+ub)/2;

        if(ar[mid]==ele)
        {
            cout<<"\n SEARCH SUCCESSFUL";
            cout<<ele;
            break;
        }

        else if(ar[mid]<ele)
            ub=mid-1;

        else if(ar[mid]>ele)
            lb=mid+1;
    }

    if(ub<lb)

        cout<<"\n SEARCH UNSUCCESSFUL";

}
