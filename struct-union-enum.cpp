#include <iostream>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};

union day_cost{
    int eid_day;
    int eid_cost;
};

enum day{
    Fri,
    Sat,
    Sun,
    Mon,
    Tue,
    wed,
    Thu
};

int main(){
    cout << "struct, union and enum." << endl;    
    return 0;
}