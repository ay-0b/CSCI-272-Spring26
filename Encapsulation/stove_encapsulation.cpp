#include <iostream>
using namespace std;

class Stove{
private:
    int temperature = 0;
public:
Stove (int temperature){
    setTemperature(temperature);
}

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this -> temperature=0;
        }
        else if (temperature >= 10){
            this -> temperature = 10;
        }
        else{
            this -> temperature = temperature;
        }
        this ->temperature = temperature;
    }
};

int main(){
    Stove stove(3);
    //stove.setTemperature(4);
    cout << "The temperature is: " << stove.getTemperature();
}
