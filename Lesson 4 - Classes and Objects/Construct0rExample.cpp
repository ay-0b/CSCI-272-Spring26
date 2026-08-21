/*
Name: Ayoub Rannan
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: onstructor Example
Date: 03/05/2026
*/

#include <iostream>
using namespace std;

class Car {
private:
    string brand{"Volkswagen"};
    string model="Polo";
    int year {2012};

public:
    Car(){}

    Car(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }

    Car(const Car & other){
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    void startEngine(){
        cout << "Engine started" << endl;
    }
};

int main(){

    Car car1;
    Car car2("Tesla","X", 2022);
    Car car3(car2);

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();

    return 0;
}

/* 
Reflection:
1. What I understood:
Here I understood how the constructor is reallly helpful to organize stuff and how it ties in when you try to define the object.

2. Difficulties:
Didn't understand how to define the stuff in int main pretty rookie mistake.

3. Research:
Same as others. used the slides, youtube videos, and some websites.

4. AI Usage: 
Needed AI to help me understood parts of this code specifically from void onwards, it helped to guide me.

5. What I learned:
Learned the importance of constructors and how they are needed when it comes to initializing objects.
*/
