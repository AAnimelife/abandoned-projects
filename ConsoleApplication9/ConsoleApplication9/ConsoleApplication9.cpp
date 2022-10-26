#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    int w;
    double temp = 0;
    int clean, air = 0, cleant = 0, cleanc = 0, tempmore = 0, templess = 0, flag = 0;
    string code;
    for (int i = 0; i < 4; i++) {
        cin >> code;
        if (code == "SET") {
            cin >> code;
            if (code == "TEMP") cin >> temp;
            else if (code == "CLEANLINESS") cin >> clean;
        }
        else if (code == "GET") {
            cin >> code;
            if (code == "TEMP") {
                int newtemp;
                air++;
                cin >> newtemp;
                if (newtemp > temp) templess += newtemp - temp;
                else if (newtemp < temp) tempmore += temp - newtemp;
                else air--;
            }
            else if (code == "CLEANLINESS") {
                int newclean;
                cin >> newclean;
                cleant++;
                if (newclean < clean) cleanc += clean - newclean;
                else cleant--;
            }
        }
        else if (code == "STATISTIC") {
            cin >> code;

        }
        else if (code == "STATISTICS") {
            cin >> code;
            if (code == "AIR") cout << "Zolushka summary increase temperature for " << fixed << setprecision(1) << tempmore << " degrees today, summary decrease temperature for " << fixed << setprecision(1) << templess << " degrees today" << endl;
            else if (code == "HOME") cout << "Zolushka used cleaner " << cleant << " times, used air conditioning " << air << " times" << endl;
            else if (code == "CLEANER") cout << "Zolushka raised cleanliness today for " << cleanc << " points" << endl;
        }
        else if (flag == 0) {
            w = code[0];
            w -= 48;
            flag++;
            i -= (w / 3) * 2;
        }
        else {
            w = code[0];
            w -= 48;
            i -= w;
        }
    }
}