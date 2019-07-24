#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main()
{
    string g;
 
    cin>>g;
 
    int br=0;
 
    int c1=-1,c2=-1;
 
    for (int i=g.size()-1;i>=0;i--)
    {
        if (g[i]=='B' && g[i-1]=='A' && c1!=1)
        {
            g[i]='*';
            g[i-1]='*';
            br++;
            c1=1;
        }
        else if (g[i]=='A' && g[i-1]=='B' && c2!=1)
        {
            c2=1;
            g[i]='*';
            g[i-1]='*';
            br++;
        }
 
        if (br==2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
 
    cout<<"NO"<<endl;
    return 0;
}
