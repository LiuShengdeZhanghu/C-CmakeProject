//
// Created by liusheng on 2020/10/4.
//

#include "jieGouTi.h"

void jieGouTiDemo()
{
    Student s1;
    s1.score = 99;
    Student s2 = {"liusheng", 22, 100};
    std::cout << s2.name << std::endl;
    std::cout << s2.age << std::endl;
    std::cout << s2.score << std::endl;

    // 结构体数组的定义
    struct Student arr[3] = {
            {"liusheng", 22, 100},
            {"xiaowang", 24, 99},
            {"xiaoyang", 22, 98}
    };

    arr[2].name = "xiaogan";

    // 指向结构体的指针
    Student *p = &s2;
    std::cout << p->name << std::endl;

    // 结构体嵌套结构体
    Teacher teacher = {"xiaogan", 45, {"liusheng", 22, 100}};
    printTeacher(&teacher);
}

void printTeacher(const Teacher *teacher)
{
    std::cout << teacher->name << std::endl;
    std::cout << teacher->student.name << std::endl;
}