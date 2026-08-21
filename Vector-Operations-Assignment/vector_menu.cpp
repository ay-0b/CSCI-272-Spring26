#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> menu; // the <string> is used when it comes to words
    menu.push_back("Fries");
    menu.push_back("Hot Dogs");
    menu.push_back("Fried Chicken");
    menu.push_back("Pizza");
    menu.push_back("Tacos");
    menu.insert(menu.begin()+1, "Fruits"); //+1 is needed in order to get to the second position
    menu.erase(menu.begin()+3); //+3 needed to get to the fourth position
    for (int i= 0; i< menu.size(); ++i){ //the loop needed in order to portray the meny
        cout << menu[i] << endl;
    }
}