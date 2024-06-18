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
map<int, int> parent;
map<int, int> size1;
void make(int v)
{
    parent[v] = v;
    size1[v] = 1;
}
int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size1[a] < size1[b])
            swap(a, b);
        parent[b] = a;
        size1[a] += size1[b];
    }
}
int defeatBoss(int h, const vector<pair<int, int>> &attacks)
{
    int n = attacks.size();
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

    // Initial damage calculation and push all attacks to the priority queue
    for (int i = 0; i < n; ++i)
    {
        int damage = attacks[i].first;
        int cooldown = attacks[i].second;
        pq.push(make_tuple(cooldown, damage, cooldown));
    }

    int turn = 0;
    while (h > 0)
    {
        turn++;
        int current_damage = 0;
        vector<tuple<int, int, int>> next_attacks;

        // Process attacks that are available this turn
        while (!pq.empty() && get<0>(pq.top()) <= turn)
        {
            auto next_turn = get<0>(pq.top());
            auto damage = get<1>(pq.top());
            auto cooldown = get<2>(pq.top());
            pq.pop();
            current_damage += damage;
            next_attacks.emplace_back(turn + cooldown, damage, cooldown);
        }

        // Apply damage to the boss
        h -= current_damage;

        // Reinsert the attacks that will be available in future turns
        for (const auto &attack : next_attacks)
        {
            pq.push(attack);
        }
    }

    return turn;
}
long long countCompleteDayPairs(const vector<int> &hours)
{
    long long cnt = 0;
    int n = hours.size();
    map<int, long long> mp;
    for (int i = 0; i < n; i++)
    {
        mp[hours[i]%24]++;
    }
    for (int i = 0; i < 24; i++)
    {
        int hour = hours[i] % 24;
        int tofind = 24 - hour;
        if(hour==0) tofind = 0;
        pair<int, int> idx = *mp.find(tofind);
        if(idx.first==tofind && idx.second>i)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cout << countCompleteDayPairs({12,16,12});
    int t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}
