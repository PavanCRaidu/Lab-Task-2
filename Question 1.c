//Create a structure called &quot;Student&quot; with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float totalMarks;
};
int main() {
    struct Student student1, student2;
    float averageMarks;
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);
    printf("\nStudent 1 Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);
    printf("\nStudent 2 Details:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);
    averageMarks = (student1.totalMarks + student2.totalMarks) / 2.0;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);
    return 0;
}
