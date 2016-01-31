#include <iostream>
using namespace std;

class myTest{

private:
protected:

public:
    int pro;
    myTest(){
        cout<<"Constructor Called"<<endl;
    }
    ~myTest(){
        cout<<"Destructor Called"<<endl;
    }
    int insertSort();//int a[], int n);

};

//1 2 4 5 3

int ceilsearch(int a[], int x, int n)
{
    int start=0, ends=n-1;
    if(start == ends)
    {
        if (a[start]<x)
            return -1;
        else
            return start+1;
    }
    while(start < ends)
    {
        int mid = (start+ ends )/2;
        if(a[start]< x && x < a[mid])
        {
            ends=mid-1;
        }
        else if(a[mid]< x && x < a[ends])
        {
            start = mid+1;
        }
        else
            return mid+1;

    }
}

int myTest::insertSort(){//int a[], int n){
    int a[]={ 2, 5, 3, 7, 11, 8, 10, 13, 6 };
    int n= sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1; i<n; i++)
    {
        int x= ceilsearch(a, a[i] ,i);
        cout<<x<<endl;
        if(x!=-1)
            for(int j=i; j>x; j--)
            {
                int tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}


int main(){
    myTest *a;
    a = new myTest[5];
    a->insertSort();
    a[0].pro = 7;
    cout<<a[0].pro<<endl;

    a[1].pro = 8;
    cout<<a[1].pro<<endl;

    delete [] a;
    return 0;
}
