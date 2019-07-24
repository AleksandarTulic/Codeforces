#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
 
using namespace std;
 
int main()
{
    int a[3];
    for (int i=0;i<3;i++) cin>>a[i];
 
    int b[3];
    for (int i=0;i<3;i++) cin>>b[i];
 
    int br1 = 0;
    int br2 = 0;
 
    for (int i=0;i<3;i++)
    {
        if ( a[i] < b[i] )
        {
            br1+= b[i] - a[i];
        }
        else
        {
            br2+= (a[i] - b[i])/2;
        }
    }
 
    if ( br1 <= br2 ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
