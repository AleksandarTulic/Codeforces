#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    int br = 0;
    while (n>=100) br++, n-=100;
    while (n>=20) br++, n-=20;
    while (n>=10) br++, n-=10;
    while (n>=5) br++, n-=5;
    while (n>=1) br++, n-=1;
 
    cout<<br<<endl;
    return 0;
}
