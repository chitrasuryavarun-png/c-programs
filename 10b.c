#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0;
    int i;

    if (gender == 'b')
        i = 0;
    else
        i = 1;

    for (; i < number_of_students; i += 2)
    {
        sum += marks[i];
    }

    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;
    int student;

    printf("Enter Number of Students: ");
    scanf("%d", &number_of_students);

    int *marks = (int *) malloc(number_of_students * sizeof(int));

    printf("Enter marks: ");
    for (student = 0; student < number_of_students; student++)
    {
        scanf("%d", &marks[student]);
    }

    printf("Enter Gender: ");
    scanf(" %c", &gender);

    sum = marks_summation(marks, number_of_students, gender);

    printf("Sum = %d", sum);

    free(marks);
    return 0;
}
