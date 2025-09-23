
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	j = 0;
	arr = malloc(sizeof(int) * 2);
	if (arr == NULL)
		return NULL;
	*returnSize = 2;
	while (i < numsSize)
	{
		j = 0;
		while (j < numsSize)
		{
			if (((nums[i] + nums[j]) == target) && i != j)
			{
				arr[0] = i;
				arr[1] = j;
				return arr;
			}
			j++;
		}
		i++;
	}
	return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize ;
    int* result = twoSum(nums, 4, target, &returnSize);

    printf("Test 1:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}

