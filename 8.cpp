ElemType ExchangeTwoList(ElemType A[], int m, int n) {
  int cnt = 0;
  ElemType arr[m + n];
  int i;

  for (i = m; i < m + n; i++) {
    arr[cnt++] = A[i];
  }

  for (i = 0; i < m; i++) {
    arr[cnt++] = A[i];
  }

  return arr;
}