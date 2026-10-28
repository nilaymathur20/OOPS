#include <iostream>
using namespace std;

class fruit{
    public:
     string n;
     string c; 
     string s;

     void display(){
        cout << "Name: " << n << endl;
        cout << "Color: " << c << endl;
        cout << "Shape: " << s << endl;
     }

     void input(){
        cout << "Enter fruit name: ";
        cin >> n;
        cout << "Enter fruit color: ";
        cin >> c;
        cout << "Enter fruit shape: ";
        cin >> s;
     }
};

int main(){
    fruit f1;
    f1.input();

    fruit f2;
    f2.input();

    cout << "Fruit 1 details:" << endl;
    f1.display();

    cout << "\nFruit 2 details:" << endl;
    f2.display();

    return 0;
}