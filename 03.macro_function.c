#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MAX1(a, b) a > b ? a : b

#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f')
// 多行宏加反斜杠换行


int Max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int maxx = MAX1(2, MAX1(4, 5));
  int max = MAX(1.0, 3);
  int max2 = MAX(1, MAX(3, 4));

  int max3 = Max(1, Max(3, 4));

  int max4 = MAX(max++, 5);


  printf("max: %d\n", max);  // 4
  printf("max2: %d\n", max2);  // 4
  printf("max4: %d\n", max4);  // 5

  printf("is A a hex character? %d\n", IS_HEX_CHARACTER('A'));
  return 0;
}
