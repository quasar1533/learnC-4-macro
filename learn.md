## 编译器宏的重要型
* 有了宏，在预编译阶段可以展开，于是只要有函数原型，就可以在文件中任意调用函数

* gcc预编译命令   gcc -E ./01.file_include.c -o 01.file_include.i

### 学习自定义头文件
* 自我编写的模块

* `#include`用于引入文件  “”  <> 都可以``    ""会先去本地目录搜索
* `#include` 双引号始终兼容尖括号
  同时，使用CMake文件的include_directories("include") 将可以十分方便的将库添加到工程目录中，方便尖括号直接引用。

### 宏函数
* 也即是有参数的宏
* 宏是直接替换，不会先求值，所以要小心使用，加上括号      与函数要区别一下
* 宏函数的参数、返回值类型无任何要求 很方便
  只要操作合法，适用于任何类型参数
  
### 学习条件编译
* 防止头文件被不小心引用多次
* `#ifdef   #ifndef   #if`
* 在CMake文件中可以全局定义宏（整个工程项目范围）

### 写一个自己的printlnf函数，加深印象
* 适用于所有变长参数va_list的v开头函数

* 实现一个函数，在打印时，将该函数的所在文件、函数名、行号都打印出来
  非常使用的技巧    配合C11编译器