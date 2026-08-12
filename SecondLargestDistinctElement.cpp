#include <bits/stdc++.h>
using namespace std;

int main()
{
   std::vector<int> arr = {10, 10, 10, 10};
   
   int largest =  arr[0];
   int smallest =  arr[0];
   
   for( int x  : arr ){
       
       if(x > largest){
           smallest = largest;
           largest = x;
       }
       else if (x > smallest && x != largest){
           smallest = x;
       }
   }
   
   std::cout << largest << std::endl;
   std::cout << smallest << std::endl;
   
}