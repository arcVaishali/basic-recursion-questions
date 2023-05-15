#include <bits/stdc++.h>

using namespace std; 

class Solution {
    public:

    // n = 8
    // 1 1 2 3 5 8 13 21 

    int a = 0 , b = 1;

    void fibonacci( long long n ){

        if ( n == 1 )
        cout << b << " ";  
        return ;

        if ( n == 0 )
        cout << a << " ";
        return ;

        cout << a + b << " ";
        b = a + b ; a =  b - a ; 
        fibonacci( n - 1 );
        
    }
};

int main() {

    int t ;
    cin >> t ;

    while ( t-- ) {
        long long n ;
        cin >> n ;

        Solution object;

        object.fibonacci( n ); 
    }
    return 0;
}