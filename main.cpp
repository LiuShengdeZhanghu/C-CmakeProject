#include <iostream>
#include <map>
#include <string>
//#include "src/zhiZhen.h"
#include "src/jieGouTi.h"
#include "src/Dog.h"

using namespace std;
//void print(char sz[3])
//{
//    printf("%d", sizeof(sz));
//}

template<typename T>
inline T const& Max(T const &a, T const &b)
{
    return a > b ? a : b;
}

void demo11()
{
    CExample ce;
    cout << sizeof(ce);
}

void demo10()
{
    string a = "huawei";
    const char *b = a.c_str();

    cout << a << endl;
    cout << b << endl;

    a += string(4, '1');
    cout << a << endl;
    cout << b << endl;
}

int i = 3;
namespace A {
    int i = 1;
}

namespace B {
    int i = 2;
    void F1(void);
    void F2(void);
    void F3(void);
    void F4(void);
}

void B::F1() {
    using namespace A;
    cout << i << endl;
}

void B::F2() {
    using A::i;
    cout << i << endl;
}

void B::F3() {
    cout << A::i << endl;
}

void B::F4() {
    cout << i << endl;
}

void yudinyihong()
{
    cout << "Hello, World!" << endl;
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
}

int main() {
    cout << "hello word" << endl;
    yudinyihong();
    return 0;
}
