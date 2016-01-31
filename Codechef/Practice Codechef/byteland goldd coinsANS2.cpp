#include <iostream>
#include <map>
 
using namespace std;
 
map<int, unsigned long long> m;
 
unsigned long long go(int n)
    {
        if (n == 0)
             return 0;
            
        map<int, unsigned long long>::iterator it = m.find(n);
        
        if (it != m.end())
                 return it->second;
            
        unsigned long long best = n;
        unsigned long long split = go(n/2) + go(n/3) + go(n/4);
  
        if (split > best)
               best = split;
 
        return m[n] = best;
}
 
int main() {
  int n;
  while (cin >> n) {
    cout << go(n) << endl;
  }
  return 0;
}
 
