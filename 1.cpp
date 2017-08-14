#define MaxSize 50


typedef struct{
  ElemType data[MaxSize];
  int length;
} SqList;

ElemType DeleteSmallestElem(SqList L, ElemType e) {
  int i;
  int index = 0;
  if (L.data.length == 0) {
    printf("L is empty\n");
    return false;
  }
  ElemType smallest = L.data[0];
  for (i = 0; i < L.length; i++) {
    if (L.data[i] < smallest) {
      smallest = L.data[i];
      index = i;
    }
  }

  L.data[index] = L.data[L.data.length - 1];
  L.data.length--;
  return smallest;
}