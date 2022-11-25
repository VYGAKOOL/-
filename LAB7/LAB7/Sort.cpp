#include"Header.h"
void Countingsort(int* arr, int k, int size) {
	int* temparr = new int[k];
	for (int i = 0; i < k; i++) {
		temparr[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		temparr[arr[i] - 1]++;
	}
	for (int i = 0, j = 0; j < k;) {
		if (temparr[j] != 0) {
			arr[i] = j + 1;
			temparr[j]--;
			i++;
		}
		else {
			j++;
		}
	}
}
void Radixsort(int* arr, int size, int d) {

	list<int> temparr[10];
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < size; j++) {
			int temp = (arr[j] / pow(10, i));
			temp %= 10;
			temparr[temp].push_back(arr[j]);
		}
		for (int l = 0, m = 0; m < 10;) {
			if (temparr[m].size() != 0) {
				arr[l] = *temparr[m].begin();
				temparr[m].pop_front();
				l++;
			}
			else {
				m++;
			}
		}

	}
}
void Show(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool Try(int index, int N) {
	int help = index / pow(10, N - 1);
	if (help != 0 && help < 10) {
		return true;
	}
	else {
		return false;
	}

}