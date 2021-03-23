#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    char num[2];
    int i;

    scanf("%s", &num);

        if (strcmp (num, "1") == 0){

            printf("January\n");

        }else if (strcmp (num, "2") == 0){

            printf("February\n");

        } else if (strcmp (num, "3") == 0){

            printf("March\n");

        } else if (strcmp (num, "4") == 0){

            printf("April\n");

        } else if (strcmp (num, "5") == 0){

            printf("May\n");

        } else if (strcmp (num, "6") == 0){

            printf("June\n");

         } else if (strcmp (num, "7") == 0){

            printf("July\n");

         } else if (strcmp (num, "8") == 0) {

            printf("August\n");

         } else if (strcmp (num, "9") == 0) {

            printf("September\n");

         } else if (strcmp (num, "10") == 0){

            printf("October\n");

         } else if (strcmp (num, "11") == 0){

            printf("November\n");

         } else if (strcmp (num, "12") == 0){

            printf("December\n");

         }

       return 0;
}
