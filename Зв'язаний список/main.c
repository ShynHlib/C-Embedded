#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char* name;
    int price;
    int pages;
    char* language;
    float weight;
    int year;

    struct node* next;
};

struct node* head = NULL;

void headInsert(const char* set_name, int set_price, int set_pages, const char* set_lng, float set_wht, int set_year) {
    struct node* lk = (struct node*)malloc(sizeof(struct node));

    lk->name = strdup(set_name);
    lk->price = set_price;
    lk->pages = set_pages;
    lk->language = strdup(set_lng);
    lk->weight = set_wht;
    lk->year = set_year;

    lk->next = head;
    head = lk;
}

void tailInsert(const char* set_name, int set_price, int set_pages, const char* set_lng, float set_wht, int set_year) {
    struct node* lk = (struct node*)malloc(sizeof(struct node));

    lk->name = strdup(set_name);
    lk->price = set_price;
    lk->pages = set_pages;
    lk->language = strdup(set_lng);
    lk->weight = set_wht;
    lk->year = set_year;

    lk->next = NULL;

    if (head == NULL) {
        head = lk;
    } else {
        struct node* linkedlist = head;

        while (linkedlist->next != NULL) {
            linkedlist = linkedlist->next;
        }

        linkedlist->next = lk;
    }
}

void print_books() {
    struct node* p = head;

    while (p != NULL) {
        printf("Name of the book: %s\n", p->name);
        printf("Price of the book: %d\n", p->price);
        printf("Number of pages: %d\n", p->pages);
        printf("Language: %s\n", p->language);
        printf("Weight of the book: %f\n", p->weight);
        printf("Year of the book: %d\n\n", p->year);
        p = p->next;
    }
}

int main() {
    headInsert("Harry Potter and the Philosopher's Stone", 135, 319, "eng", 0.3f, 1997);
    tailInsert("Harry Potter and the Chamber of Secrets", 272, 252, "eng", 0.3f, 1998);
    tailInsert("Harry Potter and the Prisoner of Azkaban", 365, 383, "eng", 0.4f, 1999);
    tailInsert("Harry Potter and the Goblet of Fire", 180, 672, "eng", 0.4f, 2000);
    tailInsert("Harry Potter and the Order of the Phoenix", 410, 815, "eng", 0.5f, 2003);
    tailInsert("Harry Potter and the Half-Blood Prince", 410, 576, "eng", 0.4f, 2005);
    tailInsert("Harry Potter and the Deathly Hallows", 410, 640, "eng", 0.4f, 2007);

    print_books();

    return 0;
}
