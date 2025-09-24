
#include <unistd.h>
#include <stdlib.h>

int	count_digit(int nb)
{
	int count = 0;
	
	if (nb == 0)
	return 1;

	while (nb != 0)
	{
		count++;
	nb = nb / 10;
	}
	return count;
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int i = 0;
	long result = 0;

	while (i < digitsSize)
	{
		result = result * 10 + digits[i];
	i++;
	}

	result = result + 1;
	int lenght = count_digit(result);
	int *arr = malloc(sizeof(int) * lenght);
	if (arr == NULL)
		return NULL;
	i = lenght - 1;
	*returnSize = lenght;
	while (i >= 0)
	{
		arr[i] = result % 10;
		result = result / 10;
	i--;
	}
	return arr;
}

int main()
{
	int arr[] = {9};
	int digitsSize = 1;
	int returnSize;
	
	int *result = plusOne(arr,digitsSize,&returnSize);
	
	int i = 0;
	while (i < digitsSize)
	{
		result[i] = result[i] + '0';
		write(1,&result[i],1);
	i++;
	}
}
