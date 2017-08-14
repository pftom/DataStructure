ElemType DeleteAllX(SqList L, ElemType x) {
  int i;
  int len = L.data.length;
  ElemType arr[len];
  int cnt = 0;

  for (i = 0; i < len; i++) {
    if (L.data[i] != x) {
      arr[cnt++] = L.data[i];
    }
  }

  L.data = arr;
  return L;
}