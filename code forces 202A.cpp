#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;

    char max_char = 'a';
    for (char c : s) {
        if (c > max_char) {
            max_char = c;
        }
    }
    string result;
    for (char c : s) {
        if (c == max_char) {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}
