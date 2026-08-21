#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    double pi = 3.14159265359; //3.14159265359
    int age = 25;

    string name = "Alice";
    //setw
    cout << setw(10) << setfill('-') << "Name:" //setfill only works previously
         <<setw(15) << left << name
         << right << "Age: " <<setw(5) << age << endl;

    cout << "Pi with precision 2: " << fixed << setprecision(2) << pi << endl; //when putting fixed it counts the numbers after the decimal point*
}
