//#include<iostream>
//using namespace std;
////ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////��̬ȫ�ֱ���
//static int s_g_a = 10;
////const ���ε�ȫ�ֱ���
//const int c_g_c = 20;
//
//int main()
//{
//	
//	//ȫ����
//		//ȫ�ֱ���  ��̬����  ����
//		//ȫ�ֱ���
//		cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
//		cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;
//		//��̬����
//		//��̬�ֲ�����
//	static int s_l_a = 10;
//	static int s_l_b = 10;
//	cout << "��̬�ֲ�����s_l_a�ĵ�ַ��" << (int)&s_l_a << endl;
//	cout << "��̬�ֲ�����s_l_b�ĵ�ַ��" << (int)&s_l_b << endl;
//	//��̬ȫ�ֱ���
//	cout << "��̬ȫ�ֱ���s_g_a�ĵ�ַ��" << (int)&s_g_a << endl;
//	//����
//	//�ַ�������  const���ε�ȫ�ֱ�����ȫ�ֳ�����  
//	cout << "�ַ��������ĵ�ַ��" << (int)&"asdasd" << endl;
//	cout << "const���ε�ȫ�ֱ���c_g_c�ĵ�ַ:" << (int)&c_g_c << endl;
//	//const ���εľֲ�����
//	int c_l_a = 10;
//	cout << "const���εľֲ�����c_l_a�ĵ�ַ:" << (int)&c_l_a << endl;
//	//�ֲ�����
//	int l_a = 10;
//	cout << "�ֲ�����l_a�ĵ�ַ��" << (int)&l_a << endl;
//
//	//�ܽ�
//	//�ڴ��е�ȫ���� �洢ȫ�ֱ�������̬�ֲ�������
//	//��̬ȫ�ֱ������ַ���������const���ε�ȫ�ֱ���
//
//	//ָ��
//	int* p;
//	cout << "ָ��p�ĵ�ַ" << (int)&p << endl;
//
//}