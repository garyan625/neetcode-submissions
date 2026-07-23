class Solution {
public:
    bool alphanumeric(char ch){
        if((ch>='0' && ch<='9') || (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))return true;
        return false;
    }
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            while(l<r && !alphanumeric(s[l])){
                l++;
            }
            while(l<r && !alphanumeric(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
