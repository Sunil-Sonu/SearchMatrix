#include<stdio.h>
#include<malloc.h>
#include<conio.h>

int searchMatrix(int *arr, int r, int c, int key)
{
	int i = 0, j = c-1;
	while (i < r && j>=0) 
	{
			if (*(arr + i*c + j) == key) return 1;
			else if (*(arr + i*c + j) < key) i++;
			else j--;
	}
	return 0;
}
int main()
{
	int *arr, rows, columns,key;
	printf_s("Enter the Number of rows: ");
	scanf_s("%d", &rows);
	printf_s("Enter the Number of columns: ");
	scanf_s("%d", &columns);
	arr = (int **)malloc(sizeof(int *) * rows * columns);   // Single pointer allocation of the 2D-Array.
	system("cls");  // Clear the console
	printf_s("Enter the elements\n");					
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			scanf_s("%d", (arr + i*columns + j));
	system("cls");
	printf_s("Enter the key element: ");
	scanf_s("%d", &key);
	int result = searchMatrix(arr, rows, columns, key);  // Passing the array,no of rows,columns and the key value that has to be searched.
	system("cls");				
	if (result) printf_s("Element Found");
	else printf_s("Element not found");
	_getch();
	return 0;
}