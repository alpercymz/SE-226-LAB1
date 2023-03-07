#include <iostream>

using namespace std;

int main()
{
    // #Q1
    string name;
    
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" <<endl;
    cout << "Please enter your student ID: ";
    string id;
    cin>> id;
    cout << "Your student ID is " << id << "." <<endl;
    
    
    // #Q2

    int var1;
    int var2;
    
    cout << "Please enter var1: ";
    cin >> var1;
    
    cout << "Please enter var2: ";
    cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;
    
    
    // #Q3
    
    string St_name;
    double lab;
    double midterm;
    double final;
    
    cout << "Student name: ";
    cin >> St_name;

    cout << "Lab grade: ";
    cin >> lab;

    cout << "Midterm grade: ";
    cin >> midterm;
    
    cout << "Final grade: ";
    cin >> final;

    double last_score = (lab * 0.25) + (midterm * 0.35) + (final * 0.40);

    cout << "Student: " << St_name << endl;
    cout << "Lab Grade: " << lab << endl;
    cout << "Midterm Grade: " << midterm << endl;
    cout << "Final Grade: " << final << endl;
    cout << "Last Score: " << last_score << endl;
    
    
    // #Q4
    
    cout << "*\n**\n***\n**\n*";
    
    return 0;
}
