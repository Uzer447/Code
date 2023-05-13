#include <bits/stdc++.h>
using namespace std;
void DFS(vector<pair<int, int>> graph[], int src,
         int prev_len, int *max_len, vector<bool> &visited)
{

    visited[src] = 1;

    int curr_len = 0;

    pair<int, int> adjacent;

    // Traverse all adjacent
    int maxk = INT_MIN;
    int ind = -1;
    for (int i = 0; i < graph[src].size(); i++)
    {
        adjacent = graph[src][i];
        if (adjacent.second > maxk)
        {
            maxk = adjacent.second;
            ind = adjacent.first;
        }
    }
    // for (int i = 0; i < graph[src].size(); i++)
    // {
    // Adjacent element

    // If node or city is not visited
    if (!visited[ind])
    {
        // Total length of cable from src city
        // to its adjacent
        curr_len = prev_len + maxk;

        // Call DFS for adjacent city
        DFS(graph, ind, curr_len,
            max_len, visited);
    }

    // If total cable length till now greater than
    // previous length then update it
    if ((*max_len) < curr_len)
        *max_len = curr_len;

    // make curr_len = 0 for next adjacent
    curr_len = 0;
    //}
}

int longestCable(vector<pair<int, int>> graph[], int n, int src)
{
    int max_len = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(n, false);
        DFS(graph, src, 0, &max_len, visited);
    }

    return max_len;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int, int>> graph[n];

    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    int k;
    cin >> k;
    cout << "Maximum length of cable = " << longestCable(graph, n, k);

    return 0;
}
