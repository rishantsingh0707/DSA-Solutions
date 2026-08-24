#include <bits/stdc++.h>
using namespace std;

int main()
{
   std::vector<int> arr = {10, 20, 30,22, 50};

    //compare the current element with the previous element using i = 1 and check if the current element is less than the previous element.

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            std::cout << "its unsorted" << std::endl;
            return false;
        }
    }
    std::cout << "its sorted" << std::endl;
    
    return true;
        
}