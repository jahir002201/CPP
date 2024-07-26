#include <iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

float add(float x, float y){
    return x + y;
}

double add(double x, double y){
    return x + y;
}

int main(){
    cout << "Integer x + y = " << add(5, 5) << endl;
    cout << "Float x + y = " << add(5.754, 5.223) << endl;
    cout << "Double x + y = " << add(90.39349872, 5.9398749) << endl;

    return 0;
}