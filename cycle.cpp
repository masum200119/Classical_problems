#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define int long long
#define ll long long
#define endl "\n"
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define BB ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define pp pop_back()
#define vtr vector<int>
#define sz size()
#define ff first
#define ss second
#define fncc (auto valid =[&] (int x) -> bool { };)
#define vout(a) for(auto x:a)cout<<x<<' ';
const int INF=1e9+1;
const int MAXN=1e6+1;
const int MOD=1e9+7;
const int nax=INT_MAX;
const int nin=INT_MIN;
void onr()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
bool prime(int n) {
    for(int i=2; i*i<=sqrt(n); i++) 
    {
        if(n%i==0) return false;
    }
    return true;
}
vector<int>adj[200119];
int color[200119];// 0-unvisited// 1-active //2 -dead;
bool cycle;
int mx;
void dfs(int source)
{
    color[source]=1;
    //cout<<source<<endl;
    for(auto child :adj[source])
    {
        if(color[child]==1)
        {
            cycle=true;
            return;
        }
        else if(color[child]==0)
        {
            dfs(child);
        }
    }
    color[source]=2;
        
}
void abc()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<color[i]<<endl;
    }

    if(cycle)yes
    else no;
}
signed main()
{
    onr();
    BB;
    // int __;
    // cin>>__;
    // for(; __--; )
    // {
    //     //cout<<"Case "<<i<<": ";
        abc();
    // }
    return 0;
}
