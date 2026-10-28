#include <iostream>
using namespace std;

class area{
    public:
     float length;
     float width;
     float radius;
     float result;

     void input(){
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter radius: ";
        cin >> radius;
     }

     void rectanagle(){
        result = length * width;
     }

     void square(){
        result = length * length;
     }

     void circle(){
        result = 3.14 * radius * radius;
     }

     void display(){
        cout << "Area of rectangle: " << result << endl;
        cout << "Area of square: " << result << endl;
        cout << "Area of circle: " << result << endl;
     }
};

int main(){
    area a;
    a.input();
    a.rectanagle();
    a.display();
    a.square();
    a.display();
    a.circle();
    a.display();
    return 0;
}