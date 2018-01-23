#include <stdio.h>


int main ()

{

    static int array[10][10];
    int i, j, m, n, a = 0, sum = 0;
	printf("order ");
	scanf("%d %d", &m, &n);

    if (m == n )

    {
        printf("Elements ");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
            }
        }

        for (i=0;i<m;i++)
        {
            sum = sum + array[i][i];
            a = a + array[i][m - i - 1];
        }
        printf("\nThe sum of the main diagonal elements is = %d\n", sum);
        printf("The sum of the off diagonal elements is   = %d\n", a);
        printf("The Total sum is = %d",a+sum);
    }

    else

        printf("The given order is not square matrix\n");
	
	return 0;
}
