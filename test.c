    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "vector_gen.h"

    typedef struct 
    {
        char name[50];
        int roll;
        float cgpa;
    }Student;

    void addStudent(Vectorgen *v);
    void printStudent(Vectorgen *v);
    int findStudent(Vectorgen *v, int roll, Student* a);
    void updateCgpa(Vectorgen *v,int roll, float cgpa);
    void popStudent(Vectorgen *v);




    int main() {
        Vectorgen* v = createVectorgen(sizeof(Student));
        int ip,num=0;
        while(num!=-1)
        {
            printf("\n MENU\n1. add student \n2. print student\n3. find student\n4. update cgpa\n5. delete student\n Enter option(-1 to exit)");
            scanf("%d",&num);
            switch (num)
            {
            case 1:
                {addStudent(v);
                break;}
            case 2:
                {printStudent(v);
                break;}
            case 3:
               { printf("enter the roll number::\n");
                int roll;
                scanf("%d",&roll);
                Student a;
                    if (findStudent(v,roll,&a))
                        printf("FOUND: %s, %d, %f\n",a.name, a.roll, a.cgpa);
                    else
                        printf("NOT FOUND");
                break;}
            case 4:
                {printf("Enter the roll and new cgpa::\n");
                int roll;
                float cgpa;
                scanf("%d %f",&roll,&cgpa);
                updateCgpa(v,roll,cgpa);
                break;}
            case 5:
                popStudent(v);
                break;  
            case -1:
                printf("goodbye!");
                break;   
            default:
                printf("Enter valid num");
                break;
            }
        }   
    }


    void addStudent(Vectorgen *v)
    {
        Student s;
        printf("Enter the name::");
        scanf(" %[^\n]",s.name);
        printf("Enter the roll::");
        scanf(" %d",&s.roll);
        printf("Enter the cgpa::");
        scanf(" %f",&s.cgpa);

        pushback(v, &s);
    }
    void printStudent(Vectorgen *v)
    {
        Student s;
        for (int i = 0; i < size(v); ++i) {
            get(v, i, &s);
            printf("Name: %s | Roll: %d | CGPA: %.2f\n", s.name, s.roll, s.cgpa);
        }
    }
    int findStudent(Vectorgen *v, int roll, Student* a)
    {
        Student s;
        for (int i = 0; i < size(v); ++i) {
            get(v, i, &s);
            if (s.roll == roll) {
                *a = s; // copy result
                return 1; // found
            }
        }
        return 0;
    }
    void updateCgpa(Vectorgen *v,int roll, float cgpa)
    {
        Student s;
        for (int i = 0; i < size(v); ++i) {
            get(v, i, &s);
            if (s.roll == roll) {
                s.cgpa = cgpa;
                set(v, i, &s);
                printf("CGPA updated.\n");
                return;
            }
        }
        printf("Student not found.\n");
    }
    void popStudent(Vectorgen *v)
    {
        Student s;
        if (size(v) == 0) {
            printf("Vector is empty.\n");
            return;
        }
        popback(v, &s);
        printf("Removed: %s | Roll: %d | CGPA: %.2f\n", s.name, s.roll, s.cgpa);
    }


















// #include "include/stack.h"
// #include <stdio.h>

// int main() 
// {
    
// }


// {
//     // printf("test has started\n");
//     Stack* myStack = createStack();
//     // printf("stack is created\n");

//     for (int i = 1; i <= 10; i++) {
//         push(myStack, i * 10);
//         // printf("%d is pushed\n",i*10);
    
//     }
//     // printf("items pushed\n");

    
//     while (!isEmpty(myStack)) {
//         // control escaped at isEmpty
//         // printf("error in isempty?\n");

//         printf("%d popped\n", pop(myStack));
//     }
    
//     freeStack(myStack);
//     return 0;
// }