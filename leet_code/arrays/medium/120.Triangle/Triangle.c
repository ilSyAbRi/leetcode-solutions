
#include <stdio.h>

int     min_int(int *arr, int size)
{
        int     i = 0;
        int     count = arr[0];

        while (i < size)
        {
                if(count > arr[i])
                count = arr[i];
        i++;
        }

        return count;
}

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize)
{
        int     i = 0;
        int     j = 0;
        int     e = 0;
        int     count = 0;
        int     start = triangleColSize[triangleSize - 1];

        while (i < triangleSize)
        {
                j = 0;
                e = 0;
                count = count + min_int(&triangle[i][j],triangleColSize[i]);

                while (j < triangleColSize[i])
                {
                        while (e < start)
                        {
                                printf(" ");
                        e++;
                        }
                        printf("%d ",triangle[i][j]);
                j++;
                }

                printf("\n");
        start--;
        i++;
        }
        return count;
}
