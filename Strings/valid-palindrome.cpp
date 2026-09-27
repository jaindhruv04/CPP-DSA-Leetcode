class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(
            remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }),
            s.end());

        for (char& c : s) {
            c = tolower(c);
        }

        string check = s;
        string rev = check;

        reverse(rev.begin(), rev.end());

        return check == rev;
    }
};