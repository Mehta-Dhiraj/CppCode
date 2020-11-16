#include<iostream>
using namespace std;

int main() {

	int arr1[3][3], arr2[3][3], result[3][3], i, j, k, sum;

	cout << "Enter the 9 elements for first matrix\n";

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}
	}

	cout << "Enter the 9 elements for Second matrix\n";

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cin >> arr2[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum = 0;
			for (k = 0; k < 3; k++) {
				sum = sum + arr1[i][k] * arr2[k][j];			
			}
			result[i][j] = sum;
		}
	}


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}