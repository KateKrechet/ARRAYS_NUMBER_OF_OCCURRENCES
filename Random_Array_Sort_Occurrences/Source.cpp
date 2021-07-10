#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int arr[size];
	srand(time(NULL));
	//формирование массива случайных чисел, заполненного цифрами от 0 до 10
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	//вывод массива на экран

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;

	//упорядочиваем массив, чтобы потом считать повторения
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

	//считаем  количество повторений для каждого последнего вхождения элемента, выводим, если больше 1 вхождения
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j] && arr[i] != arr[i + 1]) counter++;
		}

		if (counter > 1)cout << endl << "Повторяющийся элемент: " << arr[i] << " количество повторений: " << counter;
		counter = 0;
	}
	cout << endl;

}