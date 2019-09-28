#include <stdio.h>

int main()
{
    /*
    Question 4: Write a program to count the number of spaces in a sentence. The sentence is saved in the string “sentence”.
    
    References:
    https://medium.com/@randerson112358/how-to-run-c-program-in-command-prompt-e435186cd162
    https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
    https://www.linuxquestions.org/questions/programming-9/c-programming-error-warning-comparison-between-pointer-and-integer-64046/
    */

    char sentence[] = "This is a sentence which have 7 spaces.";
    int no_spaces = 0;
    for (int i=0; i < sizeof(sentence); i++) {
        if (sentence[i] == ' ') no_spaces++;
    }
    printf("No. of spaces in sentence: %d", no_spaces);
    return 0;
}