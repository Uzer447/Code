#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
long long maximizeRatings(vector<long long>& rating, long long n) {
	if (n == 1) {
		if (rating[0] > 0) return rating[0];
		return 0;
	}
	else if (n == 2) return max(max(rating[0], rating[1]), rating[0] + rating[1]);
	else {
		vector<vector<int>> dp(n + 1, vector<int>(2, -1));
		dp[n][0] = dp[n][1] = 0;
		for (long long ind = n - 1; ind >= 0; ind--) {
			for (long long skip = 0; skip < 2; skip++) {
				long long np = INT_MIN, p = INT_MIN;
				if (skip == 0) np = dp[ind + 1][1];
				p = rating[ind] + dp[ind + 1][0];
				dp[ind][skip] = max(p, np);
			}
		}
		return max(dp[0][0], dp[0][1]);
	}
}

int countBracketSequence(string s)
{
    int n = s.size();
    int ans = 0;
    vector<int> open;
    int o = 0;
    int c = 0;
    vector<int> close;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            open.push_back(++o);
            close.push_back(c);
        }
        else
        {
            open.push_back(o);
            close.push_back(++c);
        }
    }
    // cout << open.size() << " " << close.size() << endl;
    if (abs(open[n - 1] - close[n - 1]) > 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (open[n - 1] > close[n - 1])
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (open[i] > close[i])
            {
                ans++;
            }
            else
                break;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (open[i] >= close[i])
            {
                ans++;
            }
            else
                break;
        }
        ans++;
    }
    return ans;
}
void overlap(vector<pair<int, int>> v)
{
    // variable to store the maximum
    // count
    int ans = 0;
    int count = 0;
    vector<pair<int, char>> data;

    // storing the x and y
    // coordinates in data vector
    for (int i = 0; i < v.size(); i++)
    {

        // pushing the x coordinate
        data.push_back({v[i].first, 'x'});

        // pushing the y coordinate
        data.push_back({v[i].second, 'y'});
    }

    // sorting of ranges
    sort(data.begin(), data.end());

    // Traverse the data vector to
    // count number of overlaps
    for (int i = 0; i < data.size(); i++)
    {

        // if x occur it means a new range
        // is added so we increase count
        if (data[i].second == 'x')
            count++;

        // if y occur it means a range
        // is ended so we decrease count
        if (data[i].second == 'y')
            count--;

        // updating the value of ans
        // after every traversal
        ans = max(ans, count);
    }

    // printing the maximum value
    cout << ans << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<pair<int, int>> v = {{5, 7}, {2, 2}, {3, 4}, {7, 8}};
   // overlap(v);
   cout<<countBracketSequence("(()()()())()(")<<endl;
}
