#include <stdlib.h>
#include <stdio.h>

int main() {
  int num = 10,son;
  char binaryStr[8],sonuc[8];
  son = num >> 2;
  itoa(num, binaryStr, 2);
  itoa(son,sonuc,2);
  printf("%d %s >> 1 : %d %s",num, binaryStr,son,sonuc);
  return 0;
}