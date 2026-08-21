/*
Name: Ayoub Rannan
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Car Example
Date: 03/05/2026
*/

#include <iostream>
using namespace std;

class Car {
private:
    string brand = "Volkswagen";
    string model = "Polo";
    int year = 2012;

public:
    void startEngine() {
        cout << "Engine started" << endl;
    }

    void accelerate() {
        cout << "Car accelerating" << endl;
    }
};

int main() {
    Car car1;

    car1.startEngine();
    car1.accelerate();

    return 0;
}

/*
Reflection:
1. What I understood:
This basically helped to grasp how the class was something that stores data and then there some things that work hto help us stores the stuff that is being portrayed such as the brand, the model, and the year. It basically acts like a glossary.

2. Difficulties:
I didn't understand why I needed to use the private since for this specific example it doesn't show when you compile. 

3. Research:
Just the regular looked online and on youtube as well as the slides.

4. AI Usage:
This one was pretty straighforward and we did loads of examples like this in class so no usage.

5. What I learned:
This was like an introduction, learned how the classes were able to group the stuff together and then how we used objects to portray the connect with the stuff from the class.
