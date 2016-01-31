G.P.
a= first term, r=common ratio then, 

a, ar, ar^2, ar^3, ar^4 ....... ar^n  is a GP

nth term : Tn = ar^(n-1)

sum      : Sn = a [ (r^n - 1)/(r-1) ]  where r!=1 

BEFORE INTERVIEW
0. Open the website Amazon.in/com
1. Get Net Pack on Cell.
2. Resume ! Know every shit, 10 mins in all section/project.
3. Challenges, HR Questions.
4. OOP funda and DESIGN thing, refer class in C++ once.
	L-5 Hashing.mp4
5. Open all random files saved everywhere, and just give a look.
6. Hash Video IITD + Segment Tree
7. Dynamic memory allocation | Paging | OS semaphores
-> How the new NODE() or NODE ?? same for malloc
Diff betn malloc calloc relloc NEW


void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
} 

8. Amazon strives to be the most costumer centric company on earth. 
	What, as a programmer/developer, do you do to achieve this, because 
	generally, the customer’s problems are an issue for high level managers and planners.
9. KMP one mistake you do (search as "kmpmis" here)!
	Sorted order printing of a given array that represents a BST
	Merge Sort for Linked Lists
10.What have you done good till now : 
	Coding Club !
	Programming Club !
	Information exchange !


CODE TO BE DEEPLY UNDERSTOOD (Daily two times)

Check for Identical BSTs without building the trees
Largest Binary Search Tree (BST) in a Binary Tree   [Bottom up , take an example]
Largest Binary Search Tree (BST) subtree in a Binary Tree [Take an example]
Print ancestors of a given binary tree node without recursion
Construct Full Binary Tree from given preorder and postorder traversals
Construct BST from given preorder traversal | Set 1
Construct BST from given preorder traversal | Set 2
Iterative Postorder Traversal | Set 2 (Using One Stack)
Remove BST keys outside the given range
Tri code
Construct a special tree from given preorder traversal
Boundary Traversal of binary tree
Connect nodes at same level using constant extra space  [ Mistake you do in recurrence + 3 methods to do it + Write iterative soln ]

Count the number of possible triangles [The third loop 'k' wala]
Arrange given numbers to form the biggest number
Given an array of of size n and a number k, find all elements that appear more than n/k times
Find the two numbers with odd occurrences in an unsorted array            [BAAAAAP]
Find the smallest and second smallest element in an array





rotate(arr[], d, n)
  reverse(arr[], 1, d) ;
  reverse(arr[], d + 1, n);
  reverse(arr[], l, n);


19. 		Binary search [Iterative and recursive both] 
20. 		given preorder traversal Construct BST 
21. 		String matching where one string contains wildcard characters - GeeksforGeeks   GeeksforGeeks
22. 		Merge k sorted arrays | Set 1 
23. 		Implement the cache using LRU technique [see below, ans is written]
24. 		Find the largest BST subtree in a given Binary Tree 					[Aim: to return max nd min from every subtree !]
25. 		Median of two arrays of diff sizes. [return type]
26. 		Print Postorder traversal from given Inorder and Preorder traversals
27. 		Reverse words in a given string - GeeksforGeeks   GeeksforGeeks  
28. 		Construction of Longest Monotonically Increasing Subsequence (N log N)
29. 	CODE Tri data structure ONCE
30. 	Largest Binary Search Tree (BST) in a Binary Tree #LeetCode
31. 	In-place conversion of Sorted DLL to Balanced BST - GeeksforGeeks   GeeksforGeeks
32. 	AVL rotations [another]
33. 	Merge-sort Linked list
34. 		Morris traversal for Inorder and Preorder
35. 		Reverse a linked list k in a group | Reverse a Linked List in groups of given size - GeeksforGeeks   GeeksforGeeks
36. 		Total number of possible Binary Search Trees with n keys
37. 		KMP one time. 
38. 	[search online for its code]Given a linked list with one extra arbit pointer we I was asked to make copy of linked list
39. 		How to determine if a binary tree is height-balanced?  [code and verify]
40. 		Detect and remove a loop from the LINKED list
41. 	Count smaller elements on right side
42. 		Given a sequence of words, print all anagrams together  [Code it]
43. 	GRAPH DISJOINT SET AND ETC TO BLAH BLAH
44. 		Sort elements by frequency 
45. 	Print all permutations in sorted (lexicographic) order - GeeksforGeeks   GeeksforGeeks
46. 	Write a C program to print all permutations of a given string - [BOTH the methods and verify]
47. 		Merge Sort for Linked Lists , array or DLL
48. 		Diameter of Binary Tree
49. 	Median in a stream of integers [parent(i) wala concept]
50. 	Convert an arbitrary Binary Tree to a tree that holds Children Sum Property
51. 	Given a number, find the next smallest palindrome   GeeksforGeeks
52. 	Find maximum product of subarray in given array of integers
53. 		QuickSort + Merge sort (inv cnt)
54. 	Zig-Zag/spiral tree traversal [ek baar code likh le har jagaha puchha hai]
55. 	Given coin array and a sum K, find min. number of required coin to make sum K. [same reason ^]
56.  	Division in bit wise
57. 	Reverse the bits + Invert the bits of a given no.
58. 	Connect nodes at same level using constant extra space - GeeksforGeeks   GeeksforGeeks 
59. Serialization of binary tree not BST. 
60. Remove all nodes which don't lie in any path with sum = k   GeeksforGeeks.mhtml
61. 	Power function [Square and multiply method]
62. 	Print ancestors of a given binary tree node without recursion
63. 	Least common ancestor of a binary tree and binary search tree
64. 	QuickSort on Linked List - GeeksforGeeks   GeeksforGeeks
65. 	(two soln find both)Given a binary search tree of n nodes, find all the pair of  nodes whose sum is equal to a given number k in O(n) time and constant space.(algo+code)
66. 	http://leetcode.com/2012/01/palindrome-number.html 
67. 	DYNAMIC 'mATRIX mULTIPLICATION'
68. http://www.geeksforgeeks.org/reservoir-sampling/
70. http://www.geeksforgeeks.org/shuffle-a-given-array/



---------------------------------------------------------------
Reverse Bits:

typedef unsigned int uint;
uint swapBits(uint x, uint i, uint j) {
  uint lo = ((x >> i) & 1);
  uint hi = ((x >> j) & 1);
  if (lo ^ hi) {
    x ^= ((1U << i) | (1U << j));
  }
  return x;
}
 
uint reverseXor(uint x) {
  uint n = sizeof(x) * 8;
  for (uint i = 0; i < n/2; i++) {
    x = swapBits(x, i, n-i-1);
  }
  return x;
}
==========
This line:
x ^= ((1U < < i) | (1U << j));

simply means to toggle the ith and jth bits.
( ie, x = 1001,
--> x ^= ((1U < < 1) | (1U << 3))
--> x = 1001 ^ (1010)
–> x = 0011 )

This is possible because xor-ing a bit with 1 will toggle the bit.
Therefore, xor-ing itself with 1 both set on the ith and jth bit 
(white other bits are zeroes) will toggle only the ith and jth bits.

-------------------------------------------------------------------------
We use two data structures to implement an LRU Cache.

1. A Queue which is implemented using a doubly linked list. 
	The maximum size of the queue will be equal to the total number of frames available (cache size).
	The most recently used pages will be near front end and least recently pages will be near rear end.
2. A Hash with page number as key and address of the corresponding queue node as value.
	When a page is referenced, the required page may be in the memory. If it is in the memory, we need to detach the node
	of the list and bring it to the front of the queue.
	If the required page is not in the memory, we bring that in memory. In simple words, we add a new node to the front of
	the queue and update the corresponding node address in the hash. If the queue is full, i.e. all the frames are full,
	we remove a node from the rear of queue, and add the new node to the front of queue.
-----------------------------------------------------------------------
1) Reverse the individual words, we get the below string.
     "i ekil siht margorp yrev hcum"
2) Reverse the whole string from start to end and you get the desired output.
     "much very program this like i"

-----------BETTER------------------------------------------------------

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
-----------------------------------------



=============================================

Tips:

Tree: Always think of pre/ post /inorder soln. or TopDown or Bottom UP and what has to be returned !

Linked List: Test for 0,1,2,3 size list, run dry B4 and after Code.

Array: Run dry for 0,1,2,3,4 size array.


 It is best to list all kinds of cases first before you jump into coding. 
 Then, it is much easier to reduce the number of cases your code need 
 to handle by combining some of them into a more generic case. 
 Try to also list down all possible edge cases if you have time. 
 You might discover a bug before you even start coding!

 RunCode for size Null,1,2 size data, specially linked-lists 
 Use example while creating ans.

kmpmis
if (j == M)
	{
		printf("Found pattern at index %d \n", i-j);
		j = lps[j-1];
	}

TREES types
For any fuck purpose of leaf nodes , do this same return root things!
we return root !	http://www.geeksforgeeks.org/connect-leaves-doubly-linked-list/

BAAP	we return root !	http://www.geeksforgeeks.org/sorted-linked-list-to-balanced-bst/


Declaration:
bool checkUtil(struct Node *root, int level, int *leafLevel) 

Calling:
int level = 0, leafLevel = 0;
   return checkUtil(root, level, &leafLevel);

---------------------------------------------------------------------

Use in priority Queue:

inline bool operator < (const Road& that)
		const {return c > that.c; }

---------------------------------------------------------------------

Before telling you the questions and interview procedure, I would like to offer some suggestions.
There are always instances when your interview is not off with a great start. You need not panic and keep your calm.
Secondly, to compensate all the shortcomings in the technical part, interact with the interviewer as much as you can.
*******************Show him that you are really interested in the company.****************************
They are looking for future managers not just coders, so you have to have people skills.

----------------------------------------------------------------------
