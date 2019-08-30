#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
#define ull unsigned long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int m;
    cin>>m;
 
    string a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    map <pair<string, string>, bool > flag;
    for (int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
 
        flag[{a,b}] = flag[{b,a}] = true;
    }
 
    vector <int> ans;
    for (int i=0;i<(1<<n);i++){
        vector <int> s;
        bool ff = true;
        for (int j=0;j<n;j++){
            if ( (1<<j) & i ){
                s.push_back(j);
            }
        }
 
        for (int k1=0;k1<s.size();k1++){
            for (int k2=k1+1;k2<s.size();k2++){
                if ( flag[{a[s[k1]], a[s[k2]]}] ){
                    ff = false;
                    break;
                }
            }
        }
 
        if ( ff ){
            if ( ans.size() < s.size() ) ans = s;
        }
    }
 
    cout<<ans.size()<<endl;
    vector <string> nn;
    for (int i=0;i<ans.size();i++){
        nn.push_back(a[ans[i]]);
    }
 
    sort(nn.begin(), nn.end());
    for (int i=0;i<nn.size();i++){
        cout<<nn[i]<<endl;
    }
    return 0;
}
