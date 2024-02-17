#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    vector<int> freq(N + 1, 0); // Frequency array to count occurrences of each sum
    int sum = 0; // Initialize sum
    long long result = 0; // Initialize the result variable to store the counts

    for (int i = 0; i < N; ++i) {
        sum = sum + P[i]; // Update the current sum
        if (sum <= N) {
            freq[sum]++; // Increment the count of the current sum
            result += freq[sum]; // Add the current count to the result
        }
    }

    // Output the counts for each sum
    for (int i = 1; i <= N; ++i) {
        cout << freq[i] << " ";
    }
    cout << endl;

    return 0;
}
