#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void DFS(int v)
{
    if (visited[v])
        return;
    
    visited[v] = true;
    
    for (int i : graph[v]) {
        if (visited[i] == false)
            DFS(i);
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    
    graph.resize(N + 1);
    visited = vector<bool>(N + 1, false);
    
    for (int i = 0; i < M; i++) {
        int s, e;
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    
    int cnt = 0;
    
    for (int i = 1; i < N + 1; i++) {
        if (!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    
    cout << cnt;
}