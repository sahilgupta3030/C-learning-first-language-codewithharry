#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();

    return 0;
}

void GoodMorning()
{
    printf("Good Morning Bhai\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon Bhai\n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night Bhai\n");
}