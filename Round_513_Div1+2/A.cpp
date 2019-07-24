#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
 
using namespace std;
 
#define ull unsigned long long
 
int main()
{
    int n;
    cin>>n;
 
    string g;
    cin>>g;
 
    map <char, int> m;
    for (int i=0;i<g.size();i++) m[g[i]]++;
 
    int rez = 0;
    while (m['8']--)
    {
        int br = 0;
        for (char i = '0'; i<='9';i++)
            while ( m[i] >= 1 && br < 10 && i != '8' )
            {
                m[i]--;
                br++;
            }
 
        if ( br == 10 ) rez++;
        else
        {
            while ( m['8'] >= 1 && br < 10 )
            {
                m['8']--;
                br++;
            }
 
            if ( br == 10 ) rez++;
            else break;
 
        }
    }
 
    cout<<rez<<endl;
    return 0;
}
