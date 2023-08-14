/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับค่าจากผู้ใช้จำนวน 2 ค่า และให้เปรียบเทียบกัน
    
    Test case:
        Input 1 :
            6
        Input 2 :
            29
    Output:
        Number1 lower than Number2

    Test case:
        Input 1 :
            96
        Input 2 :
            63
    Output:
        Number1 greater than Number2

    Test case:
        Input 1 :
            50
        Input 2 :
            50
    Output:
        c
*/
#include <stdio.h>

int main() {
    int Num1, Num2;

    printf("Input[1] : ");
    scanf("%d", &Num1);
    printf("Input[2] : ");
    scanf("%d", &Num2);

    if (Num1 > Num2) {
        printf( "Number1 greater than Number2" );
    } 
    else if (Num1 < Num2 ) {
        printf( "Number1 lower than Number2" );
    }
    else 
        printf( "Number1 equal Number2" );
    return 0;
}







