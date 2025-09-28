#include <unistd.h>
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target)
{
	int	i = 0;
	int	keep = 0;
	int	mid = (numsSize-1) /2;
	int	low = 0;
	int	high = numsSize -1;

	while (nums[mid] != target)
	{

		if (target > nums[mid])
		low = mid + 1;
		else
		high = mid - 1;
		
		if (mid == high || mid == low)
		return low;

	mid = (high + low)/2;
	}

	return mid;
}

int main()
{
	int nums[] = {1,3,5,6};
	int target = 2;
	printf("%d\n",searchInsert(nums,4,target));
}
