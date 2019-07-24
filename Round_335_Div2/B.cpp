#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
 
using namespace std;
 
int x,y,x0,y0;
string g;
vector <bool> puni(501, false);
vector <vector <bool> > flag(501, puni);
int br = 1;
 
void check(int a, int b)
{
    if ( flag[a][b] ) cout<<0<<" ";
    else
    {
        cout<<1<<" ";
        flag[a][b] = true;
        br++;
    }
}
 
int solve_robot()
{
    cout<<1<<" ";
    flag[x0][y0] = true;
    int x1, y1;
 
    for (int i=0;i<g.size()-1;i++)
    {
        x1 = x0;
        y1 = y0;
 
        if ( g[i] == 'R' )
        {
            if ( y0 <= y ) y0++;
            if ( y0 > y ) y0--;
        }
        else if ( g[i] == 'U' )
        {
            if ( x0 <= x ) x0--;
            if ( x0 < 1 ) x0++;
        }
        else if ( g[i] == 'L' )
        {
            if ( y0 <= y ) y0--;
            if ( y0 < 1 ) y0++;
        }
        else
        {
            if ( x0 <= x ) x0++;
            if ( x0 > x ) x0--;
        }
 
        check(x0,y0);
    }
 
    return br;
}
 
int main()
{
    cin>>x>>y;
    cin>>x0>>y0;
    cin>>g;
 
    cout<<x*y - solve_robot()<<endl;
    return 0;
}
