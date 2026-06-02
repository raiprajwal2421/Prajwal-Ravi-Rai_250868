#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << "false";
        return 0;
    }
    vector<int> digits;
    if (x == 0) {
        digits.push_back(0);
    }
    int temp = x;
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    bool palindrome = true;
    for (int i = 0; i < digits.size() / 2; i++) {
        if (digits[i] != digits[digits.size() - 1 - i]) {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << "true";
    else
        cout << "false";
    return 0;
}
