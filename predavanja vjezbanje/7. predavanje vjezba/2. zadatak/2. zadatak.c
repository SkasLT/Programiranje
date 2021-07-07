#include <stdio.h>
int main(void)
{
    int i, j, br = 0;
    float x[2][3] = {[0][1] = 1.5f, [1][2] = -1.5f};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            if (x[i][j] >= -1 && x[i][j] <= 1.5)
                br++;
    }
    printf("\nbr = %d", br);
    return 0;
}