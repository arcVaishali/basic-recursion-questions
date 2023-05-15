#include <bits/stdc++.h>

using namespace std; 

class Solution{
    public:
    bool isPalindrome( string s , int left , int right ) {

        if ( left >= right )
        return true;
        //  aaabbbbcccdcccbbbbaaa

        if ( s[ left ] == s[right] )
        return isPalindrome( s , ++left , --right );

        return false;
    }
};

int main() {
    int t;
    cin >> t;

    while ( t-- ) {
        string s ;
        cin >> s;

        Solution object ; 
        
        int left  =  0 , right = s.length() - 1; 
        object.isPalindrome( s , left , right );
    }
}