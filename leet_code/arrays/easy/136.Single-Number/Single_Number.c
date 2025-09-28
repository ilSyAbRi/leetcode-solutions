//#include <stdio.h>

int dup_nb(int nb , int *nums, int numsSize)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < numsSize)
	{
		if (nb == nums[i])
		count++;
	i++;
	}
	return count;
}

int singleNumber(int* nums, int numsSize)
{
	int i = 0;
	
	while (i < numsSize)
	{
		if (dup_nb(nums[i],nums,numsSize) == 1)
		return nums[i];
	i++;
	}
	return -1;
}

/*int main()
{
	int arr[] = {2,2,1};
	int numsSize = 3;
	printf("%d\n",singleNumber(arr,numsSize));
}*/
