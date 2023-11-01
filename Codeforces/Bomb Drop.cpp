#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPower(vector<int>& steps) {
    int n = steps.size();
    vector<int> dp(n);

    // Base cases
    dp[0] = steps[0];
    dp[1] = max(steps[0], steps[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 2] + steps[i], dp[i - 1] + steps[i]);
    }

    // The maximum power can be obtained by either skipping the last step or taking its power.
    return max(dp[n - 1], dp[n - 2]);
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> steps(N);

        for (int i = 0; i < N; ++i) {
            cin >> steps[i];
        }

        // Calculate and print the maximum power for each test case
        int result = maxPower(steps);
        cout << result << endl;
    }

    return 0;
}
