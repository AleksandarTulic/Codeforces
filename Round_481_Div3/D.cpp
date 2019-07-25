#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int b[100005];
int z[100005];

int change(int broj, int t[])
{
    int br = 0;
    for (int i=1;i<n-1;i++)
    {
        if ( t[i] + broj != t[i+1] )
        {
            if ( t[i] + broj == t[i+1] - 1 ){
                t[i+1]--;
                br++;
            }
            else if ( t[i] + broj == t[i+1] + 1 ){
                t[i+1]++;
                br++;
            }
            else return 2e9;

            if ( t[i] < 0 ) return 2e9;
        }
    }

    return br;
}

void ponovi()
{
    for (int i=0;i<n;i++)
        b[i] = z[i];
}

int main()
{
    cin>>n;

    for (int i=0;i<n;i++) cin>>b[i];
    for (int i=0;i<n;i++) z[i]= b[i];

    if ( n == 1 || n == 2 ) cout<<0<<endl;
    else
    {
        int br1 = b[1] + 1 - (b[0] + 1);
        int br2 = b[1] - 1 - (b[0] - 1);
        int br3 = b[1] - 1 - (b[0] + 1);
        int br4 = b[1] + 1 - (b[0] - 1);
        int br5 = b[1] + 1 - b[0];
        int br6 = b[1] - 1 - b[0];
        int br7 = b[1] - (b[0] + 1);
        int br8 = b[1] - (b[0] - 1);
        int br9 = b[1] - b[0];

        b[0]++;b[1]++;
        int ele1 = change(br1, b);
        ponovi();b[0]--;b[1]--;
        int ele2 = change(br2, b);
        ponovi();b[0]++;b[1]--;
        int ele3 = change(br3, b);
        ponovi();b[0]--;b[1]++;
        int ele4 = change(br4, b);
        ponovi();b[1]++;
        int ele5 = change(br5, b);
        ponovi();b[1]--;
        int ele6 = change(br6, b);
        ponovi();b[0]++;
        int ele7 = change(br7, b);
        ponovi();b[0]--;
        int ele8 = change(br8, b);
        ponovi();
        int ele9 = change(br9, b);

        int niz[9] = {ele1, ele2, ele3, ele4, ele5, ele6, ele7, ele8, ele9};
        int ind = 0;
        for (int i=1;i<9;i++)
            if ( niz[ind] > niz[i] ) ind = i;

        if ( niz[ind] == 2e9 ) cout<<-1<<endl;
        else if ( ind >= 0 && ind <= 3 ) cout<<2+niz[ind]<<endl;
        else if ( ind <= 7 ) cout<<1+niz[ind]<<endl;
        else cout<<niz[ind]<<endl;
    }
    return 0;
}
