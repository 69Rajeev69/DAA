#include <bits/stdc++.h>
using namespace std;

bool dfs(int start,vector<int> adj[],int vis[],stack<int> &s)
    {
        vis[start] = 1;
        for(auto it:adj[start])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,s);
            }
        }
        s.push(start);
    }

int main() {
    
    vector<int> arr[6];
    arr[1].push_back(2);
    arr[1].push_back(4);
    arr[1].push_back(0);
    arr[3].push_back(2);
    arr[3].push_back(5);
    arr[4].push_back(5);
    
    
    int vis[6] = {0};
	    stack<int> s;
	    for(int i=0;i<6;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,arr,vis,s);
	        }
	    }
	    vector<int> sort;
	    while(!s.empty())
	    {
	        sort.push_back(s.top());
	        s.pop();
	    }
	    for(int i=0;i<6;i++){
	        cout<<sort[i]<<" ";
	    }
	    cout<<endl;
    
    return 0;
}