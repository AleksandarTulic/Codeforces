#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    map <int, bool> flag;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    vector <int> niz;
    for (int i=n-1;i>=0;i--)
        if ( !flag[a[i]] ) niz.push_back(a[i]), flag[a[i]] = true;
 
    cout<<niz.size()<<endl;
    for (int i=niz.size()-1;i>=0;i--) cout<<niz[i]<<" ";
    return 0;
}
