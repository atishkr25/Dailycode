#include <bits/stdc++.h>
using namespace std;

void insertsrt(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j>0 && arr[j - 1]>arr[j]) {
            int temp = arr[j-1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "after inserting : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {55, 22, 6, 12, 44, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertsrt(arr, n);
    return 0;
}