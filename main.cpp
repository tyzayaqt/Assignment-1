#include "student.h"

int main(){
  Student student1("Tyzaya August");
  student1.addGrade(70.0);
  student1.addGrade(90.0);
  student1.addGrade(90);
  student1.printDetails();
    return 0;
}