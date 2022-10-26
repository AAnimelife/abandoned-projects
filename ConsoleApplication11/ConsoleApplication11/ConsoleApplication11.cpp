#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string text;
    string lastword = "",word="",answer="";
    getline(cin, text);
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ' && i != text.size() - 1)lastword = "";
        else lastword += text[i];
    }
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            if (word != lastword) {  
                string newword;
                for (int j = 0; j < word.size(); j++) {
                    int t = 0;
                    for (int k = 0; k < newword.size(); k++) {
                        if (newword[k] == word[j])t++;
                    }
                    if (t == 0)newword += word[j];
                }
                if (newword.size() % 2 == 1) {
                    for (int h = newword.size() / 2; h < newword.size() - 1; h++)newword[h] = newword[h + 1];
                    newword.pop_back();
                }
                answer += newword;
                answer += " ";
            }
            word = "";
        }
        else word += text[i];
    }
    answer.pop_back();
    cout << answer;
}
/*
#include <iostream>
using namespace std;
int main()
{
    char buffer[500];
    char* ptr;
    char temp;
    unsigned int i, j;
    int count = 0; // счётчик совпадений

    cout << "Inter a string " << endl;
    cin.getline(buffer, 500);  // считываем строку

    ptr = strtok(buffer," ,.-"); // разделяет на слова

    while(ptr)
    {
        for ( i = 0; i < strlen(ptr); i++)
        {
            temp = ptr[i]; // временному присваиваем символ

            for ( j = 0; j < i; j++) // сравниваем с предыдущеми символами
                 if(temp == ptr[j])
                    count++; // в случае совпадения увеличиваем счётчик

            if(count == 0)
                cout << temp;

            count = 0; // сбрасываем на 0
        }
        cout << " ";
        ptr = strtok(NULL, " ,.-");
    }
}*/
