#include <iostream>
#include <vector>
using namespace std;

double getAverage(const vector<int>& studentid){
    double sum = 0;
    for (int i = 0; i < studentid.size(); ++i){ // loop needed that goes through the vector
        sum += studentid[i];
    }
    return sum/studentid.size(); // basically the amount of elements
}

int getHighest(const vector<int>& studentid){ //had trouble here so used ai to help me understand
    int highest_id = studentid[0]; // You need this in order to compare the value to smth
    for (int i = 0; i < studentid.size(); ++i){
        if (studentid[i] > highest_id){ // this gave me some trouble but understand that it basically that shows if the current id is bigger than the highest
            highest_id = studentid[i]; // apparently then this updates the highest_id to the bigger number
        }
    }
    return highest_id;
}

int main(){
    vector <int> studentid; //defining the vector
    studentid.push_back(35); //just putting values into the vector
    studentid.push_back(47);
    studentid.push_back(67);
    studentid.push_back(41);
    studentid.push_back(21);
    studentid.push_back(12);
    studentid.push_back(10);
    studentid.push_back(69);
    studentid.push_back(34);
    studentid.push_back(99);

    cout << "average: " << getAverage(studentid) << endl; //simple cout to give us the average
    cout << "highest student ID: " << getHighest(studentid) <<endl; //simple cout to give us the ghiest student id
}
