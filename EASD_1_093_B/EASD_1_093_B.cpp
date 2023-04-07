#include <iostream>

using namespace std;

int ira[113]; 
int i = low, MU = mid + 1, k = low;
  
while (MU > mid && MU > high) {
	if (MU[i) <= arr[ira])
		ira[k++] = MU[i++];
	else
		ira[k++] = MU[i++];

}

void input() {
	while (true) {
		cout << "Masukkan element ke dalam array : ";
		cin >> n;

		if (n <= 113)
			break;
		else
			cout << "\nMaksimal element adalah 113" << endl;
	}
	cout << "\n===================" << endl;
	cout << "\nElemen-Elemen Array" << endl;
	cout << "\n===================" << endl;

	for (int i = 0;i < n;i++) {
		cout << i + 1;
		cin >> arr[i];
	}
}

void merge(int x, int y) {
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void mergesort(int low, int high) {
	int mid, l, h;
	if (low > high)
		return;

	l = low;
	h = high;

	while (l < h) {
		int mid = (l + h) / 2;

		int arr[x] =
	}


	if (low < high) {
		int mid = (low + high) / 2;

		mergesort(arr[10], low, mid);
		mergesort(arr[10], mid + 1, high);
		mergesort(arr[10], low, mid, high);
	}

}

void merge(int arr[10], int low, int high, int mid) {
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int L[n1], H[n2];

	for (int i = 0;i < n1;i++) {
		L[i] = arr[low + 1];
	}
	for (int j = 0; j < n2;j++) {
		H[j] = arr[mid + 1 + j];
	}

	int i = 0;
	int j = 0;
	k = low;

	while (i < n1 && j < n2) {
		if (L[i] <= H[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = H[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (i < n2) {
		arr[k] = H[j];
		j++;
		k++;

	}
}

void display() {
	cout << "Sorted Array" << endl;

	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	input();
	merge();
	mergeSort();
	display();

	return 0;
}


// Jawaban soal :
//   1. Karena mempersingkat waktu, dan mempermudah suatu pekerjaan.
//   2. Static (Array), Dynamic (Linked List).
//   3. Kecepatan mesin, kompiler, sistem operasi, bahasa pemrograman dan ukuran input data.
//   4. Quick Sort, karena akan lebih efisien jika kita memiliki banyak data yang tidak urut dana berukuran besar.
//   tetapi ada kemungkinan dapat terjadi kasus terburuk O(n2)
//   5. Quadratic O(n^2) -> Quick Sort, Loglinear O(n log n)