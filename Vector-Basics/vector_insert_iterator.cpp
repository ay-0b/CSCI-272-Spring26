#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4};
    v1.insert(v1.end(), 5);
    for (auto itr = v1.begin(); itr != v1.end(); ++itr){
        cout << *itr <<endl;
    }


    return 0;
}
