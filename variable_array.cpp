#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display_element(vector<vector<int>> const &vec,int num,int idx){
    std::cout << vec[num][idx]<<" \n";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numrows;
    int numqueries;
//    cout<<"enter numrows | numqueries"<<endl;
    std::cin>>numrows>>numqueries;

    vector<vector <int>> all_arrays;
    for (int i =0;i<numrows;i++){
        int numelements;
//        cout<<"enter numelements"<<endl;
        std::cin>>numelements;
        std::vector <int> sub_array;
        int arr[numelements];
        for (int k = 0; k< numelements;k++){
            std::cin>>arr[k];
            sub_array.push_back(arr[k]);
        }
        all_arrays.push_back(sub_array);
    }
//    display(all_arrays);
    for (int q = 0; q<numqueries;q++){
        int vec_num;
        int idx;
//        cout<<"enter vec_num | idx"<<endl;
        std::cin>>vec_num>>idx;
        display_element(all_arrays,vec_num,idx);
    }
    return 0;
}
