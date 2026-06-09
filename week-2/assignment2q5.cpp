#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            cout << "Pivot Index = " << i << endl;
            return 0;
        }

        leftSum += nums[i];
    }

    cout << "Pivot Index = -1" << endl;

    return 0;
}