#include <stdio.h>

int main()
{
    int A = 0, B = 0, no_result = 0, total_vote, i, choice;
    printf("How many vote want to count?\n");
    scanf("%d", &total_vote);

    for (i = 1; i <= total_vote; i++)
    {
        printf("\t\tWelcome to the voting system\n");
        printf("Enter 1 to vote for A\n");
        printf("Enter 2 to vote for B\n");
        printf("Enter 3 to vote for none\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            A++;
        }
        else if (choice == 2)
        {
            B++;
        }
        else if (choice == 3)
        {
            no_result++;
        }
        else
        {
            printf("Invalid vote\n");
        }
    }

    printf("\t\tResult of the vote\n");
    printf("A got %d vote\n", A);
    printf("B got %d vote\n", B);
    printf("Neutral got %d vote\n", no_result);

    if (A > B && A > no_result)
    {
        printf("***A win the vote***\n");
    }
    else if (B > A && B > no_result)
    {
        printf("***B win the vote***\n");
    }
    else if (no_result > A && no_result > B)
    {
        printf("Neutral vote got the majority vote\n");
    }
    else
    {
        printf("The vote result is tied");
    }

    return 0;
}