#include <stdio.h>

int main()
{
   /*
   Question 3: List the functions used to OPEN a file, Write/print to a file (in append mode), and CLOSE a file. 
   
   Check question5_openfile.png for list of functions used to open file

   References:
   https://www.guru99.com/c-file-input-output.html
   https://codeforwin.org/2018/02/c-program-append-data-file.html
   https://codingfox.com/17-9-appending-and-copying-files/
   https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
    */
   
   int i;
   FILE * fptr;
   char fn[50];
   char str[] = "\nYes assignment question 3 is done!";
   fptr = fopen("question3.txt", "a+"); // "a" defines "append mode"
   char lastStr;
   printf("File contents:\n\t");
   /* print file using fgetc() function */
   do {
      lastStr = fgetc(fptr);
      putchar(lastStr);
   } while (lastStr != EOF);
   /* write to file using fputc() function */
   for (i = 0; i < sizeof(str); i++) {
      fputc(str[i], fptr);
   }
   /* closing file using fclose() function */
   fclose(fptr);
   return 0;
}