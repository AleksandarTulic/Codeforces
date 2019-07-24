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
    int t;
    cin>>t;
 
    while (t--)
    {
        string s,t,p;
        cin>>s>>t>>p;
 
        int j = 0;
        int i = 0;
        bool flag = true;
        for (i=0;i<s.size();i++)
        {
            while ( s[i] != t[j] && j < t.size() ) j++;
 
            if ( j == t.size() && i < s.size() )
            {
                flag = false;
                break;
            }
 
            j++;
        }
 
        if ( flag )
        {
            int niz[30] = {};
            for (int i=0;i<s.size();i++)
                niz[s[i]-'a']++;
            for (int i=0;i<p.size();i++)
                niz[p[i]-'a']++;
            for (int i=0;i<t.size();i++)
                niz[t[i]-'a']--;
 
            for (int i='a';i<='z';i++)
                if ( niz[i-'a'] < 0 )
                {
                    flag = false;
                    break;
                }
 
            if ( flag ) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
