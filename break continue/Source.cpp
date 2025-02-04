﻿#include <iostream>

using namespace std;

int main()
{
	// При работе с циклами возникает необходимость искусственно прервать выполнение цикла. Для 
	// этого используется оператор break. Этот оператор должен находиться в теле цикла, в том месте, 
	// где необходимо сделать остановку.

	// Оператор break может быть использован либо в цикле, либо в операторе switch. Любое другое 
	// размещение приводит к ошибке на этапе компиляции.
	int nCount = 0;

	while (true)
	{
		if (nCount == 10)
		{
			break;
		}
		cout << '*';
		nCount++;
	}

	cout << endl;

	int number;
	int i = 0;
	while (i < 5)
	{
		cout << "\nEnter a number at the range 1 .. 31\n";
		cin >> number;
		if (number < 1 || number > 31)
		{
			cout << "\nIncorrect input!\n";
			break;
		}
		cout << char(number);
		i++;
	}


	// Оператор continue используется для прерывания текущей итерации цикла и осуществления перехода 
	// на следующую итерацию. В ряде случаев такие действия являются необходимыми. Если выполняется 
	// оператор continue, то в зависимости от вида цикла происходит следующее:
	// Циклы while и do while останавливают выполнение итерации и переходят к проверке условия.
	// Цикл for также останавливает выполнение текущей итерации. Однако, сначала переходит к изменению 
	// управляющей переменной, а затем уже к проверке условия.

	// Вывод всех нечетных чисел, в диапазон от 0 до 10.
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << ' ';
	}

	cout << endl;

	i = 0;
	while (i < 5)
	{
		cout << "\nEnter a number at the range 1 .. 31\n";
		cin >> number;
		if (number < 1 || number > 31)
		{
			cout << "\nIncorrect input!\n";
			continue;
		}
		cout << char(number);
		i++;
	}

	return 0;
}