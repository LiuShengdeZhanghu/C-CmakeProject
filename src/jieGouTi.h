//
// Created by liusheng on 2020/10/4.
//

#ifndef LEARN_JIEGOUTI_H
#define LEARN_JIEGOUTI_H

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age{};  // 给一个默认初始值
    int score{};
};   // 这个是Student类型的一个变量，可以直接使用s3进行访问


struct Teacher {
    std::string name;
    int age{};
    Student student;
};

void jieGouTiDemo();

void printTeacher(const Teacher *teacher);
#endif //LEARN_JIEGOUTI_H
