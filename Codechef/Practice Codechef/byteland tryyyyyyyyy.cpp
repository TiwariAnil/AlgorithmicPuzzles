#include <iostream>
#include <map>
 
using namespace std;
 
map<int, unsigned long long> m;
 
unsigned long long go(int n)
    {
        if (n == 0)
             m[n]=0;
      
            
      
        unsigned long long split = go(n/2) + go(n/3) + go(n/4);
  
        if (split >n)
              n = split;
 
          m[n] = n;
}
 
int main() {
  int n;
  long i;
  for(i=0;i<=10000;i++)      
  { 
       go(i); 
  }
  while (cin >> n) 
  {
    map<int, unsigned long long>::iterator it = m.find(n);
      if (it != m.end())
                cout<< it->second;
 }
   
   
 
  return 0;
}
 
