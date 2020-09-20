#include <iostream>

using namespace std;
class Rectangle{
public:
    int height;
    int width;
    void display(){
        cout << width << " " << height << endl;
    }
};

class RectangleArea:public Rectangle{
public:
    void setHeight(int h){
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    void read_input(){
        int width;
        int height;
        cin>>width >> height;
        setHeight(height);
        setWidth(width);
    }
    int display(){
        int h =  getHeight();
        int w = getWidth();
        cout << h*w << endl;
        return h*w;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}