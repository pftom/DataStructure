#include <iostream>
#include <cstdio>

using namespace std;


int searchMidNum(int n, int arr1[], int arr2[]) {
  int l1 = 0, r1 = n - 1, l2 = 0, r2 = n - 1;

  int mid1 = 0, mid2 = 0;

  while (l1 != r1 || l2 != r2) {
    mid1 = (l1 + r1) / 2;
    mid2 = (l2 + r2) / 2;

    if (arr1[mid1] == arr2[mid2]) {
      return arr1[mid1];
    }

    if (arr1[mid1] < arr2[mid2]) {
      if ((l1 + r1) % 2 == 0) {
        l1 = mid1;
        r2 = mid2;
      } else {
        l1 = mid1 + 1;
        r2 = mid2;
      }
    }

    if (arr1[mid1] > arr2[mid2]) {
      if (mid1 % 2 == 0) {
        r1 = mid1;
        l2 = mid2;
      } else {
        r1 = mid1 - 1;
        l2 = mid2;
      }
    }

  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr1[n], arr2[n];

  for (int i = 0; i < n; i++) {
    scanf("%d%d", &arr1[i], &arr2[i]);
  }

  int res = searchMidNum(n, arr1, arr2);

  printf("%d\n", res);

  return 0;
}