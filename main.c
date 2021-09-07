#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print();
void enqueue(char* num);
void dequeue();
void dequeue2();
void copying();
void dln();
void copyed(char* num2);
void print2();
void clear();
void stackToQueue();
void rs();


struct node{
    char* num;
    struct node *next;
}*head;
struct node2{
    char* num2;
    struct node2 *next2;
}*head2;

int main(){
    while(1){
        char no[10]={'\0'};
        int n;
        printf("1. Insert data/ Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Print queue \n");
        printf("4. Copy queue \n");
        printf("5. Print Copied queue \n");
        printf("6. Stack to queue (Rerun the program)\n");
        printf("7. Print the Queue converted from stack \n");
        printf("8. Delete negative \n");
        printf("9. Exit \n");



        printf("\n Enter your Choice: \n");
        scanf("%d",&n);
        if(n==1){
            printf("Enter data : ");
            scanf("\n\n%s", &no);
            enqueue(no);
            }
        else if(n==3){
            print();
            }
        else if(n==2){
            dequeue();
            }
        else if(n==4){
            clear();
            copying();
        }
        else if(n==5){
            print2();
        }
        else if(n==6){
                int i;
            stackToQueue();

        }
        else if(n==7){
                rs();
            print();

        }
        else if(n==8){
                clear();
               dln();
               print2();
        }
        else if(n==9){
                exit(0);
        }
        }
            printf("\n");
        }



void print(){
    struct node *temp;
    if(head == NULL){
        printf(" List is empty \n");
        }
    else{
        temp=head;
        while(temp!=NULL){
            printf(" => %s ", temp->num);
            temp = temp->next;
        }
    }
        printf("\n");
        main();
}

void enqueue(char* num){

struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->next = NULL;
temp->num=num;
if(head == NULL){
    head = temp;
}else{
    struct node* temp1;
    temp1 = head;
    while(temp1->next!=NULL){
        temp1 = temp1->next;

    }

    temp1->next = temp;
}
    printf("\n");
    main();

}



void dequeue()
{
    struct node *temp;
    if(head == NULL)
    {
        printf(" There are no node in the list.");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    main();
}

void dequeue2()
{
    struct node2 *temp;
    if(head2 == NULL)
    {
        printf(" There are no node in the list.");
    }
    else
    {
        temp = head2;
        head2 = head2->next2;
        free(temp);
    }
}

void copying(){
    struct node *temp;
    if(head == NULL){
        printf(" List is empty \n");
        }
    else{
        temp=head;
        while(temp!=NULL){
            copyed(temp->num);
            temp = temp->next;
        }
    }
        printf("\n");
        main();
}

void dln(){
    struct node *temp;
    if(head == NULL){
        printf(" List is empty \n");
        }
    else{
        temp=head;
        while(temp!=NULL){
                int x;
                sscanf(temp->num, "%d", &x);
                if(x>=0){
                copyed(temp->num);
    }

            temp = temp->next;
        }
    }
        printf("\n");

}

void copyed(char* num2){

struct node2* temp;
temp = (struct node2*)malloc(sizeof(struct node2));
temp->next2 = NULL;
temp->num2=num2;
if(head2 == NULL){
    head2 = temp;
}else{
    struct node2* temp1;
    temp1 = head2;
    while(temp1->next2!=NULL){
        temp1 = temp1->next2;

    }

    temp1->next2 = temp;
}

}
void print2(){
    struct node2 *temp;
    if(head2 == NULL){
        printf(" List is empty \n");
        }
    else{
        temp=head2;
        while(temp!=NULL){
            printf(" => %s ", temp->num2);
            temp = temp->next2;
        }
    }
        printf("\n");
        main();
}

void clear(){
        struct node2 *temp;
        int i=0,j;
    if(head2 == NULL){
        return;
        }
    else{
        temp=head2;
        while(temp!=NULL){

            temp = temp->next2;
            i++;
        }
    }
        for(j=0;j<i;j++){
            dequeue2();
        }
        printf("\n");
}

void stackToQueue(){
            char no[10]={'\0'};
            printf("Enter data stack: ");
            scanf("\n\n%s", &no);
            enqueue(no);
}
void rs()
{
    struct node *temp, *temp1;

    if(head != NULL)
    {
        temp = head;
        temp1 = head->next;
        head = head->next;

        temp->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            temp1->next = temp;

            temp = temp1;
            temp1 = head;
        }
        head = temp;
    }
}
