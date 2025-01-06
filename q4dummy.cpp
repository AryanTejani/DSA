#include <bits/stdc++.h>
using namespace std;

int ansF(int N, int swap) {
    if (N <= 1) {
        return 0; // No swaps possible if there's 1 or fewer elements.
    }

    // Example formula (you can replace it with the correct logic for your problem):
    
    return 2 * N * swap - (2 * swap * (swap + 1) - swap);
}

int main() {
    int testSize;
    cin >> testSize;

    vector<pair<int, int>> vec(testSize);
    vector<int> results(testSize);

    for (int i = 0; i < testSize; i++) {
        int N, swap;
        cin >> N >> swap;
        vec[i] = {N, swap};
    }

    // Process each test case and compute results
    for (int i = 0; i < testSize; i++) {
        results[i] = ansF(vec[i].first, vec[i].second);
    }

    // Output results
    for (auto val : results) {
        cout << val << endl;
    }

    return 0;
}
