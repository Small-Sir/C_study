#include <stdio.h>
#include <iostream>
 using namespace std;
 //栈区数据的注意事项  --- 不要返回一个局部变量的地址
 //栈区的数据由编译器管理开辟和释放的
 //栈区存放局部变量、函数的形参以及指针
 int* f(int b)
 {
	 b = 100;
	 int a = 10;
	 return &a;//返回局部变量的地址
 }

 int main()
 {
	 //局部变量b
	 int b=0;
	 int* p = f(b);
	 cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	 cout << *p << endl;//第二次这个数据不再被保留，所以打印乱码
	 int* a;
	 cout << "指针的地址：" << (int)&a << endl;
	 cout << "指局部变量b的地址：" << (int)&b << endl;
	 //总结 
	 //局部变量和指针的地址均在栈区
	 return 0;
 }

