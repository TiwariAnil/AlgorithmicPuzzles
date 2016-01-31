
// this function returns next higher number with same number of set bits as x.
uint_t snoob(uint_t x)
{
  uint_t rightOne;
  uint_t nextHigherOneBit;
  uint_t rightOnesPattern;
  uint_t next = 0;
  if(x)
  {
    // right most set bit
    rightOne = x & -(signed)x;
error(rightOne);

    // reset the pattern and set next higher bit
    // left part of x will be here
    nextHigherOneBit = x + rightOne;

error(nextHigherOneBit);
    // nextHigherOneBit is now part [D] of the above explanation.
    // isolate the pattern
    rightOnesPattern = x ^ nextHigherOneBit;

error(rightOnesPattern);
    // right adjust pattern
    rightOnesPattern = (rightOnesPattern)/rightOne;

error(rightOnesPattern);
    // correction factor

    rightOnesPattern >>= 2;
error(rightOnesPattern);
    // rightOnesPattern is now part [A] of the above explanation.

    // integrate new pattern (Add [D] and [A])
    next = nextHigherOneBit | rightOnesPattern;
  }
  return next;
}

------------------------no of 2s in N------------------------------------------------


Recursive functions ;)
eg 319
0 100    + 100 to 300 + 0 to 19
0,100        DONE       0,10 + 0,9
DONE                    DONE   DONE

// Take n = 319 as example => 162
int numberOf2s Between 0 And N	(int n)
{
    if (n < 2)
        return 0;

    int result = 0;
    int power10 = 1;
    while (power10 * 10 < n)
        power10 *= 10;

    // power10 = 100
    int msb = n / power10; // 3
    int reminder = n % power10; // 19

    // Count # of 2s from MSB
    if (msb > 2)    // This counts the first 2 from 200 to 299
        result += power10;
    if (msb == 2)   // If n = 219, this counts the first 2 from 200 to 219 (20 of 2s).
        result += reminder + 1;

    // Count # of 2s from reminder
    // This (recursively) counts for # of 2s from 1 to 100; msb = 3, so we need to multiply by that.
    result += msb * numberOf2s(power10);
    // This (recursively) counts for # of 2s from 1 to reminder
    result += numberOf2s(reminder);

    return result;
}

-------------------------------Bitwise Division------------------------------------------------------


ALGO:
In essence, if you're doing Q = N/D:
Align the most-significant ones of N and D.
2.  Compute t = (N - D);.
3.	If (t >= 0), then set the least significant bit of Q to 1,
	and set N = t.
4.	Left-shift N by 1.
5.	Left-shift Q by 1.
6.	Go to step 2.

int binaryDivide(int dividend, int divisor)
{
		// complexity = log(n)
		// Ex: 25/3 = 8
    int current = 1;
    int denom = divisor;
    // This step is required to find the biggest current number[24]
    // (i.e divisible by denominator[3] like '11xxxxxxxxx' x='0' )which can be
    // divided with the number[25] safely.
    while (denom <= dividend)
    {
        current <<= 1;
        denom <<= 1;
    }

    error(current);
    error(denom);
    // Since we may have increased the denominator more than dividend
    // thus we need to go back one shift, and same would apply for current.

    denom >>= 1;
    current >>= 1;

    int answer = 0;
    // Now deal with the smaller number.

		error(answer);
    error(current);
    error(denom);cout<<endl;
    error("LOOPIING");
		int cnt=1;
    while (current != 0)
    {
        if (dividend >= denom)
        {
            dividend -= denom;
            answer |= current;
        }
        current >>= 1;
        denom >>= 1;

		error(cnt);
		error(answer);
    error(current);
    error(denom);
		cout<<endl;
		cnt++;
    }

    error(answer);
		error(denom);
		return answer;
}
// For DIGITS after decimal points, we have remainder = denom, now
// while remainder != 0 , keep doing this
//      remainder*=10, or remainder*=1000000
// and divide it in same way to get the digits after decimal points


------------------------PERMUTATIONS------------------------------------------------
public void permutations(String prefix, String s) {
    int n = s.length();
    if (n == 0)
        System.out.println(prefix);
    else {
        for(int i = 0; i < n; i++){
           permutations(prefix + s.charAt(i), s.substring(0, i) + s.substring(i+1, n));
        }
    }
}

and

void permute_a_string(char *a, int pos, int n)// n = a.length()-1
{// ABC ACB BAC BCA CAB CBA
   int j;
   if (pos == n)
     printf("%s\n", a);
   else
   {
        for (j = pos; j <= n; j++)
       {
          swap((a+pos), (a+j));
          permute_a_string(a, pos+1, n);
          swap((a+pos), (a+j)); //backtrack
       }
   }
}

Complexity O(n*n!)


-----------  Quick Sort   BETTER-------------------------

int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

/* A[] --> Array to be sorted, l  --> Starting index, h  --> Ending index */
void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h); /* Partitioning index */
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}


-------------------------------ONLY valid braces-----------------------------------------

void fun(string s, int open,int  close)
{
	if(close==0)
	{
		cur++;
		cout<<cur<<s<<endl;
		return;
	}
	if(open<close && close>0)
		fun(s+")", open, close-1);
	if(open>0)
		fun(s+"(", open-1, close);
}
-------------------------on Linked List---------------------------------------

/* Considers last element as pivot, places the pivot element at its
   correct position in sorted array, and places all smaller (smaller than
   pivot) to left of pivot and all greater elements to right of pivot */
node* partition(node *l, node *h)
{
    // set pivot as h element
    int x  = h->data;
 
    // similar to i = l-1 for array implementation
    node *i = l->prev;
 
    // Similar to "for (int j = l; j <= h- 1; j++)"
    for (node *j = l; j != h; j = j->next)
    {
        if (j->data <= x)
        {
            // Similar to i++ for array
            i = (i == NULL)? l : i->next;
 
            swap(&(i->data), &(j->data));
        }
    }
    i = (i == NULL)? l : i->next; // Similar to i++
    swap(&(i->data), &(h->data));
    return i;
}
 
/* A recursive implementation of quicksort for linked list */
void _quickSort(struct node* l, struct node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        struct node *p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}
 
// The main function to sort a linked list. It mainly calls _quickSort()
void quickSort(struct node *head)
{
    // Find last node
    struct node *h = lastNode(head);
 
    // Call the recursive QuickSort
    _quickSort(head, h);
}

---------------------------Mergesort--------------------------------------------

void merge( int low, int high, int mid)
{
	int h, i, j, k;
	h=low;
	i=low;
	j=mid+1;
	while( h<=mid && j<=high)
	{
		if(a[h] <= a[j])
		{
			x[i]=a[h];
			h++;
		}
		else
			x[i]=a[j], j++;
			
		i++;
	}
	if(h>mid)
	{
		for(k=j; k<=high; k++)
		{
			x[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=h; k<=mid; k++)
		{
			x[i]=a[k];
			i++;
		}
	}
	for(k=low; k<=high; k++)
		a[k]=x[k];
}
void mergesort( int x, int y )
{
	if(y-x>0)
	{
		int mid=x+(y-x)/2;
		mergesort( x, mid);
		mergesort( mid+1, y);
		
		merge( x, y, mid);
	}
} 

--------------------------------On linked list (merge sort)-----------------------

/* function prototypes */
struct node* SortedMerge(struct node* a, struct node* b);
void FrontBackSplit(struct node* source,
          struct node** frontRef, struct node** backRef);
 
/* sorts the linked list by changing next pointers (not data) */
void MergeSort(struct node** headRef)
{
  struct node* head = *headRef;
  struct node* a;
  struct node* b;
 
  /* Base case -- length 0 or 1 */
  if ((head == NULL) || (head->next == NULL))
  {
    return;
  }
 
  /* Split head into 'a' and 'b' sublists */
  FrontBackSplit(head, &a, &b); 
 
  /* Recursively sort the sublists */
  MergeSort(&a);
  MergeSort(&b);
 
  /* answer = merge the two sorted lists together */
  *headRef = SortedMerge(a, b);
}

 
/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into front and back halves,
     and return the two lists using the reference parameters.
     If the length is odd, the extra node should go in the front list.
     Uses the fast/slow pointer strategy.  */
void FrontBackSplit(struct node* source,
          struct node** frontRef, struct node** backRef)
{
  struct node* fast;
  struct node* slow;
  if (source==NULL || source->next==NULL)
  {
    /* length < 2 cases */
    *frontRef = source;
    *backRef = NULL;
  }
  else
  {
    slow = source;
    fast = source->next;
 
    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL)
    {
      fast = fast->next;
      if (fast != NULL)
      {
        slow = slow->next;
        fast = fast->next;
      }
    }
 
    /* 'slow' is before the midpoint in the list, so split it in two
      at that point. */
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
  }
}

struct node* SortedMerge(struct node* a, struct node* b)
{
  struct node* result = NULL;
 
  /* Base cases */
  if (a == NULL)
     return(b);
  else if (b==NULL)
     return(a);
 
  /* Pick either a or b, and recur */
  if (a->data <= b->data)
  {
     result = a;
     result->next = SortedMerge(a->next, b);
  }
  else
  {
     result = b;
     result->next = SortedMerge(a, b->next);
  }
  return(result);
}

 



---------------------------------Rotation + Sprial + Diagonal #Matrix---------------------------------------

--------------Rotation------------------
FOR(i,first, last)
		{
			int temp=a[layer][i]; // store the [0][0] ie first element and start with filling left :)
			//ClockWise
			//bottom to left         	eg [0][0]=[n-1][0]
			a[layer][i]=a[n-1-i][layer];

			//left to top							eg [n-1][0]=[n-1][n-1]
			a[n-1-i][layer]=a[n-1-layer][n-1-i];

			//top to right						eg [n-1][n-1]=[0][n-1]
			a[n-1-layer][n-1-i]=a[i][n-1-layer];

			//right to bottom;				eg [0][n-1]=[0][0]
			a[i][n-1-layer]= temp;

		}
--------------------
int a[100][100];
int solve()
{
	if(n<=0)return 1;
	int top=0, left=n-1, bottom=n-1, right=0;
	cout<<"-------SPIRAl ;)------------\n\n";
	for(int layer=0; layer<n/2; layer++)
	{
		//top, left, botom, right
		// TOP
		for(int i=right; i<=left; i++ )
			cout<<a[top][i]<< " ";
		cout<<endl;
		top++;
		// LEFT
		for(int i=top; i<=bottom; i++)
				cout<<a[i][left]<<" ";
		cout<<endl;
		left--;
		//Bottom
		for(int i=left; i>=right; i--)
			cout<<a[bottom][i]<<" ";
		cout<<endl;
		bottom--;
		//Right
		for(int i=bottom; i>=top; i--)
			cout<<a[i][right]<<" ";
		cout<<endl;
		right++;

	}
	cout<<"\n\n\n--------DIAGONAL-----------\n\n";

	FOR(i,0,n)
	{
		for(int x=0, y=i; x<=i ; x++, y--)
			cout<<a[y][x]<<" ";
		cout<<endl;
	}
	FOR(i,1,n)
	{
		for(int x=n-1, y=i; y<=n-1; y++, x--)
			cout<<a[x][y]<<"  ";
		cout<<endl;
	}
	cout<<endl;
    return 1;
}
/*
4
1 2 3 4
5 6 7  8
9 10 11 12
13 14 15 16

5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/


------------------------------Power of 2 (square and multiply)------------------------------------------


[Square and multiply method]

Here main idea is, suppose we want to
find the M = a^9 ;

then M can be always represented as
binary bits of 9 ie 1001.
9=		  1		        0			      0			      1
M= (a^(2^3)) * (a^(2^2)) * (a^(2^1)) * (a^(2^0))

calculate like

	1*(2^3)=8 --> a^8
	0*(2^2)=0 --> a^0
	0*(2^1)=0 --> a^0
	1*(2^0)=1 --> a^1
	-----------------
MULTIPLY -->    a^8*1*1*a^1 = a^9

so keep squaring the BASE(a) and when power(9)'s current bit 1, multipy with answer.


long long power(long long base,long long pow)
{  //base^pow !
    if(base==0)
        return 0;
    if(base==1 || pow==0)
        return 1;
    long long ans=1;
    while(pow)
    { //base^pow !
			if(pow%2==1)
			{
				ans*=base;
			}
			base*=base;
			pow>>=1;
    }
    return ans;
}

-----------------------------MaxHeap :*-------------------------------------------


// A simple recursive algorithm just to swap the root and children if
// they are not following the heap property :)
void heapify(int *a, int k, int i)
{
	// left and right are all the positions only NOT VALUES
	int left=2*i+1, right=2*i+2, large=i; // large = ROOT
	if(left<k && a[left]>a[large])  // in limit and is greater
		large=left;
	if(right<k && a[right]>a[large])
		large=right;

	if(large!=i)
	{
		int temp=a[i];
		a[i]=a[large];
		a[large]=temp;
		heapify(a, k, large);
	}
}

int main()
{
	int a[]={9,2,7,6,4,3,5,10,1,8}; //random data
	int k=10;
	// The basic funda = No of internal nodes= (Total_nodes - 1)/2
	int noofinternalnodes=(k-1)/2, temp; //makes a complete tree
	//  Internal nodes = Having one or two children
	//  Here 0, 1, 2, 3, 4 are the internal NODES :)
/*			    0
		   1         2
	  3    4     5   6
   7 8  9 10				*/

	//Build Heap O(k)	// remember that it starts frm the last internal node
	//(infact lowest one)

//	we are modifying the array itself
	for(int i=noofinternalnodes; i>=0; i--)
	{
		//void heapify(int *a, int k, int i)
		heapify(a, k, i);
	}
	// Building Heap ends here

	//Sorting Process
	for(int i=k-1; i>0; i--) // O(nlogk) as for all elements we are removing and hepifying it!
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		// Place that gets imbalaced is 0, Limit= i, array = a[]
		heapify(a, i, 0);
	}
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
    return 0;
}

--------------------------Log n----------------------------------------------
balanced BST, how would you return the nth smallest element in logn time .
int getnode(struct tnode *root,int n,int k)
{
    if(root==NULL)
       return -1;
    if(n/2 +1 == k)
       return root->val;
    if(n/2 + 1 > k)
       return getnode(root->left,n/2,k);
    return getnode(root->right,n/2,k-n/2-1);
}
======================================================
give an algorithm for finding duplicate parenthesis in a expression. 

example :


(( a + b ) + (( c + d )))

SOL:

You can use stack, start pushing each character from input string till you not hit close parenthesis. When you hit close parenthesis, 
start pop the element till you not hit open parenthesis. If the immediate pop hit open parenthesis than that is duplicate parenthesis. 
Note: this algo will fail, if one put false parenthesis in string like: () .... Code as:


public void FindDuplicateparenthesis(string input)
        {
            Stack<char> inputStack = new Stack<char>();
            foreach (char inputChar in input.ToCharArray())
            {
                if (inputChar != ')')
                {
                    inputStack.Push(inputChar);
                }
                else
                {
                    char popChar = inputStack.Pop();
                    if (popChar == '(')
                        Console.WriteLine("Duplicate Find ");
                    else
                    {
                        while (popChar != '(')
                        {
                            popChar = inputStack.Pop();
                        }
                    }
                }
            }
        }
Another solN: #stackOverflow
A pair of parentheses is necessary if and only if they enclose an unparenthesized expression of the form X % X % ... % X where X are either parenthesized expressions or atoms, and % are binary operators, and if at least one of the operators % has lower precedence than an operator attached directly to the parenthesized expression on either side of it; or if it is the whole expression. So e.g. in

q * (a * b * c * d) + c
the surrounding operators are {+, *} and the lowest precedence operator inside the parentheses is *, so the parentheses are unnecessary. On the other hand, in

q * (a * b + c * d) + c
there is a lower precedence operator + inside the parentheses than the surrounding operator *, so they are necessary. However, in

z * q + (a * b + c * d) + c
the parentheses are not necessary because the outer * is not attached to the parenthesized expression.

Why this is true is that if all the operators inside an expression (X % X % ... % X) have higher priority than a surrounding operator, then the inner operators are anyway calculated out first even if the parentheses are removed.

So, you can check any pair of matching parentheses directly for redundancy by this algorithm:

Let L be operator immediately left of the left parenthesis, or nil
Let R be operator immediately right of the right parenthesis, or nil
If L is nil and R is nil:
  Redundant
Else:
  Scan the unparenthesized operators between the parentheses
  Let X be the lowest priority operator
  If X has lower priority than L or R:
    Not redundant
  Else:
    Redundant
You can iterate this, removing redundant pairs until all remaining pairs are non-redundant.

Example:

((a * b) + c * (e + f))
(Processing pairs from left to right):

((a * b) + c * (e + f))   L = nil R = nil --> Redundant
^                     ^   
 (a * b) + c * (e + f)    L = nil R = nil --> Redundant
 ^     ^                  L = nil R = + X = * --> Redundant
  a * b  + c * (e + f)    L = * R = nil X = + --> Not redundant
               ^     ^
Final result:

a * b + c * (e + f)


		
		



------------------------------------------------------------------------
Read Maxflow

Disconnect two nodes in a graph by removing minimum number of edges.

Can be solved by taking the max flow where A is the source and B the desination. The min number of edges to remove would be the flow. (max flow, min cut)


------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




------------------------------------------------------------------------




---------------------------------Median In stream of running integers---------------------------------------

#include <iostream>
using namespace std;
 
// Heap capacity
#define MAX_HEAP_SIZE (128)
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
//// Utility functions
 
// exchange a and b
inline
void Exch(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}
 
// Greater and Smaller are used as comparators
bool Greater(int a, int b)
{
    return a > b;
}
 
bool Smaller(int a, int b)
{
    return a < b;
}
 
int Average(int a, int b)
{
    return (a + b) / 2;
}
 
// Signum function
// = 0  if a == b  - heaps are balanced
// = -1 if a < b   - left contains less elements than right
// = 1  if a > b   - left contains more elements than right
int Signum(int a, int b)
{
    if( a == b )
        return 0;
 
    return a < b ? -1 : 1;
}
 
// Heap implementation
// The functionality is embedded into
// Heap abstract class to avoid code duplication
class Heap
{
public:
    // Initializes heap array and comparator required
    // in heapification
    Heap(int *b, bool (*c)(int, int)) : A(b), comp(c)
    {
        heapSize = -1;
    }
 
    // Frees up dynamic memory
    virtual ~Heap()
    {
        if( A )
        {
            delete[] A;
        }
    }
 
    // We need only these four interfaces of Heap ADT
    virtual bool Insert(int e) = 0;
    virtual int  GetTop() = 0;
    virtual int  ExtractTop() = 0;
    virtual int  GetCount() = 0;
 
protected:
 
    // We are also using location 0 of array
    int left(int i)
    {
        return 2 * i + 1;
    }
 
    int right(int i)
    {
        return 2 * (i + 1);
    }
 
    int parent(int i)
    {
        if( i <= 0 )
        {
            return -1;
        }
 
        return (i - 1)/2;
    }
 
    // Heap array
    int   *A;
    // Comparator
    bool  (*comp)(int, int);
    // Heap size
    int   heapSize;
 
    // Returns top element of heap data structure
    int top(void)
    {
        int max = -1;
 
        if( heapSize >= 0 )
        {
            max = A[0];
        }
 
        return max;
    }
 
    // Returns number of elements in heap
    int count()
    {
        return heapSize + 1;
    }
 
    // Heapification
    // Note that, for the current median tracing problem
    // we need to heapify only towards root, always
    void heapify(int i)
    {
        int p = parent(i);
 
        // comp - differentiate MaxHeap and MinHeap
        // percolates up
        if( p >= 0 && comp(A[i], A[p]) )
        {
            Exch(A[i], A[p]);
            heapify(p);
        }
    }
 
    // Deletes root of heap
    int deleteTop()
    {
        int del = -1;
 
        if( heapSize > -1)
        {
            del = A[0];
 
            Exch(A[0], A[heapSize]);
            heapSize--;
            heapify(parent(heapSize+1));
        }
 
        return del;
    }
 
    // Helper to insert key into Heap
    bool insertHelper(int key)
    {
        bool ret = false;
 
        if( heapSize < MAX_HEAP_SIZE )
        {
            ret = true;
            heapSize++;
            A[heapSize] = key;
            heapify(heapSize);
        }
 
        return ret;
    }
};
 
// Specilization of Heap to define MaxHeap
class MaxHeap : public Heap
{
private:
 
public:
    MaxHeap() : Heap(new int[MAX_HEAP_SIZE], &Greater)  {  }
 
    ~MaxHeap()  { }
 
    // Wrapper to return root of Max Heap
    int GetTop()
    {
        return top();
    }
 
    // Wrapper to delete and return root of Max Heap
    int ExtractTop()
    {
        return deleteTop();
    }
 
    // Wrapper to return # elements of Max Heap
    int  GetCount()
    {
        return count();
    }
 
    // Wrapper to insert into Max Heap
    bool Insert(int key)
    {
        return insertHelper(key);
    }
};
 
// Specilization of Heap to define MinHeap
class MinHeap : public Heap
{
private:
 
public:
 
    MinHeap() : Heap(new int[MAX_HEAP_SIZE], &Smaller) { }
 
    ~MinHeap() { }
 
    // Wrapper to return root of Min Heap
    int GetTop()
    {
        return top();
    }
 
    // Wrapper to delete and return root of Min Heap
    int ExtractTop()
    {
        return deleteTop();
    }
 
    // Wrapper to return # elements of Min Heap
    int  GetCount()
    {
        return count();
    }
 
    // Wrapper to insert into Min Heap
    bool Insert(int key)
    {
        return insertHelper(key);
    }
};
 
// Function implementing algorithm to find median so far.
int getMedian(int e, int &m, Heap &l, Heap &r)
{
    // Are heaps balanced? If yes, sig will be 0
    int sig = Signum(l.GetCount(), r.GetCount());
    switch(sig)
    {
    case 1: // There are more elements in left (max) heap
 
        if( e < m ) // current element fits in left (max) heap
        {
            // Remore top element from left heap and
            // insert into right heap
            r.Insert(l.ExtractTop());
 
            // current element fits in left (max) heap
            l.Insert(e);
        }
        else
        {
            // current element fits in right (min) heap
            r.Insert(e);
        }
 
        // Both heaps are balanced
        m = Average(l.GetTop(), r.GetTop());
 
        break;
 
    case 0: // The left and right heaps contain same number of elements
 
        if( e < m ) // current element fits in left (max) heap
        {
            l.Insert(e);
            m = l.GetTop();
        }
        else
        {
            // current element fits in right (min) heap
            r.Insert(e);
            m = r.GetTop();
        }
 
        break;
 
    case -1: // There are more elements in right (min) heap
 
        if( e < m ) // current element fits in left (max) heap
        {
            l.Insert(e);
        }
        else
        {
            // Remove top element from right heap and
            // insert into left heap
            l.Insert(r.ExtractTop());
 
            // current element fits in right (min) heap
            r.Insert(e);
        }
 
        // Both heaps are balanced
        m = Average(l.GetTop(), r.GetTop());
 
        break;
    }
 
    // No need to return, m already updated
    return m;
}
 
void printMedian(int A[], int size)
{
    int m = 0; // effective median
    Heap *left  = new MaxHeap();
    Heap *right = new MinHeap();
 
    for(int i = 0; i < size; i++)
    {
        m = getMedian(A[i], m, *left, *right);
 
        cout << m << endl;
    }
 
    // C++ more flexible, ensure no leaks
    delete left;
    delete right;
}
// Driver code
int main()
{
    int A[] = {5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4};
    int size = ARRAY_SIZE(A);
 
    // In lieu of A, we can also use data read from a stream
    printMedian(A, size);
 
    return 0;
}


----------------------------------TREES--------------------------------------


void postorder(NODE *nd)
{
    if(nd->left!=NULL)
        postorder(nd->left);
    if(nd->right!=NULL)
        postorder(nd->right);
    cout<<nd->info<<"->";
}

void inorder(NODE * nd)
{
    if(nd->left!=NULL)
        inorder(nd->left);
    cout<<nd->info<<"->";
    if(nd->right!=NULL)
        inorder(nd->right);
}

void preorder(NODE * nd)
{
    cout<<nd->info<<"->";
    if(nd->left!=NULL)
        preorder(nd->left);
    if(nd->right!=NULL)
        preorder(nd->right);

}

void display()
{
    cout<<"INO :     ";
    inorder(root);
    cout<<endl;
    cout<<"POST:    ";
    postorder(root);
    cout<<endl;
    cout<<"PRE :     ";
    preorder(root);
}

NODE * search(int val, NODE * nd)
{
    if(nd->info==val)
    {
        cout<<"GOT that Bastard \n";
        return nd;
    }
    if(val < nd->info)
    {
        if(nd->left!=NULL)
            search(val, nd->left);
        else
        {
            cout<<"NOT FOUND at left\n";
            return NULL;
        }
    }
    if( val > nd->info)
    {
        if(nd->right!=NULL)
            search(val, nd->right);
        else
        {
            cout<<"NOT FOUND at right\n";
            return NULL;
        }
    }
}

void deleteit(int val, NODE * nd)
{
    //    incmplete iguess
    if(nd->left->info==val)
    {
        if(nd->left->left==NULL && nd->left.->right==NULL)
        {
            nd->left=NULL;
            return ;
        }
        if(nd->left->left==NULL)
        {
            nd->left=nd->left->left->right;
        }
        if(nd->left->right==NULL)
        {
            nd->left=nd->left->left->right;
        }

    }
    if(nd->right->info==val)
    {

    }
}

void deleteNODE(int val)
{
    NODE * nd, * ptr;
    ptr = search( val, root);
    if(ptr!=NULL)
    {
        deleteit(val, root);
    }
}

// 3 see 1 first
void Justprintpath(int *path,int len)
{
    FOR(i,0,len)
    cout<<path[i]<<" ";
    cout<<endl;
}
// 2  see 1 first
int Print_All_the_Paths_Recursively(int *path, NODE *nd, int len)
{
    // A PreOrder i.e root, then children
    if(root==NULL)
        return 0;
    path[len]=nd->info;
    len++;
    if(nd->left==NULL && nd->right==NULL) // Leaf
    {
        Justprintpath(path, len);
    }
    else
    {
        Print_All_the_Paths_Recursively(path, nd->left, len);
        Print_All_the_Paths_Recursively(path, nd->right, len);
    }
    return 1;
}
// 1 see 2 related fun up ^
void Print_path_main()
{
    int *path;//[1000];
    path= (int *)malloc(sizeof(int)*100);
    Print_All_the_Paths_Recursively(path,root,0 );
}
//-------------------------------------------
void kth_smallest(NODE *nd, int k)
{
    static int cnt=0;
    if(nd==NULL || cnt>=k)
        return ;

    kth_smallest(nd->left, k);
    cnt++;
    if(cnt==k)
    {
        cout<<"Kth Smallest : "<<nd->info<<endl;
        return ;
    }
    //error(nd->info);

    kth_smallest(nd->right, k);
}

void Iterative_INORDER__DFS()
{
    NODE * curr=root, *tmp;
    stack <NODE *> s;
    int done=0;
    while(!done)
    {
        if(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        else if(!s.empty())
        {
            tmp=s.top();
            s.pop();
            cout<<tmp->info<<"-->";
            curr=tmp->right;
        }
        else
            done=1;
    }
    return;
}

void Iterative_LEVELWISE__BFS()
{
    cout<<"\nPrinting in LEVEL: ";
    NODE * curr=root, *tmp;
    queue <NODE *> q;
    q.push(root);
    //q.push(NULL);
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        cout<<tmp->info<<" ";
        if(tmp->left)
            q.push(tmp->left);
        if(tmp->right)
            q.push(tmp->right);
    }
    cout<<endl;
}

void Level_Wise_On_NewLine()
{
    cout<<"\nPrinting LEVELwise : \n";
    NODE * tmp, *nd;
    queue<NODE *> q;
    q.push(root);
    nd=new NODE;
    nd->left=nd->right=NULL;
    nd->info=-20;
    q.push(nd); // to seperate the first level
    while(!q.empty())
    {

        tmp=q.front();
        q.pop();
        //error(tmp->info);
        if(tmp->info==-20 && !q.empty())
        {

            //delete(tmp);
            nd=new NODE;
            nd->left=nd->right=NULL;
            nd->info=-20;
            cout<<endl;
            q.push(nd);
        }
        else if(!q.empty())
        {
            cout<<tmp->info<<" ";
            if(tmp->left)
                q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
        }
    }
    cout<<endl;
}

void Level_Wise_spiral(NODE * root)
{
    // double ended queue, or below this is using 2 stacks
    // O(n)
    if (!root) return;
    deque <NODE*> nodesQueue;
    int nodesInCurrentLevel = 1;
    int nodesInNextLevel = 0;
    nodesQueue.push_back(root);
    bool dir = true;
    while (!nodesQueue.empty())
    {
        NODE* currNode ;
        if(dir)
        {
            currNode = nodesQueue.front();
            nodesQueue.pop_front();
        }
        else
        {
            currNode = nodesQueue.back();
            nodesQueue.pop_back();
        }
        nodesInCurrentLevel--;
        if (currNode)
        {
            cout << currNode->info << " ";
            if(dir)
            {
                nodesQueue.push_back(currNode->left);
                nodesQueue.push_back(currNode->right);
            }
            else
            {
                nodesQueue.push_front(currNode->right);
                nodesQueue.push_front(currNode->left);
            }
            nodesInNextLevel += 2;
        }
        if (nodesInCurrentLevel == 0)
        {
            cout << endl;
            nodesInCurrentLevel = nodesInNextLevel;
            nodesInNextLevel = 0;
            dir = dir ? false: true;

        }
    }
}

void ZigZag(NODE *root)
{
    stack<NODE *> s1;
    stack<NODE *> s2;
    NODE *temp;
    /*Put the first node into stack*/
    s1.push(root);
    while(1)
    {
        while(s1.size() > 0)
        {
            temp = s1.top();
            s1.pop();
            cout<<" "<<temp->info;
            /*Put the data in left right fashion*/
            if(temp->left)
                s2.push(temp->left);
            if(temp->right)
                s2.push(temp->right);
        }
        cout<<endl;
        while(s2.size() > 0)
        {
            temp = s2.top();
            s2.pop();
            cout<<" "<<temp->info;
            /*REVERSE!!!Put the data in right left fashion*/
            if(temp->right)
                s1.push(temp->right);
            if(temp->left)
                s1.push(temp->left);
        }
        cout<<endl;
        if(s2.size() == 0 && s1.size() == 0)
            break;
    }


}


NODE * Limit_Range(NODE * root, int mx, int mn)
{

    // returns a tree having data only between mx and mn, all other NODEs are deleted
    if(!root)
        return NULL;
    root->left=Limit_Range(root->left,  mx, mn);
    root->right=Limit_Range(root->right, mx, mn);

    if(root->info < mn)
    {
        NODE * temp=root->right;
        delete(root);
        return temp;
    }
    if(root->info > mx)
    {
        NODE * temp=root->left;
        delete(root);
        return temp;
    }

    return root;
}

void add_Greater_Nos_to_each_NODE(NODE * root)
{
    static int adds=0;
    if(root)
    {
        if(root->right)
            add_Greater_Nos_to_each_NODE(root->right);
        root->info+=adds;
        adds=root->info;
        if(root->left)
            add_Greater_Nos_to_each_NODE(root->left);
    }
}

int diff_Bet_Odd_n_Even_Levels(NODE *root)
{
    if(root)
    {
        return root->info - (diff_Bet_Odd_n_Even_Levels(root->left)+diff_Bet_Odd_n_Even_Levels(root->right));
    }
    return 0;
}

void Print_All_Ancestors_Iterative(NODE *root, int x)
{
    // A PreOrder thing
    if(!root) return;
    stack <NODE *>s;

    while(1)
    {
        while(root && root->info != x) // NODE is checkd here
        {
            s.push(root);
            root= root->left;
        }
        if(root && root->info == x)
            break;
        if(s.top()->right==NULL)
        {
            root=s.top();
            s.pop();
            while(!s.empty() && s.top()->right == root)
                root = s.top() , s.pop();
        }
        if(s.empty())
            root=NULL;
        else
            root= s.top()->right;
    }
    while(!s.empty())
    {
        cout<<s.top()->info<<" ";
        s.pop();
    }
}

bool Print_All_Ancestors_Recursive(NODE *root, int x)
{
    if(!root)
        return false;
    if(root->info==x)
        return true;
    if(Print_All_Ancestors_Recursive(root->left, x) || Print_All_Ancestors_Recursive(root->right, x))
    {
        cout<<root->info<<" ";
        return true;
    }
    return false;
}

int MxLevel=0;      // SOME TIMES PUBLIC MAY NOT WORK
void print_Left_Side_view_of_BinaryTree(NODE *root, int cur_level)
{
    if(!root) // CAN DO SAME FOR RIGHT VIEW ALSO JUST CHANGE CALLING ORDER BELOW
        return;
    if(cur_level > MxLevel)
    {
        cout<<root->info<<", ";
        MxLevel=cur_level;
    }
    print_Left_Side_view_of_BinaryTree(root->left, cur_level+1);
    print_Left_Side_view_of_BinaryTree(root->right, cur_level+1);
}

// 2
map <int, int> map_vertical_sum;
void vertical_sum_util(NODE *root, int hori_dist)
{
    if(!root)
        return;
    if(root->left)
        vertical_sum_util(root->left, hori_dist+1);
    map_vertical_sum[hori_dist]= map_vertical_sum[hori_dist]+root->info;
    if(root->right)
        vertical_sum_util(root->right, hori_dist-1);
}

// 1 BELOW IS THE DIRECT IMPLEMENTATION
void vertical_sum_of_binary_tree(NODE * root)
{
    vertical_sum_util( root, 0);
    FOR(i,-3, 4) // PRINT FOR ALL POSSIBLE HORIZONTAL DISTs
    {
        // MAY BE ITS IN REV ORDER
        error(map_vertical_sum[i]);
    }
}

//2		 Lol can do that with int also
vector <int> vertical_pool_plus[100], vertical_pool_minus[100];
void print_vertical_util(NODE *root, int hori_dist)
{
    if(!root) return ;
    if(root->left)
        print_vertical_util(root->left, hori_dist+1);
    if(hori_dist>=0)
        vertical_pool_plus[hori_dist].push_back(root->info);
    else
        vertical_pool_minus[hori_dist*-1].push_back(root->info);
    if(root->right)
        print_vertical_util(root->right, hori_dist-1);
}

//1       BELOW IS THE DIRECT ONE, WITHOUT GLOBAL
void print_vertical_tree(NODE *root)
{
    print_vertical_util(root, 0);
    int var;
    FOR(i,0,10000)
    {
        if(vertical_pool_plus[i].size()==0)
        {
            var=i;
            break;
        }
    }
    for(int i=var-1; i>=0; i--)
    {
        for(int j=0; j<vertical_pool_plus[i].size(); j++)
            cout<<vertical_pool_plus[i][j]<<", ";
        cout<<endl;
    }
    for(int i=1; i<100000; i++)
    {
        if(vertical_pool_minus[i].size()==0)
            break;
        for(int j=0; j<vertical_pool_minus[i].size(); j++)
            cout<<vertical_pool_minus[i][j]<<", ";
        cout<<endl;
    }
}

int diameter(NODE * root, int * height)
{
    int lh=0, rh=0;
    int ldia=0, rdia=0;
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    ldia=diameter(root->left, &lh);
    rdia=diameter(root->right, &rh);
    *height=max(lh, rh)+1;
    return max(lh+rh+1, max(ldia, rdia));
}
void fixPrevPtr(struct NODE *root)
{
    static struct NODE *pre = NULL;

    if (root != NULL)
    {
        fixPrevPtr(root->left);
        root->left = pre;
        pre = root;
        fixPrevPtr(root->right);
    }
}

// Changes right pointers to work as next pointers in converted DLL
struct NODE *fixNextPtr(struct NODE *root)
{
    struct NODE *prev = NULL;

    // Find the right most NODE in BT or last NODE in DLL
    while (root && root->right != NULL)
        root = root->right;

    // Start from the rightmost NODE, traverse back using left pointers.
    // While traversing, change right pointer of NODEs.
    while (root && root->left != NULL)
    {
        prev = root;
        root = root->left;
        root->right = prev;
    }

    // The leftmost NODE is head of linked list, return it
    return (root);
}

// The main function that converts BST to DLL and returns head of DLL
struct NODE *BTToDLL(struct NODE *root)
{
    // Set the previous pointer
    fixPrevPtr(root);

    // Set the next pointer and return head of DLL
    return fixNextPtr(root);
}

void print_ancestor(NODE *root,int  data)
{	// Better use iterative PREORDER !
    if(!root)return;
    queue<NODE *> q;
    q.push(root);
    NODE *tmp=root;
    int flag=0;
    while(!q.empty())
    {
        if(tmp==NULL)
        {
            tmp=q.front();
            q.pop();
        }
        flag=0;
        //error(tmp->info);
        while(tmp)
        {
            if(tmp->info == data)
            {
                flag=1;
                break;
            }
            tmp=tmp->left;
            if(tmp)
                q.push(tmp);
        }
        if(flag==1)
        {

            while(!q.empty())
            {
                NODE *tmp=q.front();
                q.pop();
                if(tmp->info==data)
                    break;
                cout<<tmp->info<<", ";
            }
            break;
        }
        tmp=tmp->right;
    }
}


int finalans=-1;
int inOrder_Successor(NODE * root, int val)
{
    static int prev;//, prev2=-1;
    if(!root) return -1;

    inOrder_Successor(root->left, val);
    if(root->info==val)
        finalans=prev;
    else
        prev=root->info;
    inOrder_Successor(root->right, val );
}

int main()
{
    NODE *tempNODE, *newnd;
    int src, ans=1;
    int data;
    int d[15]= {10,5,15,17,12,13,11,8,3,2,9,6,4,16,20};

    FOR(i,0,15)
    createtree(d[i]);

    error(inOrder_Successor(root, 3));
    error(finalans);



    print_ancestor(root, 2);
    cout<<endl;

    print_vertical_tree(root);
    display();
    int height=0;
    cout<<"Diam: "<<diameter(root, &height);

    //NODE *head=BTToDLL(root);

    cout<<endl;
    /*while(head)
    {
        cout<<head->info<<" ---- ";
        head=head->right;
    }*/
    cout<<"Babucheck-------\n";
    Level_Wise_spiral(root);
		ZigZag(root);
    return 0;
}

/*
				      10
		  5				      15
    3   8			    12   17
	 2 4 6 9	    11 13	16 20

VERTICAL            SUM
2                =	2
3                =	3
4, 5, 6, 11      =	26
8, 10, 12        =	30
15, 13, 16, 9    =	53
17               =	17
20               =	20


*/



