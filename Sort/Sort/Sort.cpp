#include <iostream>
#include <string>


using namespace std;


// 버블정렬
void bubble_sort(int array[], int n) {
	int i, j, k, tmp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				for (k = 0; k < 10; k++) {
					cout << array[k] << " ";
				}
				cout << "\n";
			}
		}
	}

}

// 선택정렬
void selection_sort(int array[], int n) {
	int i, j, k, least, tmp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) {
			if (array[j] < array[least])
				least = j;
		}
		tmp = array[i];
		array[i] = array[least];
		array[least] = tmp;

		for (k = 0; k < 10; k++) {
			cout << array[k] << " ";

		}
		cout << "\n";
	}
}


// 삽입정렬
void insertion_sort(int array[], int n) {
	int i, j, k, key;
	for (i = 1; i < n; i++) {
		key = array[i];
		for (j = i - 1; j >= 0 && array[j] > key; j--) {
			array[j + 1] = array[j];
		}
		array[j + 1] = key;
		for (k = 0; k < 10; k++) {
			cout << array[k] << " ";

		}
		cout << "\n";
	}
}


// 합병정렬
//void merge(int array[], int left, int mid, int right) {
//	int i, j, k, l, m = 0;
//
//	int result[10] = { 0 };
//	i = left;
//	j = mid + 1;
//	k = left;
//
//	while (i <= mid && j <= right) {
//		if (array[i] <= array[j]) result[k++] = array[i++];
//		else result[k++] = array[j++];
//	}
//	if (i > mid)
//		for (l = j; l <= right; l++)
//			result[k++] = array[l];
//	else
//		for (l = i; l <= mid; l++)
//			result[k++] = array[l];
//
//	for (l = left; l <= right; l++)
//		array[l] = result[l];
//}
//
//void merge_sort(int list[], int left, int right)
//
//{
//	int mid;
//	if (left < right) {
//		mid = (left + right) / 2;
//		merge_sort(list, left, mid);
//		merge_sort(list, mid + 1, right);
//		merge(list, left, mid, right);
//	}
//}


// 
void sort(int*, int);
void qsort(int*, int, int);
void quick_sort(int array[], int N)
{
	qsort(array, 0, N - 1);
}

void qsort(int array[], int start, int end)
{

	if (start > end)
		return;

	int key = start;
	int i = start + 1, j = end, tmp;

	while (i <= j)
	{
		while (array[i] < array[key])
			i++;

		while (array[j] > array[key])
			j--;

		if (i > j)
		{
			tmp = array[j];
			array[j] = array[key];
			array[key] = tmp;
		}
		else
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	qsort(array, start, j - 1);
	qsort(array, j + 1, end);
}







int main(void)
{
	int i = 0;
	int array[10] = { 3,55,34,9,99,27,24,37,52,75 };
	int result[10] = { 0 };

	//bubble_sort(array,10);

	//selection_sort(array, 10);

	//insertion_sort(array, 10);

	//merge_sort(array, 0, 10);

	quick_sort(array, 10);

	for (i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}


}
