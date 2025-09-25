
#include <unistd.h>
#include <stdlib.h>

int	check_all_number(int *digit, int size)
{
	int i = 0;
	while (i < size)
	{
		if (digit[i] != 9)
			return 0;
	i++;
	}
	return 1;
}

int	allocate_int(int **arr, int *digits, int digitsSize)
{
	
        if (check_all_number(digits,digitsSize))
        {
                *arr = malloc(sizeof(int) * (digitsSize + 1));
                if (*arr == NULL)
                *arr =  NULL;
		return 1;
        }

	*arr = malloc(sizeof(int) * digitsSize);
		if (*arr == NULL)
		*arr = NULL;

	return 0;
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int	i = 0;
	int	track = 1;
	int	*arr;

	int size = allocate_int(&arr,digits,digitsSize);
	if (arr == NULL)
		return NULL;
	
	*returnSize = digitsSize + size;
	i = (digitsSize + size) - 1;
	digitsSize = digitsSize - 1;
	
	while (i >= 0)
	{
		if (track == 0 && digitsSize >= 0)
			arr[i] = digits[digitsSize];

		if (track == 1 && i > 0)
		{
			arr[i] = digits[digitsSize] + 1;
			if (arr[i] == 10)
			{
				arr[i] = 0;
				if (digitsSize != 0)
					arr[i - 1] = digits[digitsSize - 1] + 1;
				else
					arr[i - 1] = 1;
			}
			else
				track = 0;
		}
	i--;
	digitsSize--;
	}
	return arr;
}

int main()
{
	int arr[] = {9,9,9,9};
	int digitsSize = 4;
	int returnSize;
	
	int *result = plusOne(arr,digitsSize,&returnSize);
	if (result == NULL)
		return 1;
	int i = 0;
	while (i < digitsSize + 1)
	{
		result[i] = result[i] + '0';
		write(1,&result[i],1);
	i++;
	}
	free(result);
}
