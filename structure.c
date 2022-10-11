// structure helps us to print different types of data types unlike array which gives us same data types
// print a student name,roll number & CGPA using structure
#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.roll = 10;
    s1.cgpa = 3.81;
    strcpy(s1.name, "protyoy");
    // we can't re-initialize,this is why coppyng it

    printf("Name of the student is %s\n", s1.name);
    printf("Roll of the student is %d\n", s1.roll);
    printf("CGPA of the student is %f\n", s1.cgpa);

    return 0;
}

// input data of 3 students & print them accordingly
#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1, s2, s3;
    printf("Enter the name,roll & cgpa of first student: \n");
    scanf("%s %d %f", &s1.name, &s1.roll, &s1.cgpa);
    printf("Enter the name,roll & cgpa of second student: \n");
    scanf("%s %d %f", &s2.name, &s2.roll, &s2.cgpa);
    printf("Enter the name,roll & cgpa of third student: \n");
    scanf("%s %d %f", &s3.name, &s3.roll, &s3.cgpa);

    printf("data of first student: \nName: %s\n Roll: %d\n CGPA: %f\n", s1.name, s1.roll, s1.cgpa);
    printf("data of second student: \nName: %s\n Roll: %d\n CGPA: %f\n", s2.name, s2.roll, s2.cgpa);
    printf("data of third student: \nName: %s\n Roll: %d\n CGPA: %f\n", s3.name, s3.roll, s3.cgpa);
    return 0;
}

// structure pointer
#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    // normal way
    struct student s1 = {"protyoy", 1097, 9.23};
    printf("Roll no is : %d\n", s1.roll);

    // using a pointer
    struct student *ptr = &s1;
    printf("Roll no using pointer: %d\n", (*ptr).roll);
    printf("CGPA using pointer: %f\n", ptr->cgpa);

    // all of the above will print same output
    return 0;
}

// typedef keyword
// it is used to create alias for data types (like nicknames)
#include <stdio.h>
#include <string.h>
typedef struct computerScienceStudent
{
    char name[100];
    int roll;
    float cgpa;
} coe;

int main()
{
    coe s1;
    strcpy(s1.name, "protyoy");
    s1.roll = 1097;
    s1.cgpa = 9.05;

    printf("%s\n %d\n %f\n", s1.name, s1.roll, s1.cgpa);
    return 0;
}

// Enter address(house no,block,city,state) of 5 people
#include <stdio.h>
struct address
{
    int hoouse_no;
    int block;
    char city[100];
    char state[100];
};
int main()
{
    struct address ppl1, ppl2, ppl3, ppl4, ppl5;
    printf("Enter the address (house no,block,city & state) of 1st person: \n");
    scanf("%d\n %d\n %s\n %s", &ppl1.hoouse_no, &ppl1.block, &ppl1.city, &ppl1.state);
    printf("Enter the address (house no,block,city & state) of 2nd person: \n");
    scanf("%d\n %d\n %s\n %s", &ppl2.hoouse_no, &ppl2.block, &ppl2.city, &ppl2.state);
    printf("Enter the address (house no,block,city & state) of 3rd person: \n");
    scanf("%d\n %d\n %s\n %s", &ppl3.hoouse_no, &ppl3.block, &ppl3.city, &ppl3.state);
    printf("Enter the address (house no,block,city & state) of 4th person: \n");
    scanf("%d\n %d\n %s\n %s", &ppl4.hoouse_no, &ppl4.block, &ppl4.city, &ppl4.state);
    printf("Enter the address (house no,block,city & state) of 5th person: \n");
    scanf("%d\n %d\n %s\n %s", &ppl5.hoouse_no, &ppl5.block, &ppl5.city, &ppl5.state);

    printf("Address of 1st person: \n");
    printf("House no: %d\n Block: %d\n City: %s\n State: %s\n", ppl1.hoouse_no, ppl1.block, ppl1.city, ppl1.state);
    printf("Address of 2nd person: \n");
    printf("House no: %d\n Block: %d\n City: %s\n State: %s\n", ppl2.hoouse_no, ppl2.block, ppl2.city, ppl2.state);
    printf("Address of 3rd person: \n");
    printf("House no: %d\n Block: %d\n City: %s\n State: %s\n", ppl3.hoouse_no, ppl3.block, ppl3.city, ppl3.state);
    printf("Address of 4th person: \n");
    printf("House no: %d\n Block: %d\n City: %s\n State: %s\n", ppl4.hoouse_no, ppl4.block, ppl4.city, ppl4.state);
    printf("Address of 5th person: \n");
    printf("House no: %d\n Block: %d\n City: %s\n State: %s\n", ppl5.hoouse_no, ppl5.block, ppl5.city, ppl5.state);
    return 0;
}

// same problem with a function structure
#include <stdio.h>
struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add);

int main()
{
    struct address add[5];
    printf("Enter the address (house no,block,city & state) for 1st person: \n");
    scanf("%d\n %d\n %s\n %s", &add[0].house_no, &add[0].block, &add[0].city, &add[0].state);
    printf("Enter the address (house no,block,city & state) for 2nd person: \n");
    scanf("%d\n %d\n %s\n %s", &add[1].house_no, &add[1].block, &add[1].city, &add[1].state);
    printf("Enter the address (house no,block,city & state) for 3rd person: \n");
    scanf("%d\n %d\n %s\n %s", &add[2].house_no, &add[2].block, &add[2].city, &add[2].state);
    printf("Enter the address (house no,block,city & state) for 4th person: \n");
    scanf("%d\n %d\n %s\n %s", &add[3].house_no, &add[3].block, &add[3].city, &add[3].state);
    printf("Enter the address (house no,block,city & state) for 5th person: \n");
    scanf("%d\n %d\n %s\n %s", &add[4].house_no, &add[4].block, &add[4].city, &add[4].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);
    return 0;
}
void printAdd(struct address add)
{
    printf("address is: %d,%d,%s,%s\n", add.house_no, add.block, add.city, add.state);
}

// create a structure to store vectors.Then make a function to return sum of two vectors
#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void addVectors(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {2, 10};
    struct vector v2 = {5, 20};
    struct vector sum = {0};

    addVectors(v1, v2, sum);
    return 0;
}
void addVectors(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of vector X is: %d\n", sum.x);
    printf("sum of vector y is: %d\n", sum.y);
}
// create a structure of a complex number.print its real & imaginary part using arrow operator
#include <stdio.h>
struct complexNum
{
    int real;
    int img;
};

int main()
{
    struct complexNum num1 = {5, 8};
    struct complexNum *ptr = &num1;
    printf("Real number is: %d\n", ptr->real);
    printf("Imaginary number is: %d", ptr->img);

    return 0;
}

// make a structure to store Bank Account information of a customer of ABC bank.Also make an alies for it
#include <stdio.h>
#include <string.h>

typedef struct personalInformation
{
    char name[100];
    char accType[100];
    int accNo;
    int pass;
    int phoneNo;
} info;
int main()
{
    info person1;
    strcpy(person1.name, "Protyoy");
    strcpy(person1.accType, "Savings");
    person1.accNo = 1234567890;
    person1.pass = 1097;
    person1.phoneNo = 1234567890;

    printf("Welcome to ABC Bank\n");
    printf("Account Holder: %s\n", person1.name);
    printf("Account Type: %s\n", person1.accType);
    printf("Acc Number: %d\n", person1.accNo);
    printf("Password: %d\n", person1.pass);
    printf("Phone number: %d\n", person1.phoneNo);
    return 0;
}