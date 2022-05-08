//TADAYCA, JAYSON L.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * fptr;
    int i, n;
    int id, math, sci, eng, sum = 0, ave = 0;
    char name[200] = "juan";
    char file[45];

    printf("Input how many students: ");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {

        printf("\nEnter student name: ");
        fgets(name, sizeof name, stdin);
        scanf("%s", name);

        strcpy(file, name);
        strcat(file, ".txt");
        fptr = fopen(file, "w");

        printf("Student ID Number: ");
        scanf("%d", & id);
        printf("Math Grade: ");
        scanf("%d", & math);
        printf("Science Grade: ");
        scanf("%d", & sci);
        printf("English Grade: ");
        scanf("%d", & eng);
        printf("\nData written succesfully!");

        sum = math + sci + eng;
        ave = sum / 3;

        fprintf(fptr, "Student Name: %s", name);
        fprintf(fptr, "\nStudent ID number: %d", id);
        fprintf(fptr, "\nMath Grade: %d", math);
        fprintf(fptr, "\nScience Grade: %d", sci);
        fprintf(fptr, "\nEnglish Grade: %d", eng);
        fprintf(fptr, "\nTotal grade: %d", sum);
        fprintf(fptr, "\n\nGrade average: %d", ave);
        fclose(fptr);
    }
    return 0;
}
