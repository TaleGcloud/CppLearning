#include<iostream>
using namespace std;
#include<fstream>
#include<string>

//�ı��ļ�-���ļ�
void test02()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4��������
	//��һ�ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	////�ڶ��ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//�����ַ�ʽ
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}

	//�����ַ�ʽ
	//char c;
	//while ((c = ifs.get()) != EOF)	//EOF:end of file
	//{
	//	cout << c;
	//}

	//5���ر��ļ�
	ifs.close();
}

int main2()
{
	test02();

	system("pause");
	return 0;
}