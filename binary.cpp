#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student
{
    char name[30];
    int roll;

public:
    Student()
    {
        strcpy(name, "No name");
        roll = 0;
    }
    Student(char n[], int a)
    {
        strcpy(name, n);
        roll = a;
    }


    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }

    void insertToFile(string f)
    {
        ofstream out(f, ios::binary | ios::app);
        out.write((char *)(this), sizeof(*this));
        out.close();
    }
    void pullFromFile(string);
};

void Student::pullFromFile(string f){
    ifstream inp(f, ios::binary);

    inp.read( (char *) (this), sizeof(*this));
    while (!inp.eof()){
        this->display();
        inp.read( (char *) (this), sizeof(*this));
    }

    inp.close();

}

int main()
{
    
    string f = "student.dat";
    Student *std = new Student[2];
    char name[30];
    int roll;
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "Enter name" << endl;
    //     cin.ignore();
    //     cin.getline(name , 40);
    //     cout << "Enter roll" << endl;
    //     cin >> roll;
    //     std[i] = Student(name , roll);
    //     (std+i)->display();
    //     (std+i)->insertToFile(f);
    // }
    
    Student s;
    s.pullFromFile(f);
    return 0;
}