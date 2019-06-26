#include <cstdio>
#include <algorithm>
using namespace std;

int A[100000];

void merge(int A[], int first, int mid, int last);
void mergesort(int A[], int first, int last);
int BinarySearch(int find, int low, int high);

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	mergesort(A, 0, N - 1);

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int temp;
		scanf("%d", &temp);
		printf("%d\n", BinarySearch(temp, 0, N - 1));
	}
}

int BinarySearch(int find, int low, int high)
{
	if (low > high) return 0;

	int mid = (low + high) / 2;

	if (A[mid] > find)
		return BinarySearch(find, low, mid - 1);
	else if (A[mid] < find)
		return BinarySearch(find, mid + 1, high);
	else
		return 1;
}


void merge(int A[], int first, int mid, int last)
{
	int left = first;
	int right = mid + 1;
	int p = first;

	int buf[100001] = { 0 };

	while (left <= mid && right <= last) {
		if (A[left] < A[right]) {
			buf[p++] = A[left++];
		}
		else {
			buf[p++] = A[right++];
		}
	}

	if (left <= mid) {
		while (left <= mid) {
			buf[p++] = A[left++];
		}
	}
	else {
		while (right <= last) {
			buf[p++] = A[right++];
		}
	}

	for (int i = first; i <= last; i++) {
		A[i] = buf[i];
	}
}

void mergesort(int A[], int first, int last)
{
	if (first < last) {
		int mid = (first + last) / 2;
		mergesort(A, first, mid);
		mergesort(A, mid + 1, last);
		merge(A, first, mid, last);
	}
}