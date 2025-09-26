// Darshan Soni
// 24070123034

#include<iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1;
    }
    else return n*fact(n-1);
}

int main()
{
    int a;
    cout<<"Enter an integer: "<<endl;
    cin>>a;
    cout<<"Factorial is: "<<fact(a);
}

// Output
// Enter an integer: 
// 5
// Factorial is: 120
