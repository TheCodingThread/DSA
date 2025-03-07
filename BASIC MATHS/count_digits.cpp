#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    n = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        num = num/10;
        n++;
    }
    cout<<"Number of digits: "<<n<<endl;
    return 0;
}