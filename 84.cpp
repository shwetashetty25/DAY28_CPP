//3.Write a c++ program to define class student with the following: Private data members: name and age. A parameterized constructor to initialize the name and age. A copy constructor to create a copy of an existing student object. A member function display() to print the details of the students. In the main() function, create an object of the student class using the parameterized constructor and another object using the copy constructor. Display the details of both students.
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }
    string display()
    {
        return "Name: " + name + ", Age: " + to_string(age);
    }
};
int main()
{
    Student student1("Shweta", 18);
    Student student2 = student1;
    cout << student1.display() << endl;
    cout << student2.display() << endl;

    return 0;
}