ElemType MergeTwoList(SqList L, SqList N) {
  int lenL = L.data.length;
  int lenN = N.data.length;

  if (lenL == 0) {
    return N;
  }

  if (lenN == 0) {
    return L;
  }

  ElemType arr[lenL + lenN];
  int cnt = 0;

  int i = 0, j = 0;
  while (i < lenL && j < lenN) {
    ElemType dataL = L.data[i];
    ElemType dataN = N.data[j];
    if (dataL < dataN) {
      arr[cnt++] = dataL;
      i++;
    } else {
      arr[cnt++] = dataN;
      j++;
    }
  }

  if (i == lenL) {
    for (int k = j; k < lenN; k++) {
      arr[cnt++] = N.data[k];
    }
  }

  if (j == lenN) {
    for (int k = i; k < lenL; k++) {
      arr[cnt++] = L.data[k];
    }
  }

  L.data = arr;
  L.length = cnt;
  return L;
}