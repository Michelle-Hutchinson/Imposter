// Author Michelle Hutchinson
#include <iostream>
using namespace std;

class Average{

public:
int averageScore;

};

class Score: public Average{
public:
void test(){
cout << "Input your average score: ";
cin >> averageScore;

if (averageScore > 100){
 cout << "Invalid Data. Please enter a score within 100" << endl;

}

else if (averageScore == 100){
 cout << "You have passed this class." << endl;
}

else if(averageScore >= 95){
    cout << "Your Score is A+" << endl;
}

else if(averageScore == 90){
    cout << "Your Score is A" << endl;
}

else if (averageScore >= 85){
    cout << "Your score is B+" << endl;
}

else if (averageScore == 70){
    cout << "Your score is B" << endl;
}

else if (averageScore >= 65){
    cout << "Satisfactory" << endl;
}

else {
    cout << "You failed" << endl;
}

}
};

int main(){

Score obj;
obj.test();



return 0;

}