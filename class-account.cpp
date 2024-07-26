#include <iostream>
#include <cstring>
using namespace std;

class Account{
        char AccNo[10];
        char AccType[15];
        double balance;
    public:
        Account(char *no, char *type, double bl){
            strcpy(AccNo, no);
            strcpy(AccType, type);
            balance = bl;
        }

        void ShowInfo(){
            cout << "Account Number: " << AccNo << endl;
            cout << "Account Type: " << AccType << endl;
            cout << "Current Balance: " << balance << endl;
        }
};

int main(){
    Account ram("SCB 0043", "Current", 339874.98);
    Account sam("SCB 2332", "Fixed", 339874.98);
    ram.ShowInfo();
    sam.ShowInfo();

    return 0;
}