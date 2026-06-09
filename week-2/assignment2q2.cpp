#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int n = nums.size();
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    int k = i + 1;

    cout << "k = " << k << endl;
    cout << "Unique elements: ";

    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }

    cout << endl;

    return 0;
}