#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#include <queue>
#define ull unsigned long long
#define ll long long
#define mod 998244353
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    string s;
    cin>>s;
 
    map <string, bool> flag;
 
    queue <string> q;
    q.push(s);
    int rez = 0;
    int br = 0;
 
    while (!q.empty()){
        string buff = q.front();
        rez+=(s.size()-buff.size());
        q.pop();
        br++;
        if ( br == k ){
            cout<<rez<<endl;
            return 0;
        }
 
        for (int i=0;i<buff.size();i++){
            string t = buff;
            t.erase(i, 1);
            if ( !flag[t] ){
                q.push(t);
                flag[t] = true;
            }
        }
    }
 
    cout<<-1<<endl;
    return 0;
}
