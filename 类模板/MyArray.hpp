//�Լ�ͨ��������
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:

	//�вι���
	MyArray(int capacity)
	{
		cout << "�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		cout << "�����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;
		//���
		this->pAddress = new T[arr.m_Capacity];

		//��arr�����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		//��arr�����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨
	void Push_Back(const T& value)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
			return;
		this->pAddress[this->m_Size] = value;
		this->m_Size++;
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�أ��߼�ɾ��
		if (this->m_Size = 0)
			return;
		this->m_Size--;
	}

	//ͨ���±귽ʽ��������Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		cout << "������������" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:

	T* pAddress;	//ָ��ָ�����

	//��������
	int m_Capacity;

	//�����С
	int m_Size;

};