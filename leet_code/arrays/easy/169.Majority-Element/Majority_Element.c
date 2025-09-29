
//#include <stdio.h>

int	count_duplicat(int *nums , int size , int nb)
{
	int	i = 0;
	int	count = 0;

	while (i < size)
	{
		if (nums[i] == nb)
		count++;
	i++;
	}
	return count;
}

int majorityElement(int* nums, int numsSize) {
	
	int	i;
	int	count;
	int	keep;

	keep = 0;
	count = 0;
	i = 0;
	while (i < numsSize)
	{
		if (keep != nums[i])
			if (count_duplicat(nums,numsSize,nums[i]) > count)
			{
				count = count_duplicat(nums,numsSize,nums[i]);
				keep = nums[i];
			}
	i++;
	}
	return keep;
}

/*int main()
{
	int	arr[] = {3,2,3};
	printf("%d\n",majorityElement(arr,3));
}*/
