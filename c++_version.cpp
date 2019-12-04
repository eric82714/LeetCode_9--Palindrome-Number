# define INT_MAX 2147483647
# define INT_MIN -INT_MAX

class Solution {
public:
    bool isPalindrome(int x) {
        if(0 <= x && x <= INT_MAX){
            int orgin = x;
            int reversed = 0;
    
            while(x != 0){
                if(reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && x % 10 > (INT_MAX % 10))){return false;}
                reversed = reversed * 10 + x % 10;
                x /= 10;
            }
    
            if(reversed == orgin){return true;} else{return false;}
        }
        else{
            return false;
        }        
    }
};
