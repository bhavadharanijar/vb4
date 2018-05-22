#include <iostream.h>
using namespace std;

int frtNRep(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		int j;
		for (j=0; j<n; j++)
			if (i != j && a[i] == a[j])
				break;
		if (j == n)
			return a[i];
	}
	return -1;
}


int main()
{
	int a[] = { 9, 4, 9, 9, 4, 3};
	int n = sizeof(a) / sizeof(a[0]);
	cout << frtNRep(a,n);
	return 0;
}
