#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
 
    int maks = -1;
    int a, b;
    int br = 1;
    cin>>a;
    for (int i=1;i<n;i++)
    {
        cin>>b;
        if ( b >= a )
        {
            br++;
            a = b;
        }
        else
        {
            maks = max(maks, br);
            br = 1;
            a = b;
        }
    }
    maks = max(maks, br);
 
    cout<<maks<<endl;
    return 0;
}
