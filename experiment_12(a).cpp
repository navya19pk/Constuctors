//Navya Pawan Khajuria
//24070123151
//B3

#include <iostream>
using namespace std;

class student 
{
    int rollno;
    char name[50];
    double fee;

public:
    student() {
        cout << "Enter the Rollno.: ";
        cin >> rollno;
        cin.ignore(); 
        
        cout << "Enter the name: ";
        cin.getline(name, 50); 

        cout << "Enter the Fee: ";
        cin >> fee;   
    }

    void display() {
        cout << endl << rollno << "\t" << name << "\t" << fee;
    }
};

int main() 
{
    student s;      
    s.display();    
    return 0;
}

//Output:
//Enter the Rollno.: 151
//Enter the name: Navya Pawan Khajuria
//Enter the Fee: 3,00,000

//151	Navya Pawan Khajuria	3
