#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
 
    int a[n+1][m+1];
    int b[n+1][m+1];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j] = 0;
        }
    }
 
    vector <pair<int, int> > niz;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if ( i < n - 1 && j < m - 1 ){
                if ( a[i+1][j] == 1 && a[i+1][j+1] == 1 && a[i][j+1] == 1 && a[i][j] == 1 ){
                    if ( b[i+1][j] == 0 || b[i+1][j+1] == 0 || b[i][j+1] == 0 || b[i][j] == 0 ){
                        //cout<<i<<" "<<j<<endl;
                        niz.push_back({i+1, j+1});
                        b[i][j] = 1;
                        b[i+1][j+1] = 1;
                        b[i][j+1] = 1;
                        b[i+1][j] = 1;
                    }
                }
            }
        }
    }
 
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if ( a[i][j] != b[i][j] ){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
 
    cout<<niz.size()<<endl;
    for (int i=0;i<niz.size();i++) cout<<niz[i].first<<" "<<niz[i].second<<endl;
    return 0;
}
