//#include <stdio.h>
//#include <stdlib.h>
//
//#include <stdio.h>
//
//#include <string.h>
//
//
// typedef struct dict_word *word;
// typedef struct node *Node;
// typedef struct double_linked_list *DLL;
//
//
//
//
// struct dict_word
// {
//char words[100];
//int year[10];
//char eng_synonyms[100];
//char heb_synonyms[100];
// };
//
//
// struct node
// {
//word data;
//Node *next;
//Node *previous;
// };
//
//
// struct double_linked_list
// {
//Node *head;
//Node *last;
// };
//
//
// char *split(char words[100])
// {
//int i;
//char *word=strtok(words, "_#_");
//char *year=strtok(NULL, "_#_");;  // assigning NULL for previousely where it left off
//char *definition=strtok(NULL,"_#_");
//char *synonyms=strtok(NULL,"_#_");
//
//i=atoi(year);
//
//printf("%s\n", word);
//printf("%i\n",i);
//printf("%s\n", definition);
//printf("%s\n", synonyms);
//return 0;
// }
//void insert_beginning(char words[99])
// {
//struct node *var, *temp;
//var=(struct node *)malloc(sizeof(struct node)); //explination about the (node *)
//strncpy(var->data, words,99);
//
//if (head==NULL)
//{
//    head=var;
//    head->previous=NULL;
//    head->next=NULL;
//    last=head;
//}
//else
//{
//    temp=var;
//    temp->previous=NULL;
//    temp->next=head;
//    head->previous=temp;
//    head=temp;
//}
// }
//int main()
//{
//    char data[99];
//    scanf("%s",data);
//    insert_beginning(data);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#define LARGE 10

struct node *add_to_list(struct node *list, char *n);
struct node{
    char value[LARGE+1];
    struct node *next;
};

struct node *first = NULL;
void print(void);

int main(void) {

    char job[LARGE],*p;

    printf("Please enter printing jobs\n");
    scanf ("%s", job);
    p=&job[0];

    first = add_to_list(first, p);
    print();
    return 0;
}




struct node *add_to_list(struct node *list, char *n)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = *n;
    new_node->next = list;
    return new_node;
}

void print(void){
    struct node *new_node;
    for(new_node=first;new_node!= NULL; new_node=new_node->next){
        printf("%s\n",new_node->value);
    }
}
