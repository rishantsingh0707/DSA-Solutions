class Solution {
public:
    int removeElement(vector<int>& arr ,int target) {

// reading the first element and comparing it with the target and if they are not equal then we will store the current element at the uniqueIndex and increment the uniqueIndex.

        int uniqueIndex = 0;

        for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] != target){
        
        arr[uniqueIndex]= arr[i];
        uniqueIndex ++;
        }
    }

    return uniqueIndex;
    }
};