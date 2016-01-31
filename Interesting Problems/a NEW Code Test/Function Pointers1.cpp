#include <iostream>
using namespace std;

int func1(int a, int b){
    cout<<"Never Give up\n";
    return a+b;
}

void func2(){
    cout<<"N G U\n";
}



int main(){
    int (*fp) (int, int); //////// syntax for function pointers is ---  function_return_type (*variable_name) (function_arguments);
    void (*vp)();
    /*
    int *fp (int, int);                !=    int (*fp) (int, int);
    its a function returning int*             its a function pointer.

    */
    int *pk, *nk, *jk;
    int tmp;
    fp = &func1; // or just func1 will do the same as, func1 will also return the function address only!
    vp = &func2;
    tmp= (*fp)(2,3); // is same as tmp= fp(2,3; hahaha, its just like a new function with fp name.
    cout<<tmp<<endl;

    return 0;
}
