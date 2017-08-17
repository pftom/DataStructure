#include <iostream>
#include <cstdio>

using namespace std;

int main() {

  int p, L;

  int arr[10];

  scanf("%d", &L);

  for (int i = 0; i < L; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &p);

  int arrPlus[p];

  for (int i = 0; i < p; i++) {
    arrPlus[i] = arr[i];
  }

  int cnt = 0;
  for (int i = p; i < L; i++) {
    arr[cnt++] = arr[i];
  }

  puts("");
  for (int i = 0; i < L - p; i++) {
    printf("%4d", arr[i]);
  }
  puts("");


  cnt = 0;
  for (int i = L - p; i < L; i++) {
    arr[i] = arrPlus[cnt++];
  }

  for (int i = 0; i < L; i++) {
    printf("%3d", arr[i]);
  }

  

  return 0;
}
