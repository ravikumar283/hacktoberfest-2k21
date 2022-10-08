#include<iostream>
using namespace std;

int main(){
    int n, pos;
    
cout<<"Enter any integer you want: ";
cin>>n;
cout<<"Enter bit position for clear bit:"<<endl;
cin>>pos;

int mask = ~(1<<pos); 

cout<<"Integer after clear bit at position is: "<<(n & mask)<<endl;

return 0;
}
