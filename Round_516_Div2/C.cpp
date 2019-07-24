#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <queue>
#include <map>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector <char> niz(n);
    for (int i=0;i<n;i++)
    {
        char a;
        cin>>a;
 
        niz[i] = a;
    }
 
    sort(niz.begin(), niz.end());
 
    for (int i=0;i<n;i++) cout<<niz[i];
    return 0;
}
