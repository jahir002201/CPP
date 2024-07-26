#include <iostream>
using namespace std;

typedef struct CourseInfo{
    char *id;
    int credit;
    float gpa;
    CourseInfo *next;
}CourseInfo;

int main(){
    CourseInfo *course;

    course = new CourseInfo;
    course->credit = 3;
    delete course;

    return 0;
}