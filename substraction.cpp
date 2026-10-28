#include <iostream>
using namespace std;

class substraction{
    public:
     float a;
     float b;
     float c;
     float result;

     void input(){
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
     }

     void calculate(float a,float b){
        result = a - b;
     }

     void calculate(float a,float b,float c){
        result = a - b - c;
     }     

     void calculate(int a,int b){
        result = a - b;
     }

     void display(){
        cout << "Result of subtraction: " << result << endl;
     }
};

int main(){
    substraction s;
    s.input();
    s.calculate(s.a, s.b, s.c);
    s.display();
    s.calculate(s.a, s.b);
    s.display();
    s.calculate(s.a, s.b);
    s.display();
    return 0;
}