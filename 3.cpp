#include <iostream>

#include <cstdio>

using namespace std;

// int main() {
//   int n, x;
//   scanf("%d%d", &n, &x);

//   int arr[n];

//   for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//   }

//   int lastIndex = 0;
//   int cnt = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != x) {
//       arr[lastIndex] = arr[i];
//       lastIndex++;
//     } else {
//       cnt++;
//     }
//   }

//   for (int i = 0; i < n - cnt; i++) {
//     printf("%3d", arr[i]);
//   }

//   return 0;
// }

int main() {
  int n, x;
  scanf("%d%d", &n,&x);

  int arr[n];

  int i = 0;

  for (; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  i = 0;
  int k = 0;
  while (i < n) {
    if (arr[i] == x) {
      k++;
    } else {
      arr[i - k] = arr[i];
    }
    i++;
  }

  i = 0;
  while (i < n - k) {
    printf("%3d", arr[i]);
    i++;
  }

  return 0;
}