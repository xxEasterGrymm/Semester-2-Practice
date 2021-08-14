#include <iostream>

using namespace std;

class account {
    public:
    string name;
    int acc_num, acc_type, balance, amount;
    
    void getData() {
        cout << "Enter the following details\nCustomer Name: ";
        cin >> name;
        cout << "Account number :";
        cin >> acc_num;
        cout << "\nAccount type\n1. Saving Account\n2.Current Account\n\nEnter your choice: ";
        cin >> acc_type;
        cout << "\nAccount balance:";
        cin >> balance;
    }

    void display() {
        cout << "\nYour Account Balance: " << balance;
    }

    void withdraw() {
        cout << "\nEnter the amount you want to withdraw: ";
        cin >> amount;
        if(amount > balance) cout << "\nInsuficient balance";
        else balance = balance - amount;
        display();
    }
};

class cur_acct : public account {
    public:
    void panelty() {
        if(balance < 200 && acc_type == 2) {
          balance = balance - 20;
          display();
        }
    }
};

class sav_acct : public account {
    public:
    void interest() {
        int t;
        cout << "\nEnter time interval in year: ";
        cin >> t;
        balance = balance * (1 + 2 * t);
        display();
    }
};

int main(void) {
    account ac;
    ac.getData();
    ac.display();
    ac.withdraw();
    
    return 0;
}