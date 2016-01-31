#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

string S;
int n;
vector<string> L;


void F(int index, int length, string str)
{
  if (length == 0) {
    L.push_back(str);
  } else {
    for (int i = index; i < n; i++) {
      string temp = str;
      temp += S[i];
      F(i + 1, length - 1, temp);
    }
  }
}

int main()
{
  S = "abcde"; // replace with your string
  n = S.length();
  int k = 3; // or what you want
  F(0, k, string(""));

  int count = 0;

  for (int i = 0; i < int(L.size()); i++) {
    string temp = L[i];
    sort(temp.begin(), temp.end());
    do {
      cout << temp << endl;
      count++;
    } while (next_permutation(temp.begin(), temp.end()));
  }


  cout << endl << "count = " << count << endl;
  return 0;
}
