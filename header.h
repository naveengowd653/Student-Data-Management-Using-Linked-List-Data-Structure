  1 #include<stdio.h>
  2 #include<string.h>
  3 #include<stdlib.h>
  4 #include<unistd.h>
  5 typedef struct student
  6 {
  7 int rollno;
  8 char name[50];
  9 float percentage;
 10 struct student *next;
 11 }ST;
 12 void add_record(ST **);
 13 void delete_record(ST **);
 14 void show_list(ST *);
 15 void modify_record(ST *);
 16 void search_by_rollno(ST *);
 17 void search_by_name(ST *);
 18 void search_by_percentage(ST *);
 19 void save_record(ST *);
 20 void sort_list(ST *);
 21 void delete_all(ST **);
 22 void reverse_link(ST **);
 23 void rollno_to_delete(ST **);
 24 void name_to_delete(ST **);
 25 void sort_with_name(ST *);
 26 void sort_with_percentage(ST *);
 27 int count(ST *);
