#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n1 = 20;
    int n2 = 40;
    
    while(n1> 0 && n2 > 0){
        if(n1> n2 ) n1= n1 % n2;
        else n2= n2 % n1;
    }
    if(n1==0) return n2;
    return n1;
}