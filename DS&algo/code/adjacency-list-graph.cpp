#include<iostream>
#include<vector>
using namespace std;
/* graph
1 ---->  2
 \      /
   > 0 <
   void addEdge(vector<vector<int>>, int, int);
void bfsPrint(vector<vector<int>>);
   */
# define N 3

void addEdge(vector<vector<int>> &adj, int u, int v)  {
    adj[u].push_back(v);
}
void bfsPrint(vector<vector<int>> &adj) {
    for(int i=0; i< adj.size(); i++) {
        cout<<i << " : ";
        for (int j : adj[i]) {
            cout<<j << " ";
        }
        cout<<"\n";
    }

}
int main() {
    vector<vector<int>> adj(N);

    addEdge(adj, 1, 0);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);

    bfsPrint(adj);
}
