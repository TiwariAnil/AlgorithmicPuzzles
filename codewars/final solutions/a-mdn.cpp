#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int sigm(int n)
{
	return (n*(n+1))/2;
}

int main(int argc, char const *argv[])
{
	long int n, x, y, ways;
	cin >> n >> x >> y;
	if (n <= x && n <= y)
		cout << sigm(n+1);
	
	// Use this comment block in case x or y are less than n

	else if (n > x && n <= y)
		cout << (sigm(n+1) - sigm(n-x));
	else if (n > y && n <= x)
		cout << (sigm(n+1) - sigm(n-y));
	else
		cout << (sigm(n+1) - sigm(n-y) - sigm(n-x));
	return 0;
}