#include<iostream>
#include<cstdlib>
using namespace std;

int RandomNum(int from , int to) {
	int y = (rand() % (to - from + 1)) + from;
	return y;
}

void setarrey(int z[],int NumberofElements) {
	
	for (int i = 0; i < NumberofElements; i++) z[i] = i+1;
}

void Shuffling(int arr[], int num) {
	arr[0] = RandomNum(0, num - 1);
	for (int i = 1; i < num; i++) {
		int x = RandomNum(0, num - 1);
		for (int j = 0; j < i; j++) {
			if (x == arr[j]) {
				i--;
				break;
			}
			if (j == i - 1 && x != arr[j])arr[i] = x;
		}

	}

}

void PrintArray(int arr[],int NumberofElements) {

	for (int i = 0; i < NumberofElements; i++)cout << arr[i] << "  ";
	cout << endl;
}

void shuffel(int uns[], int Sindexes[], int s[], int num) {
	for (int i = 0; i < num; i++) {
		s[Sindexes[i]] = uns[i];
	}
}

int main() {
	srand((unsigned)time(NULL));

	cout << "Enter Your Array's Length : "; int NumberofElements; cin >> NumberofElements;

	int arr[100];
	setarrey(arr, NumberofElements);
	
	cout << "The Array Is : "; PrintArray(arr, NumberofElements);
	
	
	int shuffleIndexes[100];
	Shuffling(shuffleIndexes, NumberofElements);

	
	int shuffled[100];
	shuffel(arr, shuffleIndexes, shuffled, NumberofElements);

	cout << "\n\n\n\n\nThe Shuffeled Array Is : "; PrintArray(shuffled, NumberofElements);


	return  0;
}