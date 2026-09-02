#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num= 1634;
    int og = num;
    int check=0;
    
    int temp = num;
    int digit= 0;
    
    while(temp>0){
        digit++;
       temp=  temp/10;
    }
    
    while(num > 0){
        int lastDigit = num%10;
        check = check+(pow(lastDigit,digit));
       num= num/10;
    }
    
    cout << check << endl;

    if(og != check){
        cout << "Not an Armstrong Number";
    }
    else{
        cout << "Armstrong Number";
    }

    return 0;
}