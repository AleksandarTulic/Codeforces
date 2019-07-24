#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
 
using namespace std;
 
int n;
string g;
 
int main()
{
    cin>>n;
    cin>>g;
 
    for (int i=2;i<=n;i++)
    {
        if ( n % i == 0 )
        {
            string a = "";
            for (int j=i-1;j>=0;j--) a+=g[j];
 
            for (int j=0;j<i;j++)
                g[j]=a[j];
        }
    }
 
    cout<<g<<endl;
    return 0;
}
