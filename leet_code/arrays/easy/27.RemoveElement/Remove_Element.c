
void	ft_swap(int *n1 , int *n2)
{
	int	temp = 0;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void	ft_sort(int *nums , int numsSize, int val)
{
	int	i;
	int	j;

	i = 0;
	while (i < numsSize)
	{
		j = 0;
		while (j < numsSize)
		{
			if (nums[j] == '_')
			ft_swap(&nums[j],&nums[i]);
		j++;
		}
	i++;
	}
}

int removeElement(int* nums, int numsSize, int val)
{
	int	i = 0;
	int	count = 0;
	while (i < numsSize)
	{
		if(nums[i] == val)
		nums[i] = '_';
		else
			count++;
	i++;
	}
	ft_sort(nums,numsSize,val);
	return count;
}
