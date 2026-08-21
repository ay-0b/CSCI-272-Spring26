#include <iostream>
#include <vector>
using namespace std;

int main(){
    // empty vector
    vector<int>numbers; // empty vector
    vector<int>sizeNumber(5); // with size
    vector<int>sizeValNum(5,0); //with size and default value
    vector<int>listVector={1,2,3,4,5}; // with a list

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);


    numbers.insert(numbers.begin() + 1, 15);
    numbers.at(2) = 99;
    numbers.erase(numbers.begin()+1); // better to use relative location when removing

    // cout << numbers[1] <<endl; // fast but no bounds check
    // cout << numbers.at(2)<<endl; //
    cout << numbers.front()<<endl;
    cout << numbers.back()<<endl;

    //for (int i=0; i<=numbers.size(); i++){
    //    cout << numbers[i] << " ";
    //}

    //for (size_t i=0; i<numbers.size();i++){ // size_t relates to the size of the vector itself
    //    cout<<numbers[i]<< " ";
    //}

    for (int value: numbers){
        cout << value << " ";
    }

    return 0;
}
