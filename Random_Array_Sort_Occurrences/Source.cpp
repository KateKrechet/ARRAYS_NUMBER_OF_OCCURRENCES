#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int arr[size];
	srand(time(NULL));
	//������������ ������� ��������� �����, ������������ ������� �� 0 �� 10
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	//����� ������� �� �����

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;

	//������������� ������, ����� ����� ������� ����������
	int buffer = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;

			}

			//cout << arr[j] << "\t";
		}
		//cout << endl;
	}

	//�������  ���������� ���������� ��� ������� ���������� ��������� ��������, �������, ���� ������ 1 ���������
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j] && arr[i] != arr[i + 1]) counter++;
		}

		if (counter > 1)cout << endl << "������������� �������: " << arr[i] << " ���������� ����������: " << counter;
		counter = 0;
	}
	cout << endl;

}