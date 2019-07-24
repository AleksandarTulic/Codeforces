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
 
    int s = 0;
    for (s=1;s*(s+1)/2 < n;s++);
 
    if ( s*(s+1)/2 == n )
    {
        cout<<s<<endl;
        for (int i=1;i<=s;i++) cout<<i<<" ";
    }
    else
    {
        cout<<s-1<<endl;
        for (int i=1;i<s-1;i++)
            cout<<i<<" ";
        cout<<n-( (s-2)*(s-1)/2 )<<endl;
    }
    return 0;
}
