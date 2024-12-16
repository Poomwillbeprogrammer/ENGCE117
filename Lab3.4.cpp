#include <stdio.h>

struct student
{
    char name[20] ;
    int age ;
};


void GetStudent(struct student child[][10], int *room);

int main()
{
    struct student children[20][10];
    int group;
    GetStudent(children, &group);
    return 0;
} // end function
void GetStudent(struct student child[][10], int *room) {
    printf ("Enter the number of groups: ");
    scanf("%d", room);
    printf ("Room %d\n", *room);
    for(int i = 0; i < *room; i++) {
        for(int j = 0; j < 10; j++) {
            printf("student %d: \n", j + 1);
            scanf("%s", child[i][j].name);
            printf("Enter age: \n");
            scanf("%d", &child[i][j].age);
        }
    }
}