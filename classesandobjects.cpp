#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
private:
    int scores[ 5 ];
public:
    void input(){
        int i;
        int marks;
        for (i=0;i<5;i++){
            std::cin>>marks;
            scores[i] = marks;
        }

    }

    int calculateTotalScore(){
        int sum;
        sum = 0;
        for(int i=0;i<5;i++){
            cout << "sum : "<< sum <<" scores[i] : "<< scores[i]<<endl;
            sum+=scores[i];
        }
        return sum;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }


    return 0;
}
