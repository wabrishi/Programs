#include <stdio.h>
struct Cricket
{
    char p_name[30];
    char t_name[20];
    float avg;

};
int Show();
struct Cricket s[] = {
    {"P 1", "T 1", 120},
    {"P 2", "T 2", 234},
    {"P 3", "T 3", 90},
    {"P 4", "T 4", 76},
};
int main()
{
    int i;
    char c;
    for (i = 0; i <= 3; ++i)
    {
    }
    printf("Total Number on Hotel: %d", i);
    Show();
    return 0;
}

int Show()
{
    int i, k;
    char c;
    for (i = 0; i <= 3; ++i)
    {
        printf("\n %d.Player Name:%s", i + 1, s[i].p_name);
        printf("\nTeam Name:%s", s[i].t_name);
        printf("\nAvg. Run:%2f", s[i].avg);

    }
}