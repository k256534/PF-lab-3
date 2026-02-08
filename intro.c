// TASK 05
#include <stdio.h>

int main() {
    printf("Welcome to Programming Fundamentals\n");
    printf("Spring 2026\n");
    return 0;
}

// TASK 06

#include <stdio.h>

int main() {
    printf("Name:\tAbrar ul Hassan\n");
    printf("Roll No:\t25K-6534\n");
    printf("Section:\t26B\n");
    return 0;
}

// TASK 07

#include <stdio.h>

int main() {
    int age = 18;
    float height = 5.9;
    double cgpa = 3.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("CGPA: %.2lf\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}

// TASK 08

#include <stdio.h>

int main() {
    int num;
    float value;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &value);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", value);
    printf("Character: %c\n", ch);

    return 0;
}

// TASK 09

#include <stdio.h>

int main() {
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("Default: %lf\n", num);
    printf("2 decimal places: %.2lf\n", num);
    printf("5 decimal places: %.5lf\n", num);

    return 0;
}








