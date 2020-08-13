#include "sandpiles.h"
#include <stdio.h>
/*
*sandpiles_sum - Function that computes the sum of two sandpiles
*@grid1: sandpile1
*@grid2: sandpile2
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j, x, y, sum[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			sum[i][j] = grid1[i][j] + grid2[i][j];
                        printf("%d", sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
/*			printf("%d", sum[x][y]);*/

                        if (y)
                                printf(" ");
			if (sum[x][y] > 3)
			{
				sum[x][y] = sum[x][y] - 4;
				sum[x+1][y] = sum[x+1][y] + 1;
                                sum[x-1][y] = sum[x-1][y] + 1;
				sum[x][y+1] = sum[x][y+1] + 1;
				sum[x][y-1] = sum[x][y-1] + 1;
			}
			printf("%d", sum[x][y]);
		}
		printf("\n");
	}
}
