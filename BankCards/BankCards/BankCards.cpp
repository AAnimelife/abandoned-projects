#include <iostream>
#include <fstream>
#include <string>
#include "Fanc1.h"
using namespace std;


int main() {
    long long datebase[100];
    int accounts = 0;
    
    load(accounts, datebase);
    string cmd;
    cin >> cmd;
    while (cmd != "exit") {
        long long account;
        cin >> account;
        if (cmd == "balance") {
            if (isNumberCorrect(account) && findAccount(account, datebase, accounts) != -1) {
                cout << getBalance(account) << endl;
            }
            else cout << "Incorrect number" << endl;
        }
        if (cmd == "add") {
            if (addAccount(account, datebase, accounts)) {
                cout << "Done!" << endl;
            }
            else {
                cout << "Incorrect number" << endl;
            }
        }
        if (cmd == "update") {
            int delta;
            cin >> delta;
            if (isNumberCorrect(account)) {
                balanceReplenishment(account, delta);
                cout << "Done!" << endl;
            }
            else {
                cout << "Incorrect number" << endl;
            }
        }
        cin >> cmd;
    }
    save(accounts, datebase);
    cout << "Bye!";
    return 0;
}