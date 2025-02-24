#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5

// Structure to store student information
struct student {
    int mis_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

// Function to print details of a single student
void print_student(struct student s) {
    printf("MIS Number: %d\n", s.mis_number);
    printf("Name: %s\n", s.name);
    printf("Department: %s\n", s.department);
    printf("Course: %s\n", s.course);
    printf("Year of Joining: %d\n", s.year_of_joining);
    printf("---------------------------\n");
}

int main() {
    struct student students[NUM_STUDENTS];
    int year, mis_number, i;

    // Input data for 5 students
    printf("Enter data for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter MIS Number: ");
        scanf("%d", &students[i].mis_number);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);  // To read full name
        printf("Enter Department: ");
        scanf(" %[^\n]", students[i].department);
        printf("Enter Course: ");
        scanf(" %[^\n]", students[i].course);
        printf("Enter Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    // Print all student data
    printf("\nAll Student Data:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        print_student(students[i]);
    }

    // (a) Print names of students who joined in a particular year
    printf("\nEnter a year to find students who joined in that year: ");
    scanf("%d", &year);
    printf("Students who joined in %d:\n", year);
    int found = 0;
    for (i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found for the year %d.\n", year);
    }

    // (b) Print data of a student whose MIS number is input
    printf("\nEnter an MIS number to find the student details: ");
    scanf("%d", &mis_number);
    found = 0;
    for (i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].mis_number == mis_number) {
            printf("Details of student with MIS Number %d:\n", mis_number);
            print_student(students[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No student found with MIS Number %d.\n", mis_number);
    }

    return 0;
}
