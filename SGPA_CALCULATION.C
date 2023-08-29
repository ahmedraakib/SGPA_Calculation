#include <stdio.h>
#include <string.h>

// Function to convert letter grades to GPA
double getGPA(const char *grade) {
    if (strcmp(grade, "A") == 0)
        return 4.0;
    else if (strcmp(grade, "B+") == 0)
        return 3.7;
    else if (strcmp(grade, "B") == 0)
        return 3.4;
    else if (strcmp(grade, "B-") == 0)
        return 3.1;
    else if (strcmp(grade, "C+") == 0)
        return 2.8;
    else if (strcmp(grade, "C") == 0)
        return 2.5;
    else if (strcmp(grade, "C-") == 0)
        return 2.2;
    else if (strcmp(grade, "D+") == 0)
        return 1.5;
    else if (strcmp(grade, "D") == 0)
        return 1.0;
    else if (strcmp(grade, "F") == 0)
        return 0.0;
    else
        return 0.0;
}

int main() {
    int numCourses;
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    double totalCreditHours = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 0; i < numCourses; i++) {
        char grade[3];
        int creditHours;

        printf("Enter grade for course %d (A/B/B+/B-/C/C+/C/D+/D/F): ", i + 1);
        scanf(" %2s", grade);

        printf("Enter credit hours for course %d: ", i + 1);
        scanf("%d", &creditHours);

        double gpa = getGPA(grade);

        totalCreditHours += creditHours;
        totalGradePoints += gpa * creditHours;
    }

    double cgpa = totalGradePoints / totalCreditHours;

    printf("Your SGPA is: %.2lf\n", cgpa);


    return 0;
}

