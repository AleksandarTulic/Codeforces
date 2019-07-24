#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    int p = 1;
    int br = 0;
    for (int i=1;i<=n;i++)
    {
        p+=br*4;
        br++;
    }
 
    cout<<p<<endl;
    return 0;
}
