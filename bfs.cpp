#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> graph[5];
bool visited[5];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";

        for(int u : graph[v]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}

int main() {
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 4};

    bfs(0);
}