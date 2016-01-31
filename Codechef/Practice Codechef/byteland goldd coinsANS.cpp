#include <iostream>
using namespace std;
 
const int mp = 30;
const int mq = 20;
long long optValue[mp*mq];
long long optimize(long long n, int p, int q)
{
  if(n<12)
    return n;
  if(optValue[q+p*mq]>=0)
    return optValue[q+p*mq];
  long long n2;
  long long n3;
  long long n4;
  long long nR;
 
  n2 = n/2;
  n3 = n/3;
  n4 = n/4;
 
  nR = optimize(n2, p+1, q)+optimize(n3, p, q+1)+optimize(n4, p+2, q);
 
  optValue[q+p*mq] = nR;
  return nR;
}
int main()
{
  long long n;
  while(true)
    {
      for(int p=0;p<mp;p++)
	{
	  for(int q=0;q<mq;q++)
	    {
	      optValue[q+p*mq] = -1;
	    }
	}
      cin >> n;
      if(cin.eof())
	break;
      cout << optimize(n, 0, 0) << endl;
    }
  return 0;
}
 
