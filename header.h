#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct student
{
   int rollno;
   char name[50];
   float percentage;
  struct student *next;
}ST;
void add_record(ST **);
void delete_record(ST **);
void show_list(ST *);
void modify_record(ST *);
void search_by_rollno(ST *);
void search_by_name(ST *);
void search_by_percentage(ST *);
void save_record(ST *);
void sort_list(ST *);
void delete_all(ST **);
void reverse_link(ST **);
void rollno_to_delete(ST **);
void name_to_delete(ST **);
void sort_with_name(ST *); 
void sort_with_percentage(ST *);
int count(ST *);
