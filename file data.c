#include<stdio.h>
int main(void)
{
    FILE*database = fopen("data.csv","a");
char name[100];
printf("Enter your name: ");
scanf("%s", name);

char age[100];
printf("Enter your age: ");
scanf("%s", age);

char gender[100];
printf("Enter your gender: ");
scanf("%s", gender);

char phone[100];
printf("Enter your phone number: ");
scanf("%s", phone);
fprintf(database, "%s,%s,%s,%s\n", name, age, gender, phone);
fclose(database);
}