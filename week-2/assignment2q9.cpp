#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> freq(1001, 0);

    // Count frequencies
    for (int num : arr1) {
        freq[num]++;
    }

    vector<int> result;

    // Add elements in arr2 order
    for (int num : arr2) {
        while (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }

    // Add remaining elements in ascending order
    for (int i = 0; i <= 1000; i++) {
        while (freq[i] > 0) {
            result.push_back(i);
            freq[i]--;
        }
    }

    // Print result
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}