#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int nodes, edges, x, y, sets[5000]={0};
	bool flag = false;
	cin >> nodes >>  edges;
	for(int i=0; i < edges; i++)
	{
		cin >> x >> y;
	}

	//	if(sets[x-1] > 0 && sets[y-1] > 0)			// Alternate Long logic
	// 	{
	// 		flag = true;
	// 		break;
	// 	}
	// 	else if(sets[x-1] > 0)
	// 	{
	// 		sets[y-1] = 1;
	// 	}
	// 	else if(sets[y-1] > 0)
	// 	{
	// 		sets[x-1] = 1;
	// 	}
	// 	else
	// 	{
	// 		sets[x-1] = 1;
	// 		sets[y-1] = 1;
	// 	}
	// }
	
	if(edges!=nodes-1)
		cout << "corrupt" << endl;
	else
		cout << "not corrupt" << endl;
	return 0;
}