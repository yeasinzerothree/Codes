#include <iostream>

using namespace std;

string reverse(string s);
int main() {
    string s;

    while (getline(cin,s)) {

        if(s == "DONE")
            break;

        string original, reversed;

        for (int i = 0; i < s.size(); ++i) {
            if(isalpha(s[i]))
                original +=  tolower(s[i]);
        }

        reversed = reverse(original);

       if(original == reversed)
          cout << "You won't be eaten!" << endl;
       else
         cout << "Uh oh.." << endl;
    }
}

string reverse(string s) {
    string t;

    for(int i = s.size() - 1; i >= 0; i--)
        t += s[i];
    return t;
}