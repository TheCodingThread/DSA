#include<bits/stdc++.h>
using namespace std;

int minDays(int arr[], int n, int b, int f){
    int l = 1, h = *max_element(arr, arr+n);
    int a = h;
    long long val = b*f;
    if(val > n) return -1;
    while(l<=h){
        int m = (l+h)/2;
        int nb = 0;
        for(int i=0; i<n-(f-1); i++){
            if(arr[i]<=m){
                int nf = 1;
                for(int j=i+1; f>1; j++){
                    if(arr[j]<=m){
                        nf++;
                        if(nf == f){
                            nb++;
                            if(nb == b) {
                                h = m-1;
                                a = min(a, m);
                                break;
                            }
                            i+=(f-1);
                            break;
                        }
                    }
                    else break;
                }
                if(f==1){
                    nb++;
                    if(nb == b) {
                        h = m-1;
                        a = min(a, m);
                    }
                }
            }
        }
        if(nb != b) l = m+1;
    }

    return a;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int b;
    cout << "Enter the number of bouquets: ";
    cin >> b;

    int f;
    cout << "Enter the number of flowers in each bouquet: ";
    cin >> f;

    int r = minDays(arr, n, b, f);
    cout << "Minimum days to make " << b << " bouquets: " << r << endl;

    return 0;
}