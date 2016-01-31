#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<list>
#include<algorithm>
#define size 1000001
using namespace std;

char primes[size];
void find_prime(){
	
	primes[0] = primes[1] = '0';
	primes[2] = '1';
	for(int i=3;i<size;i+=2)
		primes[i] = '1';
	for(int i=3;i<=sqrt(size);i+=2){
		if(primes[i] - 48){
			for(int j=i*3;j<size;j+=(2*i))
				primes[j] = '0';
		}
	}
}

int check_prime(int total){
	if(total == 2 || (total % 2 == 1 && primes[total] - 48))
		return 1;
	return 0;
}

int main(){
	
	int left, x, y, tazos[10000], groups[10000], sum[10001], t, n, p, nog;
	long long int m;
	find_prime();
	scanf("%d", &t);
	while(t--){
		
		scanf("%d%lld%d", &n, &m, &p);
		nog = 0;
		memset(groups, -1, n * sizeof(int));
		memset(sum, 0, n * sizeof(int));
		for(int i=0;i<n;i++)
			scanf("%d", &tazos[i]);
		for(long long int i=0;i<m;i++){
			scanf("%d%d", &x, &y);
			x--;
			y--;
			if(groups[x] == -1 && groups[y] == -1){
				nog++;
				groups[x] = groups[y] = nog;
				sum[nog] += (tazos[x] + tazos[y]);
			}
			else if(groups[x] == -1 || groups[y] == -1){
				if(groups[x] == -1){
					sum[groups[y]] += tazos[x];
					groups[x] = groups[y];
				}
				else{
					sum[groups[x]] += tazos[y];
					groups[y] = groups[x];
				}
			}
		}
		
		int cnt = 0;
		
		for(int i=1;i<=nog;i++){
			int total = sum[i] + p;
			cnt += check_prime(total);
		}
		
		for(int i=0;i<n;i++){
			if(groups[i] == -1){
				int total = tazos[i] + p;
				cnt += check_prime(total);
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}
