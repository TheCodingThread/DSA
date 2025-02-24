#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1; //initialisation
    // Queue follows FIFO order, that is, First In First Out. It means that the first element added to the queue will be the first one to be removed

    q1.push(1); //includes 1 to the queue
    q1.push(2);
    q1.push(3);

    cout << "Front element: " << q1.front() << endl; //returns the first element

    cout << "Back element: " << q1.back() << endl; //returns the last element

    q1.pop(); //removes the front element

    // Using the front and back functions, you can also manipulate the elements of the queue

    // Other functions: empty(), size(), swap()
    return 0;
}