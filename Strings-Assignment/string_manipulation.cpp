// Ayoub Rannan
// CSCI 272
// Assignment 3 - Strings
// 2/17/2026

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string fullname;

    cout << "Enter your full name: ";
    getline(cin, fullname);

    cout << "Full name: " << fullname << endl;
    cout << "Total characters: " << fullname.length() << endl;
    cout << "First character: " << fullname[0] << endl;
    cout << "Last character: " << fullname[fullname.length()-1] << endl;

    string modified = "Mr./Ms. " + fullname + " Jr.";
    cout << "Modified name: " << modified << endl;

    string sentence;
    string word;

    cout << "\nEnter a sentence: ";
    getline(cin, sentence);

    cout << "Enter a word to search: ";
    getline(cin, word);

    size_t pos = sentence.find(word);

    if(pos != string::npos){
        cout << "Word found at index: " << pos << endl;
        string foundPart = sentence.substr(pos, word.length());
        cout << "Found word: " << foundPart << endl;
    }
    else{
        cout << "Word not found" << endl;
    }

    string w1, w2;

    cout << "\nEnter first word: ";
    getline(cin, w1);

    cout << "Enter second word: ";
    getline(cin, w2);

    for(int i = 0; i < w1.length(); i++){
        w1[i] = tolower(w1[i]);
    }
    for(int i = 0; i < w2.length(); i++){
        w2[i] = tolower(w2[i]);
    }

    if(w1 == w2){
        cout << "Strings are equal (case-insensitive)" << endl;
    }
    else{
        cout << "Strings are NOT equal (case-insensitive)" << endl;
    }

    string number;

    cout << "\nEnter a number: ";
    getline(cin, number);

    int intVersion = stoi(number);
    double doubleVersion = stod(number);

    cout << "Integer *2: " << intVersion * 2 << endl;
    cout << "Double *2: " << doubleVersion * 2 << endl;

    return 0;
}
