/*
Name: Ayoub Rannan
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 03/05/2026
*/

#include <iostream>
using namespace std;

class Person {
public:
    string name = "Maksi";
    int age = 29;
    char gender = 'M';

    void introduce() {
        cout << "Hello, I'm " << name << ". I'm " << age << " years old.";

        if (gender == 'M')
            cout << " I'm a male." << endl;
        else if (gender == 'F')
            cout << " I'm a female." << endl;
        else
            cout << " Gender unspecified." << endl;
    }
};

int main() {
    Person person1;
    person1.introduce();

    return 0;
}

/*
Reflection:
1. What I understood:
Was able to understand how the class stores the personal attributes.

2. Difficulties:
I was putting string next to age which was a really bad mistake.

3. Research:
Online, youtube videos, and the slides.

4. AI Usage:
This was also pretty straightforward to understand so basically no AI usage.

5. What I learned:
I was able to get a further grasp on how the objects were key in representing things that we tie to the classand how they were displayed.
*/
