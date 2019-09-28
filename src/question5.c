#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Question 5:
    Write a program to simulate an experiment flipping three coins. Each time the three coins are
    flipped, is called a “trial”.
    A coin flip can randomly result in either “Heads” (1) or “Tails” (0)
    Allow the user to enter the number of “trial”s to simulate.
    Print out each coins’ result after each “trial”.
    Use seed value 1234.
    Tally up and determine what percentage of “trial”’s all three coins land on “Heads” in the
    simulation.

    References:
    https://www.codingunit.com/c-reference-stdlib-h-function-srand-initialize-random-number-generator
    https://stackoverflow.com/questions/40700947/invalid-use-of-void-expression-what-how
    https://stackoverflow.com/questions/21579696/random-number-either-0-or-1
    */

    int no_trials, no_heads = 0;
    printf("How many trials do you want?\n");
    scanf("%d", &no_trials);
    srand(1234);
    for (int i=1; i <= no_trials; i++) {
        int toss1, toss2, toss3;
        toss1 = rand() % 2;
        toss2 = rand() % 2;
        toss3 = rand() % 2;
        if (toss1 == 1 && toss2 == 1 && toss3 == 1) no_heads++;
        printf("Trial %d:\n\tToss 1: %d, Toss 2: %d, Toss 3: %d\n", i, toss1, toss2, toss3);
    }
    float heads_percentage = (no_heads / no_trials) * 100;
    printf("%.2f percentage of trial's all three coins land on Heads in the simulation", heads_percentage);
    return 0;
}