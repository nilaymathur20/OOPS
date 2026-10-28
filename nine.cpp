#include <iostream>
using namespace std;

class student{
    private: 
        string name;
        int marks;
    public:
        void input(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    student *s = new student[n];
    for(int i=0; i<n; i++){
        cout << "Enter details for student " << i+1 << ":" << endl;
        s[i].input();
    }

    cout << "\nStudent Details:" << endl;
    for(int i=0; i<n; i++){
        cout << "Student " << i+1 << ":" << endl;
        s[i].display();
    }
    delete[] s;
    return 0;
}