class Solution {
public:
    bool isPalindrome(string s) {
        int left =0 , right = s.size()-1;
        
        while(left<right){
            
            //move left pointer to the next alphabetic character
            while(left< right && !isalnum(s[left])){
                left++;
            }
            //move right pointer to the previous alphabetic charater
            while(left<right && !isalnum(s[right])){
                right--;
            }
            
            //compare characters, ignoring case
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};