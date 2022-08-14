// function structure
// #include<stdio.h>

// void printHello();   /*function prototype*/
// void printGoodbye();

// int main(){
//     printHello();     /*function call*/
//     printGoodbye();

//     return 0;
// }

// void printHello(){
//     printf("Hello function!!\n");    /*function declaration*/
// }
// void printGoodbye(){
//     printf("Good Bye");
// }



// write a function that print Namaste if the user is indian & Bonjure if the user french
#include<stdio.h>
void ind_user();
void french_user();

int main(){
    int user;
    printf("if you are indian press 1 or if you are french press 2 \n");
    scanf("%d",&user);
    if (user == 1)
    {
        ind_user();
    }
    else
    {
        french_user();
    }
    
    return 0;
}

void ind_user(){
    printf("Namste!!!");
}
void french_user(){
    printf("Bonjure!!!");
}