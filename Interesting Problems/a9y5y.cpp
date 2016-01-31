

Can you read what I have written?
Please write something here ..

Hello sir :)
Excellent.. Great.. Lets go ahead then.

Q1. Given a list of n integer elements.
You have to find the max difference between
d continuous elements in that list.
Given - List, n, d.

d=3 n=10  3 4 1 8 1 9 10 2 4 7

10 9 8 7 6 5 4 3 2 1


void getmax(int a[], int n, int d, int b[])
{
    queue <int> q;
    for(int i=0; i<d; i++)
    {
        while(!q.empty() && a[i] >= a[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    for(int i=d; i<n; i++)
    {
        b[i-d]=a[q.front()];
        while(!q.empty() && a[i] >= a[q.back()])
            q.pop_back();
        while(!q.empty() && q.front() <= i-d)
             q.pop_front();
        q.push_back(i);
    }
    b[n-d]=a[q.front()];
}

//same for min elements as c[]

void getmin(int a[], int n, int d, int c[])
{
    queue <int> q;
    for(int i=0; i<d; i++)
    {
        while(!q.empty() && a[i] <= a[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    for(int i=d; i<n; i++)
    {
        c[i-d]=a[q.front()];
        while(!q.empty() && a[i] <= a[q.back()])
            q.pop_back();
        while(!q.empty() && q.front() <= i-d)
             q.pop_front();
        q.push_back(i);
    }
    c[n-d]=a[q.front()];
}


//and then
int diff=INF;
for(int i=0; i<n-d; i++)
{
    diff=min(diff, b[i]-c[i]);
}
return diff;



Are you there?

Q. Given a histogram - given an array of
heights of length n. Find the maximum area
rectangle that will fit inside the histogram bars.
A rectangle can span across multiple histogram bars.
The width of each histobar is 1 unit.


6 2 5 8 9 10 3


int histogramarea(int hist[], int n)
{
    stack <int > s;
    int max_area=-INF, tp, top_area;
    int i=0;
    while(i < n)
    {
        if(s.empty() or hist[s.top()] <=hist[i])
            s.push(i), i++;
         else
         {
             tp=s.top();
             s.pop();
             int val;
             if(s.empty())
                 val=i;
             else
                 val=i-s.top()-1;
             top_area=hist[p]*val;
             max_area=max(max_area, top_area;
         }
      }
      while(!s.empty())
      {
          tp=s.top();
          s.pop();
          int val;
          if(s.empty())
              val=i;
          else
              val=i-s.top()-1;
          top_area=hist[p]*val;
          max_area=max(max_area, top_area;
      }
      return max_area;
    }
}

Good luck!
Thank you sir !

