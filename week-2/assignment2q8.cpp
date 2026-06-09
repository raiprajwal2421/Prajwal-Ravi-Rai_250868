#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    unordered_map<int, int> lastIndex;

    for (int i = 0; i < nums.size(); i++) {
        if (lastIndex.find(nums[i]) != lastIndex.end()) {
            if (i - lastIndex[nums[i]] <= k) {
                cout << "true" << endl;
                return 0;
            }
        }

        lastIndex[nums[i]] = i;
    }

    cout << "false" << endl;
    return 0;
}