/*Write a program to create a class “student” that stores the name,roll, age of a
student. Create another class “mark” which stores the three subject marks and grade.
Input the details of a student by using necessary member function. Print all the details
by making a member function of “mark” class friendly to “student” class.*/
#include<iostream>
using namespace std;
class mark;
class student
{
    char name[100];
    int roll_no;
    int age;
    friend void display(student,mark);
};
class marks
{
    int marks1;
    int marks 2;
    int marks 3;
    char grade;
    friend void display(student, marks);
};
void display(student s, marks m)
{
    cout<<"PRINTING THE DETAILS OF STUDENT\n";
    cout<<"NAME : \n"<<s.name;
    cout<<"ROLL NO :\n"<<s.roll_no;
    cout<<"AGE :\n"<<s.age;
    cout<<"MARKS 1 :\n"<<m.marks1;
    cout<<"MARKS 2 :\n"<<m.marks2;
    cout<<"MARKS 3 :\n"<<m.marks3;
    cout<<"GRADE :\n"<<m.grade;
}
int main()
{
    student s1;
    marks m1;
    cout<<"enter the student details:\n";
    cout<<"name :\n";
    cin>>s1.name;
    cout<<"roll no:\n";
    cin>>s1.roll_no;
    cout<<"age :\n";
    cin>>s1.age;
    cout<<"marks 1:\n";
    cin>>m1.marks1;
    cout<<"marks 2:\n";
    cin>>m1.marks2;
    cout<<"marks 3:\n";
    cin>>m1.marks3;
    cout<<"grade:\n";
    cin>>m1.grade;
    display(s1,m1);
    return 0;
}