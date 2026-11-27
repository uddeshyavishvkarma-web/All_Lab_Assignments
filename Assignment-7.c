#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    int m1, m2, m3;
    int total;
    float per;
    char verdict[20];
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student stud[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter student %d roll no.: ", i + 1);
        scanf("%d", &stud[i].roll);

        printf("Enter student %d name: ", i + 1);
        scanf(" %29[^\n]", stud[i].name);

        printf("Enter marks of 3 subjects (out of 100 each): ");
        scanf("%d %d %d", &stud[i].m1, &stud[i].m2, &stud[i].m3);

        stud[i].total = stud[i].m1 + stud[i].m2 + stud[i].m3;
        stud[i].per = (stud[i].total / 300.0f) * 100.0f;

        if (stud[i].per < 40.0f || stud[i].m1 < 35 || stud[i].m2 < 35 || stud[i].m3 < 35) {
            strcpy(stud[i].verdict, "FAIL");
        } else if (stud[i].per >= 75.0f) {
            strcpy(stud[i].verdict, "DISTINCTION");
        } else {
            strcpy(stud[i].verdict, "PASS");
        }
    }

    printf("\nRoll No.\tName\t\tTotal\tPercentage\tVerdict\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t%.2f%%\t\t%s\n",
               stud[i].roll, stud[i].name, stud[i].total, stud[i].per, stud[i].verdict);
    }

    return 0;
}
