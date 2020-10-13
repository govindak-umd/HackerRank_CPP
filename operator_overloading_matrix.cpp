//
// Created by govin on 12-10-2020.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix {
 public:
  vector<vector<int>> a;
};
Matrix operator + (Matrix &obj,Matrix &obj2) {
  Matrix obj3;
  int rows_1 = obj.a.size();
  int columns1 = obj.a[0].size();
  for (int i =0 ; i<rows_1;i ++){
    vector<int> sum;
    for (int j = 0;j < columns1;  j++){
      sum.push_back(obj.a[i][j]+obj2.a[i][j]);
    }
    obj3.a.push_back(sum);
  }
  return obj3;
}
int main () {
  int cases,k;
  cin >> cases;
  for(k=0;k<cases;k++) {
    Matrix x;
    Matrix y;
    Matrix result;
    int n,m,i,j;
    cin >> n >> m;
    for(i=0;i<n;i++) {
      vector<int> b;
      int num;
      for(j=0;j<m;j++) {
        cin >> num;
        b.push_back(num);
      }
      x.a.push_back(b);
    }
    for(i=0;i<n;i++) {
      vector<int> b;
      int num;
      for(j=0;j<m;j++) {
        cin >> num;
        b.push_back(num);
      }
      y.a.push_back(b);
    }
    result = x+y;
    for(i=0;i<n;i++) {
      for(j=0;j<m;j++) {
        cout << result.a[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
