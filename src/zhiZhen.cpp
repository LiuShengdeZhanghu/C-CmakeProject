//
// Created by liusheng on 2020/10/4.
//

#include "zhiZhen.h"

void constZhiZhenDemo()
{
    int a = 10;
    int b = 12;
    // 指向const的指针，指针的指向可以改变，但不能改变指针指向的值
    const int *p1 = &a;
    p1 = &b;

    // const指针，指向的值可以改变，但是不能改变指针的指向
    int* const p2 = &b;
    *p2 = 11;
    std::cout << "constZhiZhenDemo" << std::endl;

    // 既不可以修改指针的指向，也不可以修改指针指向的值
    const int* const p3 = &a;
}

void zhiZhenShuzuDemo()
{
    int iArr[] = {1, 2, 3, 4, 5};
    char sArr[] = {'a', 'b', 'c', 'd'};

    int *p1 = iArr;
    char *p2 = sArr;

    // 指针指向的是数组第一个元素
    std::cout << "iArr[0] : " << *p1 << std::endl;

    // 指向数组的指针进行+1操作时，会让指针指向数组的下一个元素，会自动偏移相应类型的长度
    for (int i = 0; i< 4; i++) {
        std::cout << "sArr[" << i << "] : " << *p2 << std::endl;
        p2++;
    }
}
