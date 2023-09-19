#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    int ticket[3];
    int favorite_ticket[1000];
    for (int i = 0; i < 1000; i++)
    {
        favorite_ticket[i] = -1;
    }
    int favorability;
    int flag = 0;
    int current_f = 100000;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &ticket[0], &ticket[1], &ticket[2]);
        favorability = ticket[0] * ticket[1] + (10 - ticket[2]) * 70;
        if (favorability == current_f)
        {
            flag++;
            favorite_ticket[flag] = i + 1;
        }
        else if (favorability < current_f)
        {
            current_f = favorability;
            for (int i = 0; i <= flag; i++)
            {
                favorite_ticket[i] = -1;
            }
            favorite_ticket[0] = i + 1;
            flag = 0;
        }
    }
    int k = 0;
    while (favorite_ticket[k] != -1)
    {
        printf("%d ", favorite_ticket[k]);
        k++;
    }

    return 0;
}
