#include <bits/stdc++.h>
using namespace std;



int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=max(mp[s[i]],a[i]);
        }
        for(auto i:mp)
        {
            sum -= i.second;
        }
        
        cout << sum << '\n';
    }

    
    return 0;
}
