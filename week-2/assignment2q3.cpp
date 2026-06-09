#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    int n = nums.size();

    vector<int> ans(n);

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];

        if (leftSq > rightSq) {
            ans[pos] = leftSq;
            left++;
        } else {
            ans[pos] = rightSq;
            right--;
        }
        pos--;
    }

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}