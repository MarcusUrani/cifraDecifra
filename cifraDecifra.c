#include <stdio.h>

int main(void)
{
    int i, j, k, n;
    char text[82];

    scanf("%d %d", &k, &n);
    getchar();
    for (i = 0; i < k; i++)
    {
        fgets(text, 82, stdin);
    }

    return 0;
}