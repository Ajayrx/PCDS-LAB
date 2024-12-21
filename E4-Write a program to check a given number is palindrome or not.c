#include <stdio.h>
int main(){
    int num,originalnum,reversednum=0,remainder;

    //Prompt the user to enter a number ajay
    printf("Enter an integer: ");
    scanf("%d",&num);

    originalnum=num; //Save the original number

    //Reverse the number
    while (num>0){
        remainder=num%10;
        reversednum=reversednum*10+remainder;
        num/=10;
    }

    //Check if the Original number is equal to the reverse number
    if(originalnum==reversednum){
        printf("%d is a Palindrome.\n",originalnum);
    }
    else{
        printf("%d is not a Palindrome.\n",originalnum);
    }
    return 0;
}