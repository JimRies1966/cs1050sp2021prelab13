#include <stdio.h>
#include "university.h"

int main(int argc, char * argv[])
{
    Course * courses;
    Student * students;

    // Step 0 - Print out all courses and all students
    printf("Courses:\n");
    courses = GetAllCourses();
    PrintCourses(courses);

    printf("\nStudents:\n");
    students=GetAllStudents();
    PrintStudents(students);



    // Step 1 - Sort the courses by instructor last name (ascending) and print them out


    // Step 2 - Sort the students by last name (ascending) and print them out


    // Step 3 - Print out the list of students who are in CS 1050
    printf("\nStudents in CS 1050\n");
    students = GetStudentsInCourse(2);
    PrintStudents(students);

    // Step 4 - Print out the list of students who are in CS 1050 sorted by last name (ascending)

    return 0;
}
