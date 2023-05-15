#include <iostream> 

using namespace std; 

int fact(int);
int fact(int x){ 
    if(x==0)
    return 1;

    else
    return x*fact(x-1);
}

int main(){ 
    int n;
    cout<<"Enter number::";
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
    
}