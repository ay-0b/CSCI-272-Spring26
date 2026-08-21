#include <iostream>
#include <list>
using namespace std;

class Football{
public:
    string Name;
    string NickName;
    int GoalNumber;
    list<string> MajorTrophiesWon;

    Football(string name, string nickName){
        Name = name;
        NickName = nickName;
        GoalNumber = 0;
    }

    void GetInfo(){
        cout << "Name: " << Name << endl;
        cout << "Nickname: " << NickName << endl;
        cout << "Goals Scored: " << GoalNumber << endl;
        cout << "Major Trophies Won: " << endl;
        for (string Trophies: MajorTrophiesWon){
        cout << Trophies << endl;
        }
    }
};

int main(){
    Football footy("Messi", "Goat");
    footy.MajorTrophiesWon.push_back("World Cup");
    footy.MajorTrophiesWon.push_back("Copa America");
    footy.MajorTrophiesWon.push_back("Champions League");
    Football footy2("Ronaldo", "Fake Goat");

   footy.GetInfo();
   footy2.GetInfo();

}