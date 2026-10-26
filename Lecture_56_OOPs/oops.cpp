#include <iostream>
#include <string>
using namespace std;

/*
OOPs in C++ is a programming paradigm that uses
 objects and classes to organize code. It allows for
encapsulation, inheritance, and polymorphism,
making it easier to manage and maintain complex 
software systems. */

//Class & Object

//Objects are entities in the real world
//Class is like a blueprint of these entities
// Method is nothing but a function written inside a class

//Access Specifiers/Modifiers
/*
//bydefault everything is private in c++ like attributes
and methods etc.
private --> data & methods accessible inside class

public --> data & methods accessible to everyone

protected --> data & methods accessible inside class &
to its derived class
*/

// //Encapsulation
// class Account{
// private:
//     double balance;
//     string password; // data hiding

// public:
//     string accountId;
//     string username;
// };


class Teacher {
private:
    double salary;

public:
//non - parameterized 
    Teacher(){ //Constructor
       cout << "Hi, I am Constructor!" << endl;
       dept = "Computer Science";
    }

    //parameterized
    Teacher(string n, string d, string s, double sal){
         name = n;
         dept = d;
         subject = s;
         salary = sal;
    }


    //properties/ attributes
    string name;
    string dept;
    string subject;

   //methods/member functions 
   void changeDept(string newDept){
    dept = newDept;
   }

//    //setter
//    void setSalary(double s){
//     salary = s;
//    }

//    //getter
//    double getSalary(){
//     return salary;
//    }


   void getInfo(){
    cout << "name : " << name << endl;
    cout << "Dept : " << dept << endl;
    cout << "Subject : " << subject << endl;
   }

};




int main(){
        // Teacher t1; //constructor call
        // Teacher t2;
        // Teacher t3;
        // Teacher t4;
        // t1.name = "Shivanshu Gautam";
        //t1.dept = "CSA"; // checking for constructor initialization 
        // t1.subject = "DSA";
        // t1.setSalary(40000);
        // cout << t1.name << endl;
        // cout << t1.getSalary() << endl;
        // cout << t1.dept << endl;

        Teacher t1("Shradha", "CSA", "DSA", 25000);
        t1.getInfo();

    return 0;
}