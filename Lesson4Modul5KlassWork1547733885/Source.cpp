#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson4Modul5KlassWork1547733885


void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int n = 4;
	int arr[n], i, o, s = 0;
	
	for (i = 0; i < n; i++)
	{
		arr[i] = 0 + rand() % 2;
		
		printf("%2d", arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		o = arr[i] * pow(2, i);

		s = s + o;		
	}

	printf("\n В десятичной системе : %d", s);


	

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int arr[10][10] = { 0 }, i, j, min = 0, max = 0;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = 1 + rand() % 15;

			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	for (i = 0; i < 10; i++)
	{
		min = 10;
		
		for (j = 0; j < 10; j++)
		{

			if (arr[i][j] < min)
				min = arr[i][j];	
		}

		printf("%d, ", min);

		if (min > max)
			max = min;

	}

	printf("\n\n max = %d \n\n", max);
	
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 9;

	int arr[ind][ind] = { 0 }, i, j, x1 = 0, x2 = 0, y;

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			arr[i][j] = 10 + rand() % 15;

			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Изменили разрядность элементов \n\n");

	for (i = 0; i < ind; i++)
	{
		for (j = 0; j < ind; j++)
		{
			x1 = arr[i][j] / 10;
			x2 = arr[i][j] % 10;
			y = x2 * 10 + x1;

			arr[i][j] = y;

			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}



}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);



}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5;
	int A[ind][ind] = { 0 }, count = 0, B[ind][ind] = { 0 };

	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind; j++)

		{
			A[i][j] = 10 + rand() % 40;

			printf("%d\t", A[i][j]);
		}

		printf("\n\n");

	}

	for (int k = 0; k < ind; k++)
	{
		for (int p = 0; p < ind; p++)
		{
			count = 0;

			for (int i = 0; i < ind; i++)
			{
				for (int j = 0; j < ind; j++)
				{
					if (A[k][p] == A[i][j])// && A[k][p]!=0

						count++;
				}
			}

			if (count - 1 >= 2)

			{
				for (int i = 0; i < ind; i++)
				{
					for (int j = 0; j < ind; j++)
					{
						if (A[k][p] == A[i][j])

							B[i][j] = -1;
					}
				}
			}
		}
	}

	for (int k = 0; k < ind; k++)
	{

		for (int p = 0; p < ind; p++)

		{
			if (B[k][p] == -1)

				A[k][p] = 0;
		}

	}

	printf("\n-----------------\n");

	for (int i = 0; i < ind; i++)

	{

		for (int j = 0; j < ind; j++)

		{
			printf("%d\t", B[i][j]);
		}






		printf("\n\n");

	}


}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task11()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task12()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}