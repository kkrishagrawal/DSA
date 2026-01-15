// https://leetcode.com/problems/valid-palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string newString="";
        string reversed="";
        int i=0;
        for (char &c: s) {
            int ascii = c;
            if ((ascii >=65 && ascii <=90)||(ascii>=97 && ascii <=122)||(ascii >=48 && ascii <=57))
            {
                if (c >= 'A' && c <= 'Z') {
                    c = c + 32;
                }
                newString+=c;
            }
        }
        for (i=0; i<newString.length()/2; i++)
            if (newString[i]!=newString[newString.length()-i-1])
                return false;
        return true;
    }
};