#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int radius;
    scanf_s("%d", &radius);
    int row, j;
    for (row = 0; row <= 2 * radius; row++)
    {
        for (j = 0; j <= 2 * radius; j++)
        {
            double distance = sqrt((row - radius) * (row - radius) + (j - radius) * (j - radius));
            if (distance > radius - 0.5 && distance < radius + 0.5)
            {
                printf("[]");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}