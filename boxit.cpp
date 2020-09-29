#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
 private:
  long length;
  long breadth;
  long height;
 public:
  Box();
  Box(long l, long b, long h);
  Box(const Box &object2);

  long getLength();
  long getHeight();
  long getBreadth();
  long long CalculateVolume();

  friend ostream & operator << (ostream &out, const Box &box_object);
  friend bool operator < (Box &box_object1, Box &box_object2);

};

ostream & operator << (ostream &out, const Box &box_object){
  out << box_object.length << " ";
  out << box_object.breadth<< " ";
  out << box_object.height<< " ";
  return out;
}

bool operator < (Box &box_object1, Box &box_object2){
  if (box_object1.length < box_object2.length){
    return true;
  }
  if ((box_object1.breadth < box_object2.breadth) && (box_object1.length == box_object2.length)){
    return true;
  }
  if  ((box_object1.height < box_object2.height) && (box_object1.breadth == box_object2.breadth) && (box_object1.length == box_object2.length)){
    return true;
  }
  else{
    return false;
  }
}
Box::Box(const Box &object2) {
  length = object2.length;
  breadth = object2.breadth;
  height = object2.height;
}
Box::Box() {
  length = 0;
  breadth = 0;
  height = 0;
}
Box::Box(long l, long b, long h) {
  length = l;
  breadth = b;
  height = h;
}
long Box::getLength(){
  long l = length;
  return l;
}
long Box::getHeight(){
  long h = height;
  return h;
}
long Box::getBreadth(){
  long b = breadth;
  return b;
}
long long Box::CalculateVolume(){
  long l = getLength();
  long h = getHeight();
  long  b = getBreadth();
  return (long long) l*b*h;
};
void check2() {
  int n;
  cin >> n;
  Box temp;
  for (int i = 0; i < n; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      cout << temp << endl;
    }
    if (type == 2) {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      temp = NewBox;
      cout << temp << endl;
    }
    if (type == 3) {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      if (NewBox < temp) {
        cout << "Lesser\n";
      } else {
        cout << "Greater\n";
      }
    }
    if (type == 4) {
      cout << temp.CalculateVolume() << endl;
    }
    if (type == 5) {
      Box NewBox(temp);
      cout << NewBox << endl;
    }

  }
}
int main() {
  check2();
}