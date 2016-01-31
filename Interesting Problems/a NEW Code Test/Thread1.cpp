#include <iostream>
#include <thread>
using namespace std;

void func1(){
    cout<<"Never Give up";
}

int main(){
    boost::thread t1(func1);
    t1.join();

    return 0;
}
