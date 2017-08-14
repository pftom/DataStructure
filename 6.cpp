ElemType DeleteRep(SqList L) {
  int i;
  int len = L.data.length;
  int total = 0;
  ElemType arr[len];
  bool flag = false;

  for (i = 0; i < len; i++) {
    for(int j = 0; j < total; j++) {
      if (arr[j] == L.data[i]) {
        flag = true;
      }
    }

    if (!flag) {
      arr[total++] = L.data[i];
    }

    flag = false;
  }

  L.data = arr;

  return L;
}