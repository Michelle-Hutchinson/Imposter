// Author Michelle Hutchinson 
#include <iostream>
using namespace std; 

class Celsius{

protected:
int Fahrenheit;

public:
int Celsius;
};

class Temp: public Celsius{
public:
void calc(){
cout << "Input fahrenheit temperature: ";
cin >> Fahrenheit;

Celsius = (Fahrenheit - 32) * 5/9;

cout << Fahrenheit << " Fahrenheit is equal to " << Celsius << " Celsius ";

}

};

int main(){

    Temp obj;
    obj.calc();

    return 0;
}

