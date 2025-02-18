#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size :");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int maxy, sec_max;
    maxy = sec_max = a[0];

    for (int i = 1; i < n; i++)
    
        if (a[i] > maxy)
        {
            sec_max = maxy;
            maxy = a[i];
        }
    

    for (int i = 1; i < n; i++)
    {
        if (a[i] == maxy)
        {
            continue;
        }

        if (a[i] > sec_max)
        {
            sec_max = a[i];
        }
    }

    printf("Maximum: %d\n", maxy);
    printf("Second Maximum: %d\n", sec_max);
}
