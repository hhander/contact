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
		printf("目录已满");
	}
	else
	{
		printf("请输入名字");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入性别");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入地址");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("添加成功");

	}

}

void ShowContact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字","年龄","性别","电话","地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", ps->date[i].name, ps->date[i].age, ps->date[i].sex,
				ps->date[i].tele, ps->date[i].addr);
		}
	}

}