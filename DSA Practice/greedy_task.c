#define Size 1000
#include <stdio.h>
#include <stdlib.h>

struct Homework /*The structure is one homework task*/
{
    int Deadline;
    int Bonus;
};

struct Homework Tasks[Size];

int Compare(const void *_a, const void *_b)
{
    struct Homework *a, *b;
    a = (struct Homework *)_a;
    b = (struct Homework *)_b;
    if (a->Deadline > b->Deadline)
        return 1; /*If the deadline is less then the number is strictly before*/
    if (a->Deadline < b->Deadline)
        return -1;
    if (a->Bonus < b->Bonus)
        return 1; /*When the days are equal the one with a higher bonus is to be given higher priority*/
    if (a->Bonus > b->Bonus)
        return -1;
    return 1;
}

void printTasks(int N)
{
    int Cnt;
    for (Cnt = 1; Cnt <= N; Cnt++)
        printf("\n%d %d", Tasks[Cnt].Deadline, Tasks[Cnt].Bonus);
}

int main()
{
    int TotalTasks;
    int TotalBonus = 0;
    int Cnt;
    int Days = 1;
    scanf("%d", &TotalTasks);

    for (Cnt = 1; Cnt <= TotalTasks; Cnt++)
        scanf("%d %d", &Tasks[Cnt].Deadline, &Tasks[Cnt].Bonus);

    qsort(&Tasks[1], TotalTasks, sizeof(struct Homework), Compare);

    for (Cnt = 1; Cnt <= TotalTasks; Cnt++)
    {
        if (Tasks[Cnt].Deadline >= Days) /*If the job can be completed then add the bonus to the last bonus*/
        {
            TotalBonus += Tasks[Cnt].Bonus;
            Days++;
        }    /*The day is to be incremented iff a task is done*/
        else /*If the job cannot be completed then the bonus till now is equal to the last bonus*/
            TotalBonus = TotalBonus;
    }
    printf("%d", TotalBonus);
    return 0;
}