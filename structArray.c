#include<stdio.h>

struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentName[40];

};

int main()
{
    struct students x={'A', "Attila", "Ilhan", 1913, 95.6, "Albert"};

    printf("Letter:%c\n", x.myLetter);
    printf("Name:%s\n", x.name);
    printf("Last Name:%s\n", x.lastname);
    printf("No:%d\n", x.no);
    printf("Score:%.2f\n", x.score);
    printf("Parent Name:%s\n", x.parentName);

    return 0;
}