ElemType DeleteBetweenSAndT(SqList L, ElemType s, ElemType t) {
  if (L.data.length == 0) {
    printf("L is empty!");
    return false;
  }

  if (s > t) {
    printf("s must smaller than t");
    return false;
  }

  int i;
  int cnt = 0;
  int len = L.data.length;
  ElemType arr[len];

  for (i = 0; i < len; i++) {
    ElemType data = L.data[i];
    if (data <= s || data >= t) {
      arr[cnt++] = data;
    }
  }

  L.data = arr;
  return L;
}