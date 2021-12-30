#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, language;
    int i = 1;
    while (getline(cin, a) && a != "#") {
        if (a == "HELLO")
            language = "ENGLISH";
        else if (a == "HOLA")
            language = "SPANISH";
        else if (a == "HALLO")
            language = "GERMAN";
        else if (a == "BONJOUR")
            language = "FRENCH";
        else if (a == "CIAO")
            language = "ITALIAN";
        else if (a == "ZDRAVSTVUJTE")
            language = "RUSSIAN";
        else
            language = "UNKNOWN";
        cout << "Case " << i << ": " << language << endl;
        i++;
    }
}
