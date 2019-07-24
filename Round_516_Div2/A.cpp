#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <queue>
#include <map>
 
using namespace std;
 
int main()
{
    int niz[3];
    for (int i=0;i<3;i++) cin>>niz[i];
 
    sort(niz, niz+3);
 
    if ( niz[2] >= ( niz[1] + niz[0] ) ) cout<<niz[2] - ( niz[1] + niz[0] ) + 1;
    else cout<<0<<endl;
    return 0;
}
