#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	int age;
};

struct contact
{
	struct PeoInfo date[MAX];
	int size;
};


void InitContact(struct contact* ps);
void Add_Contact(struct contact* ps);
void ShowContact(const struct contact* ps);

