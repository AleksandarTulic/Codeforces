#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    vector <int> nep,par;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
 
        if (a % 2 != 0) nep.push_back(a);
        else par.push_back(a);
    }
 
    sort(nep.begin(),nep.end());
    sort(par.begin(),par.end());
 
    int suma=0;
 
    suma+=nep[nep.size()-1];
 
    for (int i=0;i<par.size();i++) suma=max(suma,suma+par[i]);
 
    for (int i=nep.size()-2;i>=1;i-=2) suma=max(suma,suma+nep[i]+nep[i-1]);
 
    cout<<suma<<endl;
    return 0;
}
