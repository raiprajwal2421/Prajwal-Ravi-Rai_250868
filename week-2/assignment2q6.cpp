#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> gain = {-5, 1, 5, 0, -7};

    int altitude = 0;
    int maxAltitude = 0;

    for (int g : gain) {
        altitude += g;
        maxAltitude = max(maxAltitude, altitude);
    }

    cout << "Highest Altitude = " << maxAltitude << endl;

    return 0;
}