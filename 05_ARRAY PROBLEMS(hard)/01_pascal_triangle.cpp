#include<bits/stdc++.h>
using namespace std;

//1
long long findEle(int row){
    cout << "Enter the row number: ";
    int rw;
    cin >> rw;
    if(rw > row){
        cout << "Inputted row number is out of range of given Pascal Triangle.";
        return 0;
    }

    cout << "Enter the column number: ";
    int cl;
    cin >> cl;

    long long res = 1;

    int n = rw-1;
    int r = cl-1;
    
    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}
//time complexity: O(r); space complexity: O(1)


//2
void printCol(){
    int cl;
    cout << "Enter the column: ";
    cin >> cl;

    int ans = 1;

    for(int i=0; i<cl; i++){
        if(i >= 1){
            ans = ans * (cl-1-(i-1))/i;
            cout << ans << " ";
        } 
        else cout << ans << " ";
    }
}

//3
void pTriangle(int row){
    
}

int main(){
    cout << "Enter number of rows: ";
    int row;
    cin >> row;

    cout << endl;

    cout << "Enter the number for problem execution" << endl << "1. Find the element using row and column" << endl << "2. Print the respective column." << endl << "3. Print the Pascal Triangle" << endl;
    cout << endl;

    int opt;
    cin >> opt;
    cout << endl;
    if(opt == 1){ 
        long long result = findEle(row);
        cout << "The element is: " << result;
    }
    else if(opt == 2) printCol();
    else if(opt == 3) pTriangle(row);

    return 0;
}