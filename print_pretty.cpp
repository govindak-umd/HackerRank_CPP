#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <cmath>
using namespace std;

void dec2Hexadecimal(double A) {
  int rem;
  int div;
  string hexadecimal_value = " ";
  div = int(A) / 16;
  while (div >0) {
    rem = int(A) % 16;
      string str = to_string(rem);
      switch(rem){
        case 1:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 2:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 3:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 4:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 5:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 6:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 7:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 8:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 9:
          hexadecimal_value = str + hexadecimal_value;
          break;
        case 10:
          hexadecimal_value = 'A' + hexadecimal_value;
          break;
        case 11:
          hexadecimal_value = 'B' + hexadecimal_value;
          break;
        case 12:
          hexadecimal_value = 'C' + hexadecimal_value;
          break;
        case 13:
          hexadecimal_value = 'D' + hexadecimal_value;
          break;
        case 14:
          hexadecimal_value = 'E' + hexadecimal_value;
          break;
        case 15:
          hexadecimal_value = 'F' + hexadecimal_value;
          break;
    }
    div = int(A) / 16;
    A = int(A) / 16;
  }
  cout <<"0x" << hexadecimal_value << endl;
}

void fifteenSpace(double B){
  B = std::ceil(B*100.0)/100.0;
  cout << B << endl;
  string str =  to_string(B);
  cout << "str : " << str << "has a length of  " << str.length();
}
int main() {
  int T;
  cin >> T;
  cout << setiosflags(ios::uppercase);
  cout << setw(0xf) << internal;
  while (T--) {
//    double A;
//    cin >> A;
//    dec2Hexadecimal(A);
    double B;
    cin >> B;
    fifteenSpace(B);
//    double C;
//    cin >> C;
  }

  return 0;
}