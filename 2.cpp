ElemType ReverseList(SqList L) {

  int i;

  int len = L.data.length;
  ElemType mid;

  for (i = 0; i < len / 2; i++) {
    mid = L.data[i];
    L.data[i] = L.data[len - i - 1];
    L.data[len - i - 1] = mid;
  }

  return L;
}