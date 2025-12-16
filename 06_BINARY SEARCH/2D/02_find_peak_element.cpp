#include <bits/stdc++.h>
using namespace std;

int peakEle(int arr[][100], int n, int m) {
    int low = 0, high = m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int maxRow = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i][mid] > arr[maxRow][mid])
                maxRow = i;
        }

        int left  = (mid > 0) ? arr[maxRow][mid - 1] : -1;
        int right = (mid < m - 1) ? arr[maxRow][mid + 1] : -1;

        if (arr[maxRow][mid] > left && arr[maxRow][mid] > right) {
            return arr[maxRow][mid];
        }
        else if (left > arr[maxRow][mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int m;
    cout << "Enter columns: ";
    cin >> m;

    int arr[n][100];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int r = peakEle(arr, n, m);
    cout << "Peak element: " << r << endl;

    return 0;
}
