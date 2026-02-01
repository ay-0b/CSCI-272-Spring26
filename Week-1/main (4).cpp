/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    
    float number1;
    float number2;
    
    cout << "Enter the first number ";//this number should be 10
    cin >> number1;
    cout << "Enter the second number ";//this number should be 3
    cin >> number2;
    
  
    char select;
    cout << "Pick one of the mathematical operations" <<endl;
    cout << "a for Addition" <<endl;//did this in order to make it cleaner
    cout << "s for Subtractio" <<endl;
    cout << "m for Multiplication" <<endl;
    cout << "d for Division" <<endl;
    cout << "Enter a choice: " <<endl;
    cin >> select;
    
    float a; //bit messy to look at over here but does get the job done
    a = number1 + number2;
    float s;
    s = number1 - number2;
    float m;
    m = number1 * number2;
    float d;
    d = number1 / number2;
    if (select == 'a'){ 
        cout << a <<endl;
    }
    else if (select == 's'){
        cout << s <<endl;
    }
    else if (select == 'm'){
        cout << m <<endl;
    }
    else if (select == 'd'){
        cout << d <<endl;
    }
    
    
    
    return 0;
}