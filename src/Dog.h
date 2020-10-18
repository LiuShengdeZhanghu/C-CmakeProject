//
// Created by liusheng on 2020/10/18.
//

#ifndef LEARN_DOG_H
#define LEARN_DOG_H

#include <iostream>

class Dog {
public:
    Dog():age(0){};
    std::string getName();
    virtual ~Dog() = default;
private:
    int age;
//    static int sc;
};

class CExample {
public:
    CExample(){};
    virtual ~CExample(){};

private:
    static int m_iValue1;
    int m_iValue2;
};

class CA {
public:
    CA() = default;
    virtual ~CA() = default;

private:
    int m_i;
public:
    int GetTime();
    int setTime(int i);
};

int Init(std::string info)
{
    std::cout << info << std::endl;
    return 0;
}

class AA {
    int m_x;
public:
    AA():m_x(Init("Init AA::m_x")){
        Init("Call AA:AA()");
    }
};

class BB : public AA {
    int m_x;
    int m_y;
public:
    BB():m_x(Init("Init BB::m_x")), m_y(Init("Init BB::m_y")){
        Init("Init BB::BB()");
    }
};

class CParent {
public:
    CParent(){};
    virtual ~CParent(){};
public:
    virtual void print() const
    {
        std::cout << 1;
    }
    // 只要有一个纯虚函数，就是一个抽象类
//    virtual void sun() = 0;
};

class CSon : public CParent {
public:
    CSon(){};
    virtual ~CSon(){};
public:
    // 如果子类不实现纯虚函数，子类仍为虚函数
    void sun()
    {
        std::cout << "子类必须实现父类的纯虚函数";
    }
    void print()
    {
        std::cout << 2;
    }
};

void Test1(CParent& oParent)
{
    oParent.print();
}

void Test2(CParent oParent)
{
    oParent.print();
}

auto g1(int x)
{
    return [&x](int y){return x+y;};
}

auto g2(int& x)
{
    return [&x](int y){return x+y;};
}

#endif //LEARN_DOG_H
