#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string name;
    int id;

    cout << "Enter the student name: ";
    cin >> name;

    ofstream file("student.txt");

    file << "Student Name: " << name << endl;

    file.close();


    return 0;
}
