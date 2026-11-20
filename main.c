#include <stdio.h>
#include <string.h>

struct student {
    int id;          
    char name[20]; 
    float grade;     
};

int main(void)
{
    struct student s1 = {111111, "Kim", 3.5f};

    s1.id = 2410948;
    strcpy(s1.name, "Hyeyeon");
    s1.grade = 4.3f;

    printf("ID : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;
}