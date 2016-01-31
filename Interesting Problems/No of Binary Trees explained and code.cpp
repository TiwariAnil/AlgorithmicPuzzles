#include<iostream>
#include<cstdio>
#include<cstdlib>
#define error(x)                cout << #x << " : " << (x) << endl
using namespace std;

/*

Link: http://cslibrary.stanford.edu/110/BinaryTrees.html
12. countTrees()
This is not a binary tree programming problem in the ordinary sense -- it's more of a math/combinatorics recursion problem that happens to use binary trees. (Thanks to Jerry Cain for suggesting this problem.)
Suppose you are building an N node binary search tree with the values 1..N. How many structurally different  binary search trees are there that store those values? Write a recursive function that, given the number of distinct values, computes the number of structurally unique binary search trees that store those values. For example, countTrees(4) should return 14, since there are 14  structurally unique binary search trees that store 1, 2, 3, and 4. The base case is easy, and the recursion is short but dense. Your code should not construct any actual trees; it's just a counting problem.

Solution: (same soln works for no of correct combi of braces eg "(())", "()()"
 For the key values 1...numKeys, how many structurally unique
 binary search trees are possible that store those keys.
 Strategy: consider that each value could be the root.
 Recursively find the size of the left and right subtrees.
*/
int countTrees(int numKeys)
{
	if (numKeys <=1)
	{
		return(1);
	}
	else
	{
		// there will be one value at the root, with whatever remains
		// on the left and right each forming their own subtrees.
		// Iterate through all the values that could be the root...
		int sum = 0;
		int left, right, root;

		for (root=1; root<=numKeys; root++)
		{
			left = countTrees(root - 1);
			right = countTrees(numKeys - root);

			// number of possible trees with this root == left*right
			sum += left*right;
		}
		return(sum);
	}
}


int main()
{
  return 1;
}
