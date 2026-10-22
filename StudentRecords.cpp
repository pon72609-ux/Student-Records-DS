#include <iostream>
#include <string>
using namespace std;

struct Student {
int rollNo;
string name;
float marks;
};

int main() {
Student s;

cout << "STUDENT RECORDS" << endl;

cout << "Enter Roll Number: ";
cin >> s.rollNo;

cout << "Enter Student Name: ";
cin >> s.name;

cout << "Enter Marks: ";
cin >> s.marks;

cout << "\n--- Student Details ---" << endl;
cout << "Roll Number: " << s.rollNo << endl;
cout << "Name: " << s.name << endl;
cout << "Marks: " << s.marks << endl;

return 0;

}
