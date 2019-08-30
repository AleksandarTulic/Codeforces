#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
 
    reverse(s.begin(), s.end());
    int one = 0;
    int two = 0;
 
    string p = "";
 
    for (int i=0;i<s.size();i++){
        s[i] == '1' ? two++ : one++;
 
        if (two > one){
            p+="0";
            one++;
        }else{
            s[i] == '0' ? p+="0" : p+="1";
        }
    }
 
    reverse(p.begin(), p.end());
    cout<<p<<endl;
    return 0;
}
