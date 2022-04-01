#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("******************************\n");
	printf("*******1. add    2. del*******\n");
	printf("*******3. serch  4. modify****\n");
	printf("*******5. show   6. sort******\n");
	printf("*******      0. quit   ******\n");
	printf("******************************\n");
}




int main()
{
	int input = 0;
	struct contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("«Î—°‘Ò");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			Add_Contact(&con);
			break;
		}
		case 2:
		{
			break;;
		}
		case 3:
		{
			
			break;;
		}
		case 4:
		{
			break;;
		}
		case 5:
		{
			ShowContact(&con);
			break;
		}
		case 0:
		{
			printf("ÕÀ≥ˆ");
			break;
		}
		default:
		{
			printf(" ‰»Î¥ÌŒÛ");
			break;
		}
		}


	} while (input);
	return 0;
}