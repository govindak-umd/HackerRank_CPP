#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    int i;
    std::cin >> num;
    vector<int>v;
    for (i = 0; i<num; i++){
        int input;
        std::cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for (int i =0;i<v.size();i++){
        std::cout << v[i] << " ";
    }
    return 0;
}
