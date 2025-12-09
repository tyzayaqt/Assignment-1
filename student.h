//Filename: 'student.h'
#include <string>
#include <vector>
using namespace std;


class Student{
    public:
    Student(string studentName); //A constructor that initializes the student's name.
    void addGrade(double grade); // A method to add a grade to the student's list of grades. (the grades are stored in a vector)
    double calculateAverage(); //A method that computes and returns the average of the student's grades.
    void printDetails(); //A method that prints the student's name and their average grade. (you need to use 'cout' for this method)
    
    private:
    string studentName;
    vector<double> grades;

};