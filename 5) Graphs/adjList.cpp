#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    unordered_map<int , vector<int>> adj;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // this statement will be removed in case of directed graph
    }

    for(auto i : adj){
        cout << "Adjacency list of vertex " << i.first << ": ";
        for(int j = 0; j < i.second.size(); j++){
            cout << i.second[j] << " ";
            // cout << adj[i].size() << "---" << endl;
            // cout << adj[j].size() << "---" << endl;
        }
        cout << endl;
    }
    return 0;
}
