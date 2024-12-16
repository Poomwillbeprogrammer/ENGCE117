#include <stdio.h>
#include <stdlib.h> // สำหรับ malloc()

struct student
{
    char name[20];
    int age;
};

// โปรโตไทป์ของฟังก์ชัน
struct student (*GetStudent(int *room))[10];

int main()
{
    struct student(*children)[10]; 
    int group;


    children = GetStudent(&group);

    printf("\n-----------------------------------------------------\n");
    for (int i = 0; i < group; i++)
    {
        printf("Room %d:\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("Student %d: Name = %s, Age = %d\n", j + 1, children[i][j].name, children[i][j].age);
        }
    }
    printf("\n-----------------------------------------------------\n");

    free(children);
    return 0;
}

struct student (*GetStudent(int *room))[10]
{
    printf("Enter the number of rooms: ");
    scanf("%d", room);


    struct student(*students)[10] = (struct student(*)[10])malloc(*room * sizeof(*students));
    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < *room; i++)
    {
        printf("Room %d:\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("Student %d name: ", j + 1);
            scanf("%s", students[i][j].name);
            printf("Enter age: ");
            scanf("%d", &students[i][j].age);
        }
    }
    

    return students;
}
