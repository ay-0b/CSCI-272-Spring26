#include <iostream>
#include <vector>
using namespace std;

int main(){ //didnt really know what i needed to do for the vector growth experiment so I used ai to give me an idea of a response for this
    vector <int> experiment;
    for (int i = 1; i <= 10; i++){
        experiment.push_back(i);

        cout << "size: " << experiment.size() <<endl;
        cout << "capacity: " << experiment.capacity() <<endl;
    }
}
// overall pretty simple it just shows us the relationship between size and capacity, how the size and capacity arent always the same, the capacity doubles once the size increases to a certain point.