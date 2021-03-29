#include <stdio.h>
#include <stdarg.h>

// "Hello ""world" ==> "Hello world"
// __FILE__
// __LINE__
// __FUNCTION__          // 预编译时不存在，只有在编译时才存在
// (../05.printlnf.c:20) main :
void Println(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

// 方法2使用宏  可以使用变长参数
#define PRINTLN(format, ...) \
printf(format"\n", ##__VA_ARGS__)

//实现需求 PRINT_INT(value) => value: 2
#define PRINT_INT(value) PRINTLN(#value": %d", value)

// 实现一个plus打印函数
#define PRINTLN_PLUS(format, ...) printf("("__FILE__":%d) %s: "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)

int main() {
  int value = 2;
  int x = 3;
  Println("Hello World! %d", 2);
  PRINTLN("Hello World! %d", 3);
  PRINTLN("Hello World!");

  PRINT_INT(value);
  PRINT_INT(x);
  PRINT_INT(3 + 4);

  PRINTLN_PLUS("Hello World! %d", 3);
  PRINTLN_PLUS("Hello World!");

  return 0;
}
