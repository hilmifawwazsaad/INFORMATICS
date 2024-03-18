/*
Nama    : Hilmi Fawwaz Sa'ad
NRP     : 5025221103
Kelas   : Matematika Diskrit (B)
Build   : 31 Oktober 2023, 01:14
*/

#define i int
#include <stdio.h>

i fpb(i j, i k)
{
    if (j == 0) return k;
    else
    {
        if (j < k - j) return fpb(j, k - j);
        else return fpb(k - j, j);
    }
}

i main()
{
    i j = 10, k = 15; //diganti sesuai kebutuhan (pastikan j < k)
    printf("FPB dari %d dan %d = %d", j, k, fpb(j, k));
}