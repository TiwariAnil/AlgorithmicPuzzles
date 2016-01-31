#include <iostream>
#include <thread>
using namespace std;

void func1( int &val){
    val = 23;
    cout<<val<<endl;
}

void func2(int *pk){
    *pk =2;
    cout<<pk<<endl;
}
int main(){
    int *v, t=20;
    v= &t;
    func1(t);
    cout<<v<<endl;
    cout<<"new things\n";
    func2(&t);
    cout<<t<<endl;

    return 0;
}
