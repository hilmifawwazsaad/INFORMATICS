/*
Nama    : Hilmi Fawwaz Sa'ad
NRP     : 5025221103
Kelas   : Matematika Diskrit (B)
Build   : 30 Oktober 2023, 23:57
*/

#define i int
#include <stdio.h>

i max(i j, i k)
{
    return j > k ? j : k;
}

i recursive(i j, i k[])
{
    if (j == 1)
        return k[0];

    return max(k[j - 1], recursive(j - 1, k));
}

i main()
{
    i num[] = {10, 20, 8, 15, 30, 40}; // diganti sesuai kebutuahn
    printf("Array\t: ");
    i len = sizeof(num) / sizeof(num[0]);
    for (i o = 0; o < len; o++)
    {
        printf("%d ", num[o]);
    }
    printf("\n");

    printf("Max\t: %d", recursive(len, num));
}
