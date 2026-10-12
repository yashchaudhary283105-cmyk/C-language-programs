// #include <stdio.h>
// #import <stdlib.h>
// int main(){
//     int a = rand() % 9;
//     printf("%d",a);
//     switch (a){
//         case 1:
//         printf("1");
//         case 2:
//         printf("2");
//         case 3:
//         printf("3");
//         case 4:
//         printf("4");
//         case 5:
//         printf("5");
//         case 6:
//         printf("6");
//         case 7:
//         printf("7");
//         case 8:
//         printf("7");
//     }
//     return 0;

// }

// int main(){
//     char a;
//     int b;
//     printf("Enter a Character");
//     scanf("%c",&a);
//     char b = a+1
//     printf("%c",b);
//     return 0;

// }

// int max(int a,int b,int c,int d)
// {
//     if (a>=b && a>=c && a>=d) return a;
//     else if (b>=a && b>=c && b>=d) return b;
//     else if (c>=a && c>=b && c>=d) return c;
//     else return d;
// }
// int main(){
//     printf("%d",max(4,1000,8,8));
// }

// int main(){
//     char a = 'A',b[30] = "Saurabh";
//     printf("%d",b);
//     return 0;
// }

// int main(){
//     char ch;
//     scanf("%c",&ch);
//     printf("%d",ch);
//     return 0;
// }

// int main(){
//     int a = 0;
//     while (a){
//         printf("Hello");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){

// char a;
// printf("Enter char: ");
// scanf("%c",&a);
// int b = a;
// b = b+1;
// printf("%c",b);
// return 0;


// }

// int main(){
//     int a=5;
//     if (while (a){
//         printf("Loop worked");
//         a -= 1})
//     }
//     return 0;
// }
// int main(){
//     char a;
//     scanf("%c",&a);
//     printf("%c",++a);
//     return 0;
// }

#include <stdio.h>
int main()
{
    
char o;
printf("Enter operator: ");
scanf("%c",&o);
int a,b;
printf("\nEnter a,b: ");
scanf("%d %d",&a,&b);
switch(o)
{
case '+': printf("%d",a+b);
case '-': printf("\n%d",a-b);
case '*': printf("\n%d",a*b); break;
case '/': printf("\n%d",a/b);
default: printf("Sahi operator dal baie"); 
}
return 0;



}
