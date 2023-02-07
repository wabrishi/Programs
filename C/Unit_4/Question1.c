#include <stdio.h>
struct h
{
    char name[30];
    char add[20];
    char gra;
    int chr;
    int room;
};
int hotel();
struct h s[] = {
    {"Hotel 1", "Ghaziabad", 'A', 1600, 167},
    {"Hotel Moon Rocket", "Noida", 'B', 850, 150},
    {"Tropicana Casino & Resort", "Delhi", 'C', 450, 50},
    {"Rajavir Palace & Resort", "Surajpur", 'A', 1250, 50},
};
int main()
{
    int i;
    char c;
    for (i = 0; i <= 3; ++i)
    {
    }
    printf("Total Number on Hotel: %d", i);
    hotel();
    return 0;
}

int hotel()
{
    int i, k;
    char c;
    printf("\nSHOW HOTEL ROOM CHRGES LESS THAN:");
    scanf("%d", &k);
    for (i = 0; i <= 3; ++i)
    {
        if (s[i].chr <= k)
        {
            printf("\n %d.HOTEL NAME:%s", i + 1, s[i].name);
            printf("\nADDRESH:%s", s[i].add);
            printf("\nGRADE:%c", s[i].gra);
            printf("\nCHARGES:%d", s[i].chr);
            printf("\nNO.OF ROOM:%d", s[i].room);
        }
    }
}