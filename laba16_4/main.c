#include <stdio.h>
#include <stdbool.h>

void main() {

	//типізація, масив, розмір масиву, для циклів і допоміжні зміні для пошуку суми діагоналей
	bool odd_cycle_number = true;
	int i = 0, j = 0, g = 0, height, width;
	int array[10][10];

	// введення розміру масиву (висота)
	printf("enter height of array, a positive integer is more than 0 and less than 11: ");
	scanf_s("%d", &height);

	// введення розміру масиву (ширина)
	printf("enter width of array, a positive integer is more than 0 and less than 11: ");
	scanf_s("%d", &width);

	//розділення рядків
	printf("\n");

	//перевірка чи коректні значення (вихід за масив)
	if (0 < height && height < 11 && 0 < width && width < 11)
	{

		//цикл для розташування елементів "змійкою"
		for (i = 0; i < height; i++)
		{
			//перевірка чи неперне коло циклу (1,3,5...)
			if (odd_cycle_number)
			{
				//пареметри для запису чисел з ліва на право
				for (j = 0; j < width; j++) 
				{
					array[i][j] = g;
					g++;
				}

				//надати зміній значення хиба (парність циклу)
				odd_cycle_number = false;

			}

			//інакше парне коло циклу (2,4,6...)
			else
			{
				//пареметри для запису чисел з ліва на право
				for (j = (width - 1); j >= 0; j--)
				{
					array[i][j] = g;
					g++;
				}

				//надати зміній значення істина (непарність циклу)
				odd_cycle_number = true;

			}

		}

		//вивід масиву
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				//до трьох цифр (так як максимальний масив 0-99)
				printf("%3d", array[i][j]);
			}

			//роздільний рядок
			printf("\n");

		}

	}

	//порушення умови, вихід за масив
	else
	{
		//вивести помилка 
		printf("False, more than 10 or less then 0");
	}

	//повернення 0
	return 0;

}