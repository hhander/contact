#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(struct contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;
}
void Add_Contact(struct contact* ps)
{
	if (ps->size == MAX)
	{
		printf("Ŀ¼����");
	}
	else
	{
		printf("����������");
		scanf("%s", ps->date[ps->size].name);
		printf("����������");
		scanf("%d", &(ps->date[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ַ");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�");

	}

}

void ShowContact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", ps->date[i].name, ps->date[i].age, ps->date[i].sex,
				ps->date[i].tele, ps->date[i].addr);
		}
	}

}