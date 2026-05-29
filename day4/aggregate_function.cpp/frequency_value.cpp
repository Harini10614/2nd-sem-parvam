#include<iostream>
using namespace std;

int main() {
    int arr[100],n;

    cout << "Enter number of elements:";
    cin >> n;

    //Input array elements
    cout << "Enter numbers:";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    //Find frequency
    for(int i=0;i<n;i++) {
        int count =1;

        //Skip already counted elements 
        bool alreadyCounted = false;

        for (int k=0;k<i;k++) {
            if(arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted)
            continue;

        //Count frequency
        for (int j=i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        cout << arr[i] << "appears" << count << "times" << endl;
    }
    return 0;
} 