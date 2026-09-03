class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int uniqueIndex = 1;
   
        // reading the second element and comparing it with the previous element and if they are not equal then we will store the current element at the uniqueIndex and increment the uniqueIndex.

        for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i] != arr[i-1]){
        // eg : if the array is {1, 1, 2, 2, 3} then we will store 2 at index 1 and increment the uniqueIndex to 2 and then we will store 3 at index 2 and increment the uniqueIndex to 3. So the final array will be {1, 2, 3} and the uniqueIndex will be 3.
        arr[uniqueIndex]= arr[i];
        uniqueIndex ++;
        }
    }

    return uniqueIndex;
    }
};