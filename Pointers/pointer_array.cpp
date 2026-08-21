#include <iostream>
using namespace std;

int main(){
    int *p[10];
    for (int i=0; i<10; ++i){
        *p[i] = i;
        cout << *p[i] << endl;
    }
    for (int i = 0; i < 10; ++i){
        p[i] = new int;
        *p[i] = i;
        cout << p[i] << endl;
    }

return 0;
}

