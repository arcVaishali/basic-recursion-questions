#include <iostream>

using namespace std; 
int a=1;
int count2(int);

int count2(int x){  
    if(x==0)
    return 0;

    cout<<x<<endl;    
    count2(x-1);
}

int count1(int x){
    if(a==x)
    return x;

    cout<<a<<endl;
    count1(x-1); 

}

int main(){
    int n;
    cout<<"Enter number::";
    cin>>n;

    //Ulti Ginti; n n-1 .... 3 2 1 0
    cout<<count2(n)<<endl; 

    cout<<count1(x,n)<<endl;

}