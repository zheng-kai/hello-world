#include<iostream>

using namespace std;


class A {

public:
    virtual void fun() = 0;
};
class B: public A {
public:
    void fun() override{
        cout << "B" << endl;
    }
};
class C: public B {
public:
    void fun() override{
    }
};
int main() {
    C c;

//    cout << "1" << endl;
//    B b;
////    b.fun();
//    cout << "2" << endl;
//    b.funA();
//    b.fun(2);
//    try{
//        throw b;
//    }
//    catch(B e){
//        cout << "b" << endl;
//    }
//    catch(char e){
//        cout << e << endl;
//    }
//    B b1();

    return 0;
}
