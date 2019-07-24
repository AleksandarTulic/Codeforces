#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int sum(int a)
{
    int s = 0;
    while ( a )
    {
        s+=(a%10);
        a/=10;
    }
    return s;
}
 
int main()
{
    int n;
    cin>>n;
 
    int br = 1;
    int broj = 19;
 
    while (br != n)
    {
        broj++;
        while ( sum(broj) != 10 ) broj++;
        br++;
    }
 
    cout<<broj<<endl;
    return 0;
}
