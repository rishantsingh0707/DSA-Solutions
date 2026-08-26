class Solution {
public:
    bool isPalindrome(int s) {

      if(s < 0) return false;

      string str = to_string(s);

      int left = 0;
      int right  = str.size()-1;

      while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left ++;
        right --;
      }
      return true;
    }

};