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
 
    int a[n];
    int b[n];
    for (int i=0;i<n;i++) cin>>a[i]>>b[i];
 
    sort(a,a+n);
    sort(b,b+n);
 
    ull rez = 0;
    for (int i=0;i<n;i++) rez+=max(a[i], b[i]);
 
    cout<<rez+n<<endl;
    return 0;
}
