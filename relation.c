#include <stdio.h>
#include<conio.h>
void main() {
   int age;
   printf("Enter the age of a person");
   scanf("%d",&age);
    if (age >=18) {
      printf("a person is eligible to vote ");
   } else {
      printf("not eligible to vote");
   }
    getch();
}
