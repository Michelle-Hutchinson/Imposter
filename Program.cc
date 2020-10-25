#include <iostream>
using namespace std;
class Base{

public: 
int a = 8;

protected:
int b = 10;

private: 
int c = 20;

};

class Sus: public Base{
public: 
void func() {
   cout << "The value of a: " << a;
   cout << "\nThe value of b: " << b;
   cout << "Void is a function" ;



}

};

int main(){

  Sus obj;
  obj.func();
  return 0;


}