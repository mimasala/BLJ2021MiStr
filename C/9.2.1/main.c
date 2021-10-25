#include <stdio.h>
#include <time.h>

const int SIZE = 5000;


int main(int argc, char **argv)
{
    // HIER SIND DIE PROBLEMSTELLUNGEN AUS KAPITEL 9.2.1 ZU LOESEN!
    int zahlen[SIZE];
    int seed = 1000;
    int rand = -47;
    for (int i = 0; i < SIZE; i++)
    {
        rand = (rand * 381 + 1) % seed;
        zahlen[i] = rand;
    }

    int sizeArr = (sizeof(zahlen) / sizeof(int)) - 1;
    int counter = 0;
    int found = 0;
    int found2 = 0;
    int currentSmallest;
    int currentBiggest;
    for (int i = 1; i <= sizeArr; i++)
    {
        if (zahlen[i] == 3)
        {
            counter++;
        }
        if (zahlen[i] == 758)
        {
            if (!found)
            {
                found = i;
            }
        }
        if (zahlen[i] == 900)
        {
            if (!found2)
            {
                found2 = i;
            }
        }
        if (zahlen[i] > currentBiggest)
        {
            currentBiggest = zahlen[i];
        }
        if (zahlen[i] < currentSmallest)
        {
            currentSmallest = zahlen[i];
        }
    }
    printf("3 ist %d mal vorgekommen\n", counter);
    printf("758 ist zuerst beim Index %d vorgekommen\n", found);
    printf("900 ist zuerst beim Index %d vorgekommen\n", found2);

    printf("Smallest found: %d\n", currentSmallest);
    printf("Biggest found: %d\n", currentBiggest);
}