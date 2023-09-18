#pragma once
#include "file2.cpp"



Snack::Snack();
Snack::string getName();
Snack::virtual void showInfo();
Candy::Candy(string flavor, string name);
Candy::void showInfo();
Choclate::Chocolate(string shape, string name);
Chocolate::void showInfo();
Chocolate2::Chocolate2(string shape, string name);
Chocolate2::void showInfo();
Person::virtual void intro();
Student::Student(string name);
Student::void intro();
Student::void learn();
Teacher::Teacher(string name);
Teacher::void intro();
Teacher::void teach();