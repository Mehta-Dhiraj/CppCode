#include <iostream>
using namespace std;

int oddOccurance(int[], int);

int main() {
    int arr[100], len;
    cout << "Enter the number of elemets\n";
    cin >> len;
    cout << "Enter the elements\n";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    
    cout << endl <<oddOccurance(arr, len);
    
    return 0;
}
int oddOccurance(int arr[], int len) {
    for (int i = 0; i < len; i++) {

        int count = 0;

        for (int j = 0; j < len; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}
