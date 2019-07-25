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
 
    string s;
    cin>>s;
 
    int br = 0;
    for (int i=0;i<=n-3;i++)
        if ( s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x' ) br++;
 
    cout<<br<<endl;
    return 0;
}
