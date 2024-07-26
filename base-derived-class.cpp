#include <bits/stdc++.h>
using namespace std;

class Bass_class{
    public:
      virtual void show(){
        cout << "Apni karsha base" << endl;
      }
};

class Derived_class:public Bass_class{
    public:
       void show(){
        cout << "Apni karsha derived" << endl;
       }
};

int main(){
    Bass_class *b;
    Derived_class d;
    b = &d;
    b->show();

    return 0;
}