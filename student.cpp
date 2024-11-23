#include "student.h"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

Student::Student(string name){
    studentName = name;
}

void Student::addGrade(double grade){
     grades.push_back(grade);
}

double Student::calculateAverage(){
    if(grades.empty()){
        return 0.0;
    } else {
        double sum = 0;
        for(int i = 0; i < grades.size(); i++){
            sum = sum + grades[i];
        }
        if (sum > 0) {
            double average = sum / grades.size();
            return average;
        }
        return 0.0;
    }
}

void Student::printDetails(){
    double average = calculateAverage();
    double roundOff = round(average * 100.0) / 100.0;
    cout << "Student Name: " << studentName << endl;
    cout << "Average Grade: " << roundOff << endl;
}