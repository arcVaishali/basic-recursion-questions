#include <bits/stdc++.h>

using namespace std; 

int Pow(int);
int Pow(int x){ 
    if(x==1)
    return 1;

    else
    return 2*Pow(x-1);
    
}
int main(){
    int n;
    cout<<"Enter number::";
    cin>>n;

    Pow(n);
}