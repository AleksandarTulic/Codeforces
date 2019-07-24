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
 
int n,m;
int a[501][501];
vector <bool> flag(1e5+10000,false);
vector <int> red(501, 0);
vector <int> kol(501, 0);
 
void sieve()
{
    flag[1] = true;
 
    for (int i=2;i*i<=1e5+10000;i++)
        if (!flag[i])
            for (int j=i*2;j<=1e5+10000;j+=i)
                flag[j] = true;
}
 
int main()
{
    cin>>n>>m;
    sieve();
 
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if ( flag[a[i][j]] )
            {
                int broj = a[i][j];
                for (int k=a[i][j]+1;k<=1e5+10000;k++)
                {
                    if ( !flag[k] )
                    {
                        broj = k;
                        break;
                    }
                }
                red[i]+=broj-a[i][j];
                kol[j]+=broj-a[i][j];
            }
        }
    }
 
    int minn = 2e9;
    for (int i=0;i<n;i++)
    {
        minn = min(minn, red[i]);
    }
    for (int i=0;i<m;i++) minn = min(minn, kol[i]);
 
    cout<<minn<<endl;
    return 0;
}
