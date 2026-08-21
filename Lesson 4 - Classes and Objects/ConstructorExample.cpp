/*
Name: Ayoub Rannan
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 03/05/2026
*/

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void display() {
        cout << brand << " " << model << " " << year << endl;
    }
};

int main() {
    Car car1("Tesla", "Model X", 2022);
    car1.display();

    return 0;
}

/*
Reflection:
1. What I understood:
The constructors are here to make our lives easier and help us to not rewrite code.

2. Difficulties:
Honestly, didn't have much trouble on this one the constructors was the topic that I grasped the most from.

3. Research:
Same as the others I am using youtube videos, online, and the slides.

4. AI Usage:
Used AI for the void portion in this example didn't notice that I had to put " " so that messed me up a bit.

5. What I learned:
Similar to what I understood the main use of constructors is to make the initialization easier and also to keep the code looking more presentable.
*/
