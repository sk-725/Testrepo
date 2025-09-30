#include<iostream>
using namespace std;

int add(int x, int y){
    int z;
    z=x+y;
    return z;
}
int main(){
    int n1,n2,sum;
    cout<<"Enter first num: ";
    cin>>n1;
    cout<<"Enter second num: ";
    cin>>n2;
    sum=add(n1,n2);
    cout<<"Sum: "<<sum;
    return 0;
}
