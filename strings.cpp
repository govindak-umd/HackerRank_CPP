#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    std::cout<<a.size()<<" "<<b.size()<<endl;
    std::cout<<a+b<<endl;
    std::cout<<b[0]<<a.substr(1,-1)<<" "<<a[0]<<b.substr(1,-1)<<endl;
}