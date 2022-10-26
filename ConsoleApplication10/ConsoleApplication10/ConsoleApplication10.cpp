#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string c,c1,answer; 
    char C;
    getline(cin, c);//ввод кажого стринга в отдельной строке.
    getline(cin, c1);
    cin.get(C);
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == C) {
            answer += C;
            answer += c1;
        }
        else answer += c[i];
    }
    cout << answer;
}
