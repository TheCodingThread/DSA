#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int* arr;
    int capacity; // Maximum possible size
    int size; // Current number of elements

public:
    MinHeap(int cap){
        size = 0;
        capacity = cap;
        arr = new int[cap];
    }

    int parent(int i){ return (i-1)/2; }
    int left(int i){ return 2*i+1; }
    int right(int i){ return 2*i+2; }

    //Core operations
    void insert(int key){
        if(size == capacity) return;

        size++;
        int i = size-1;
        arr[i] = key;

        //bubble up
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    int extractMin(){
        if(size <= 0) return INT_MAX;
        if(size == 1){
            size--;
            return arr[0];
        }

        int root = arr[0];
        arr[0] = arr[size-1];
        size--;
        heapify(0);

        return root;
    }

    void heapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if(l<size && arr[l]<arr[i]) smallest = l;
        if(r<size && arr[r]<arr[smallest]) smallest = r;
        
        if(smallest != i){
            swap(arr[i], arr[smallest]);
            heapify(smallest);
        }
    }

    void decreaseKey(int i, int newVal){
        arr[i] = newVal;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void deleteKey(int i){
        decreaseKey(i, INT_MIN);
        extractMin();
    };

    int getMin() { return arr[0]; }
};

int main(){
    MinHeap mh(10);
    mh.insert(40);
    mh.insert(20);
    mh.insert(50);
    mh.insert(10);
    mh.insert(30);
    cout << "Min element: " << mh.extractMin() << endl;
    mh.decreaseKey(3, 5);
    mh.deleteKey(7);
    cout << "Min element 2: " << mh.extractMin() << endl;
    return 0;
}

//Standard library: priortity_queue<int, vector<int>, greater<int>>. 
//The greater<int> part makes it a Min-Heap else it defaults to Max-Heap