#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findMinMaxInfected(int T, vector<pair<int, vector<int>>> &testCases) {
    for (int t = 0; t < T; ++t) {
        int N = testCases[t].first;
        vector<int> positions = testCases[t].second;

        sort(positions.begin(), positions.end());

        vector<int> groupSizes;
        int currentGroupSize = 1;

        for (int i = 1; i < N; ++i) {
            if (positions[i] - positions[i - 1] <= 2) {
                currentGroupSize++;
            } else {
                groupSizes.push_back(currentGroupSize);
                currentGroupSize = 1;
            }
        }
        groupSizes.push_back(currentGroupSize);

        int minInfected = *min_element(groupSizes.begin(), groupSizes.end());
        int maxInfected = *max_element(groupSizes.begin(), groupSizes.end());

        cout << minInfected << " " << maxInfected << endl;
    }
}

int main() {
    int T;
    cin >> T;

    vector<pair<int, vector<int>>> testCases(T);
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> positions(N);
        for (int i = 0; i < N; ++i) {
            cin >> positions[i];
        }
        testCases[t] = {N, positions};
    }

    findMinMaxInfected(T, testCases);

    return 0;
}
