#include <iostream>
using namespace std;

class student{
    private :
        string name;
        int age;

    public :
        student(){
            name = "unknown";
            age = 0;
            cout<<"default constructor"<<endl;
        }
        student(string n, int a){
            name = n;
            age = a;
            cout<<"parameterized constructor"<<endl;
        }
        student(const student &s){
            name = s.name;
            age = s.age;
            cout<<"copy constructor"<<endl;
        }
        void display(){
            cout<<"NAME : "<<name<<endl;
            cout<<"AGE : "<<age<<endl;
        }
        ~student(){
            cout<<"destructor called for"<<name<<endl;
        }
};

int main(){
    student s1;
    s1.display();
    
    cout<<"\n";

    student s2("Rahul", 20);
    s2.display();

    cout<<"\n";

    student s3(s2);
    s3.display();
}

/*default constructor
NAME : unknown
AGE : 0

parameterized constructor
NAME : Rahul
AGE : 20

copy constructor
NAME : Rahul
AGE : 20
destructor called forRahul
destructor called forRahul
destructor called forunknown */