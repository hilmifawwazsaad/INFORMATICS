/*
Nama    : Hilmi Fawwaz Sa'ad
NRP     : 5025221103
Kelas   : Matematika Diskrit (B)
Build   : 31 Oktober 2023, 00:23
*/

#define i int
#include <stdio.h>
#include <string.h>

i rekursive(i a[], i b[], i size, i maks, i inmax)
{
    if (size < 1)
        return inmax;
    b[a[size - 1]]++;
    if (b[a[size - 1]] > maks)
    {
        maks = b[a[size - 1]];
        inmax = a[size - 1];
    }
    rekursive(a, b, size - 1, maks, inmax);
}

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
    i num[] = {10, 20, 8, 15, 30, 40, 7, 7, 8, 8, 8}; // diganti sesuai kebutuahn, pastikan ada angka yang muncul lebih dari 1 kali
    printf("Array\t: ");
    i len = sizeof(num) / sizeof(num[0]);
    for (i o = 0; o < len; o++)
    {
        printf("%d ", num[o]);
    }
    printf("\n");

    i size = recursive(len, num);
    i b[size + 1];
    memset(b, 0, sizeof(b));
    printf("Mode\t: %d", rekursive(num, b, len, 0, -1));
}
