#include<stdio.h>

int main(void){
   int age;
   float height;

   printf("Введите свой возраст  \n");
   scanf("%d",&age);

   printf("Введите свой рост  \n");
   scanf("%f",&height);

printf("Ваш возраст %d\n", age);
printf("Ваш рост %.2f\n", height);
printf("Ваш следущий возраст: %d\n", age+1);

return 0;
}
