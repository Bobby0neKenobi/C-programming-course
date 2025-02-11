#include<stdio.h>
#include<limits.h>
#define COL(A) "|%-3s"A"%-3s"
#define MAINROW(A, B, C, D, E, F, G) printf(COL("%-13s")COL("%s")COL("%s")COL("%-19s")COL("%-20s")COL("%s")COL("%-20s")"|\n", " ", A, " ", " ", B, " ", " ", C, " ", " ", D, " ", " ", E, " ", " ", F, " ", " ", G, " ");
#define ROW(A, B, C, D, E, F, G) printf(COL("%-13s")COL("%%%-13s")COL("%-5zu")COL("%-19"B)COL("%-20"B)COL("%%%-15s")COL("%-20"F)"|\n", " ", A, " ", " ", B, " ", " ", C, " ", " ", D, " ", " ", E, " ", " ", F, " ", " ", G, " ");
int main(){
    printf("+-------------------+--------------------+-----------+-------------------------+--------------------------+----------------------+--------------------------+\n");
    MAINROW("name", "format(signed)", "bytes", "max(signed)", "min(signed)", "format(unsigned)", "max(unsigned)");
    printf("+-------------------+--------------------+-----------+-------------------------+--------------------------+----------------------+--------------------------+\n");
    ROW("int", "d", sizeof(int), INT_MAX, INT_MIN, "u", UINT_MAX);
    ROW("short int", "hd", sizeof(short int), SHRT_MAX, SHRT_MIN, "hu", USHRT_MAX);
    ROW("long int", "ld", sizeof(long int), LONG_MAX, LONG_MIN, "lu", ULONG_MAX);
    ROW("long long int", "lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "llu", ULLONG_MAX);
    printf("+-------------------+--------------------+-----------+-------------------------+--------------------------+----------------------+--------------------------+\n");
}