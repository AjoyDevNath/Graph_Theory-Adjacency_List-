//c191040@ugrad.iiuc.ac.bd

#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
    init_code();
    fastIO();

    vector<int>vec[1000];

    int node,edge;
    cin>>node>>edge;

    int n1,n2;

    for(int i = 1 ;i <= edge;i++){
        cin>>n1>>n2;

        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }

    cout<<vec[6].size()<<"\n";

    for(int i = 0; i < vec[3].size();i++){
        cout<<vec[6][i]<<" ";
    }

    cout<<"\n";
}
