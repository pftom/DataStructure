#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int n;


  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int judge = arr[0], count = 0;

  for (int i = 0; i < n; i++) {
    printf("%d %d %d\n", count, judge, arr[i]);
    if (judge == arr[i]) {
      count++;
    } else {
      count--;
      if (count == 0) {
        judge = arr[i];
        count = 1;
      }
    }
  }

  count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == judge) {
      count++;
    }
  }

  printf("%d\n", count);
  if (count > n / 2) {
    printf("%d\n", judge);
  }

  return 0;
}