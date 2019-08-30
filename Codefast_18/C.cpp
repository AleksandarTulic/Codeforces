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
    string a;
    string b;
    cin>>a>>b;
 
    int ans = 0;
    for (int i=0;i<a.size();i++){
        if ( a[i] == b[i] ) continue;
 
        if ( i < a.size() - 1 ){
            if ( a[i+1] == b[i] && b[i+1] == a[i] ){
                ans++;
                a[i] = b[i];
                a[i+1] = b[i+1];
            }
            else{
                a[i] = b[i];
                ans++;
            }
        }
        else{
            ans++;
            a[i] = b[i];
        }
    }
 
    cout<<ans<<endl;
    return 0;
}
