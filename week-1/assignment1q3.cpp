#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int digits = 0;
        int num = nums[i];
        while (num > 0) {
            digits++;
            num /= 10;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}