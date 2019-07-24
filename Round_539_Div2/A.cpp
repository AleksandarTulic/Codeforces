#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int r(int a)
{
    return a*(a+1)/2-1;
}
 
int main() {
    int n,v;
    cin>>n>>v;
 
    if ( v >= n - 1 ) cout<<n-1<<endl;
    else
    {
        cout<<r(n-v)+v<<endl;
    }
    return 0;
}
