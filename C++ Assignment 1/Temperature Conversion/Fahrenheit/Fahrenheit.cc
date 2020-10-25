// Author Michelle Hutchinson 
#include <iostream>
using namespace std; 

class Fahrenheit{

protected:
int Fahrenheit;

public:
int Celsius;
};

class Temp: public Fahrenheit{
public:
void calc(){
cout << "Input fahrenheit temperature: ";
cin >> Celsius;

Fahrenheit = (Celsius * 9/5) + 32;

cout << Celsius << " Celsius is equal to " << Fahrenheit << " Fahrenheit ";

}

};

int main(){

    Temp obj;
    obj.calc();

    return 0;
}

