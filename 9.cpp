ElemType SearchX(SqList L, ElemType x) {
  int i;

  int low = 0, high = L.length - 1;
  int mid;

  while (low <= high) {
    mid = (high + low) / 2;

    if (L.data[mid] == x) {
      break;
    }

    if (L.data[mid] < x) {
      low = mid + 1;
    }

    if (L.data[mid] > x) {
      high = mid - 1;
    }

  }

  if (low <= high) {
    if (mid != L.length - 1) {
      for (int j = mid; j < L.length - 1; j++) {
        if ()
      }
    }
  }
}

