//#include<iostream>
//using namespace std;
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////静态全局变量
//static int s_g_a = 10;
////const 修饰的全局变量
//const int c_g_c = 20;
//
//int main()
//{
//	
//	//全局区
//		//全局变量  静态变量  常量
//		//全局变量
//		cout << "全局变量g_a的地址：" << (int)&g_a << endl;
//		cout << "全局变量g_b的地址：" << (int)&g_b << endl;
//		//静态变量
//		//静态局部变量
//	static int s_l_a = 10;
//	static int s_l_b = 10;
//	cout << "静态局部变量s_l_a的地址：" << (int)&s_l_a << endl;
//	cout << "静态局部变量s_l_b的地址：" << (int)&s_l_b << endl;
//	//静态全局变量
//	cout << "静态全局变量s_g_a的地址：" << (int)&s_g_a << endl;
//	//常量
//	//字符串常量  const修饰的全局变量（全局常量）  
//	cout << "字符串常量的地址：" << (int)&"asdasd" << endl;
//	cout << "const修饰的全局变量c_g_c的地址:" << (int)&c_g_c << endl;
//	//const 修饰的局部变量
//	int c_l_a = 10;
//	cout << "const修饰的局部变量c_l_a的地址:" << (int)&c_l_a << endl;
//	//局部变量
//	int l_a = 10;
//	cout << "局部变量l_a的地址：" << (int)&l_a << endl;
//
//	//总结
//	//内存中的全局区 存储全局变量、静态局部变量、
//	//静态全局变量、字符串常量、const修饰的全局变量
//
//	//指针
//	int* p;
//	cout << "指针p的地址" << (int)&p << endl;
//
//}