#include <regex>
#include <string>
#include <iostream>
using namespace std;
int main(){
// Delimiters are spaces (\s) and/or commas
    regex re("[\\s,]+");
    string s = "'abcbbasfff'";
    sregex_token_iterator it(s.begin(), s.end(), re, -1);
    sregex_token_iterator reg_end;
    for (; it != reg_end; ++it) {
        cout << it->str() << endl;
    }
}
