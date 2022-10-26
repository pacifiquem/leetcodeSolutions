class Solution {
public:
    bool isPalindrome(int x) {
        string numberString = to_string(x);
        int numberStringLength = end(numberString) -  begin(numberString);
        bool trueArray[numberStringLength];
        for(int i=0; i<numberStringLength; i++) {
            if(numberString[i] == numberString[numberStringLength-1-i]) {
                trueArray[i] = true;       
            }else {
                trueArray[i] = false;
            }
        }
        
        int trueSize = 0;
        
        for(int i=0; i<numberStringLength; i++) {
            if(trueArray[i] == true) {
                ++trueSize;
            }else {
                continue;
            }
        }
        
        if(trueSize == numberStringLength) {
            return true;
        }else {
            return false;
        }
    }
};