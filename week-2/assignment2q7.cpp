#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    long long windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    long long maxSum = windowSum;

    for (int i = k; i < nums.size(); i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    double maxAverage = (double)maxSum / k;

    cout << maxAverage << endl;

    return 0;
}