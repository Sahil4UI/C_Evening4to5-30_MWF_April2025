
#include <stdio.h>
// function definition
// default function

// void f1(){
//     printf("f1 called.....");
// }

// parameterized function
// void f1(int x,int y){
//     printf("%d",x+y);
// }

// function with return statement
// int f1(int x,int y){
//     return x+y;
// }


// Recursive function
// when a function calls itself again and again that function is called recursive function

// int f1(int x){
//     if (x>5)
//     {
//         return 0;
//     }
//     printf("%d\n",x);
//     f1(x+1);
// }

// int main() {
   
//     // Function Calling
// //   int res =  f1(45,89);
// //     printf("%d",res);


//     f1(1);
//     return 0;
// }
int f1(int x){
    if (x<1)
    {
        return 0;
    }
    printf("%d\n",x);
    f1(x+1);
}

int main() {
    f1(1);
    return 0;
}
