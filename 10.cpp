#include <iostream>
#include <cstdio>

using namespace std;

int arr[10];

int* Reverse(int from, int to) {

  int mid;
  printf("from: %d, to: %d\n", from, to);

  for (int i = 0; i < (to - from + 1) / 2; i++) {
    mid = arr[from + i];
    arr[from + i] = arr[to - i];
    arr[to - i] = mid;

    printf("arr %d\n", arr[i]);
    printf("arr[to -i] %d\n", arr[to - i]);
  }

  return arr;
}

int main() {

  int p, L;
  scanf("%d", &L);

  for (int i = 0; i < L; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &p);

  Reverse(0, p - 1);

  for (int i = 0; i < 10; i++) {
    printf("%4d", arr[i]);
  }

  printf("\n");

  Reverse(p, L - 1);

  for (int i = 0; i < 10; i++) {
    printf("%4d", arr[i]);
  }

  printf("\n");

  Reverse(0, L - 1);

  for (int i = 0; i < 10; i++) {
    printf("%4d", arr[i]);
  }



  return 0;
}
