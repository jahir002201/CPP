#include <bits/stdc++.h>
using namespace std;

class A{
    public:
      A(){
        cout << "Constructor in use" << endl;
      }
      ~A(){
        cout << "Destructor in use" << endl;
      }
};

int main(){
    A a;
    A b;

    return 0;
}