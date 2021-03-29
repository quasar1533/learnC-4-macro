#include <stdio.h>

/*
 * 1. #ifdef 如果定义了
 * 2. #ifndef 如果没定义
 * 3. #if 如果 ...
 *
 * #endif
 *
 *  #if defined(MACRO) <=> #ifdef MACRO
 */

// 用于判断是否运行于C++中
#ifdef __cplusplus
extern "C" {
#endif
  //......
  int Add(int left, int right);
#ifdef __cplusplus
};
#endif

void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}

int main() {
  dump("main start\n");

  printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);  // 记录C编译器版本的宏

#if __STDC_VERSION__ >= 201112
  puts("C11!!");
#elif __STDC_VERSION__ >= 199901
  puts("C99!!");
#else
  puts("maybe C90?");
#endif

  return 0;
}
