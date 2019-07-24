#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    int s = 0;
    for (int i=0;i<n;i++) cin>>a[i];
 
    for (int i=0;i<(1<<n);i++)
    {
        int suma = 0;
        for (int j=0;j<n;j++)
        {
            if ( i & (1<<j) ) suma+=a[j];
            else suma-=a[j];
        }
 
        if ( suma % 360 == 0 ) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
 
    cout<<"NO"<<endl;
    return 0;
}
