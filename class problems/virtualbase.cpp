#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    string age;
public:
    person(string n, string a) : name(n), age(a) {
        cout << "Parent is called" << endl;
    }
    void person_details() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class faculty : virtual public person {
protected:
    string employee;
public:
    faculty(string n, string a, string e) : person(n, a), employee(e) {
        cout << "Child 1 (Faculty) is called" << endl;
    }
    void faculty_details() {
        cout << "Employee ID: " << employee << endl;
    }
};

class student :virtual person {
protected:
    string studentid;
    string course;
public:
    student(string n, string a, string eid, string c) : person(n, a), studentid(eid), course(c) {
        cout << "Child 2 (Student) is called" << endl;
    }
    void student_details() {
        cout << "Student ID: " << studentid << endl;
        cout << "Course: " << course << endl;
    }
};

class ta : public faculty, public student {
protected:
    string course_assist;
public:
    ta(string n, string a, string e, string eid, string c, string ca)
        : person(n, a), faculty(n, a, e), student(n, a, eid, c), course_assist(ca) {
        cout << "Derived class (TA) is called" << endl;
    }
    void ta_details() {
        cout << "Course Assist: " << course_assist << endl;
        person_details();
        faculty_details();
        student_details();
    }
};

int main() {
    ta t1("Mahitha", "17", "ECE", "112416032", "ECE2", "OOPS");
    t1.ta_details();
    return 0;
}
