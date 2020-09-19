#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    std::cin >> n;
    vector <int> vec;
    int input;
    for(int i=0;i<n;i++){
        std::cin >> input;
        vec.push_back(input);
    }
    int x;
    std::cin >> x;
    vector <int> vec2 = vec;
    int start;
    int end;
    std::cin >> start >> end;
    vec2.erase(vec2.begin()+x-1);
//    for (int i = 0; i <vec2.size();i++){
//        std::cout<< vec2[i]<< " ";
//    }
//    std::cout << std:: endl;
    vec2.erase(vec2.begin() + start -1,vec2.begin()+end - 1);
    std::cout << vec2.size() << std::endl;
    for (int i = 0; i <vec2.size();i++){
        std::cout<< vec2[i]<< " ";
    }
    return 0;
}
