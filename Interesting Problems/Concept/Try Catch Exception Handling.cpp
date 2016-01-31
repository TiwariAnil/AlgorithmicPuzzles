// exceptions
#include <iostream>
#include<string>
using namespace std;

int main () {
  	string s="hello";
  try
  {
    //throw 20;
  	throw s;
  }
  
  catch (string x )
  {
  	cout<<"String : "<<x<<endl;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception Nr. " << e << endl;
  }
  
  return 0;
}
