#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <string>
using namespace std;
class Person{
 protected:
  std::string name;
  int age;
 public:
  virtual void putdata(){};
  virtual void getdata(){};
};
class Professor:public Person{
 private:
  int publications;
  int cur_id{0};
 public:
  static int id;

  Professor(){
    id++;
    cur_id = id;
  }
  void getdata() override{
    std :: string prof_name;
    int prof_age;
    int prof_publications;
    std:: cin >> prof_name >> prof_age >> prof_publications;
    publications = prof_publications;
    Person :: name = prof_name;
    Person :: age = prof_age;
  };
  void putdata() override {
    std::cout << Person :: name << " " << Person :: age << " " << publications << " " << cur_id << std :: endl;
  };
};
int Professor :: id = 0;

class Student:public Person {
 private:
  int marks[6];
  int cur_id{0};
 public:
  static int id;

  Student(){
    id++;
    cur_id = id;
  }
  void getdata() override {
    std::string student_name;
    int student_age;
    int mark;
    std::cin >> student_name >> student_age;
    Person :: name = student_name;
    Person :: age = student_age;
    for (int i = 0; i < 6; i++) {
      std::cin >> mark;
      marks[i] = mark;
    }
  }
  void putdata() override {
    int sum_marks {0};
    for (auto mark: marks){
      sum_marks+=mark;
    }
    std::cout << Person :: name << " " << Person :: age << " " << sum_marks << " " << cur_id << endl;
  };
};

int Student :: id = 0;

int main(){

  int n, val;
  cin>>n; //The number of objects that is going to be created.
  Person *per[n];

  for(int i = 0;i < n;i++){

    cin>>val;
    if(val == 1){
      // If val is 1 current object is of type Professor
      per[i] = new Professor;

    }
    else per[i] = new Student; // Else the current object is of type Student

    per[i]->getdata(); // Get the data from the user.

  }

  for(int i=0;i<n;i++)
    per[i]->putdata(); // Print the required output for each object.

  return 0;

}
