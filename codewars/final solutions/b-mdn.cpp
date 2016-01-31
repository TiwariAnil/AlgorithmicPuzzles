#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <set>
#include <cmath>

using namespace std;

bool isprime(long int n)
{
	if(n%2==0 && n!=2)
		return false;
	for(int i=3;i<=sqrt(n);i+=2)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int cases, pairs, n, tazos;
	cin >> cases;
	while (cases--)
	{
		int x,y,setno=1;
		int pairarr[10000]={0}, sets[10000]={0};
		cin >> n >> pairs >> tazos;
		for(int i=0; i<n; i++)
		{
			cin >> pairarr[i];
		}
		for(int i=0; i< pairs; i++)
		{
			cin >> x >> y;
			if(sets[x-1] > 0)
			{
				sets[y-1] = sets[x-1];
			}
			else if(sets[y-1] > 0)
			{
				sets[x-1] = sets[y-1];
			}
			else
			{
				sets[x-1] = setno;
				sets[y-1] = setno;
				setno++;
			}
		}

		int tazosum[10000]={0}, grp=0,j=0; 
		for(int i=0; i < n; i++)
		{
			if(sets[i]!=0)
				tazosum[sets[i]] += pairarr[i];
			else
				tazosum[setno++] = pairarr[i];
		}	
		// for(int i=0; i<setno; i++)
		// 	cout << tazosum[i] << " ";
		// cout <<endl;

		for(int i=1; i < setno; i++)
		{
			if(isprime(tazosum[i]+tazos))
				grp++;
		}
		cout << grp << endl;

	}
	return 0;
}