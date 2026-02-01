#include <iostream>
using namespace std;

int main()
{
    int salary;//don't know for sure whether to use float or not
    cout << "Welcome to Mario's Federal Tax Calculator" <<endl;
    cout << "Enter your pay salary in a year" <<endl;
    cin >> salary;
    
    int tax;
    if (salary < 11000){
        tax = salary * 0.10;
    }
    else if (salary <= 44725){
        tax = 1100 + (0.12 * (salary - 11000));
    }
    else if (salary <= 95375){
        tax = 5147 + (0.22 * (salary - 44725));
    }
    else if (salary <= 182100){
        tax = 16290 + (0.24 * (salary - 95375));
    }
    else if (salary <= 231250){
        tax = 37104 + (0.32 * (salary - 182100)); 
    }
    else{//had some trouble over here I was thinking about adding another else if
        cout << "Contact our tax experts" <<endl;
    }

    cout << "Tax you owe is " << tax <<endl;//tried to keep it clean and presentable
    return 0;
}