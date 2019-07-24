#include <iostream>
#include <stdio.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    int suma = 0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        suma+=a[i];
    }
 
    int pola = suma/2;
    for (int i=0;i<n;i++)
    {
 
        if ( suma - a[i] <= pola )
        {
            cout<<i+1<<endl;
            return 0;
        }
        suma-=a[i];
    }
    return 0;
}
