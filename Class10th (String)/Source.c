#include  <stdio.h>

void main()
{
#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������ �����Դϴ�.

	// const char * string = "Alistar";
	// char content[10] = { 0, };
	// 
	// // string[0] = 'B';
	// content[0] = 'P';
	// 
	// printf("string�� �� : %s\n", string);
	// printf("content�� �� : %s\n", string);
	// 
	// string = "Janna";
	// // ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ�
	// // ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ�
	// // ���� ���ڰ� �߰��˴ϴ�.
	// 
	// printf("string�� �� : %s\n", string);
	// 
	// string = "Tower\0Defense";
	// // ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ�
	// // ������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ
	// // �� ���� ������ ���ڿ��� ����մϴ�.
	// 
	// printf("string�� �� : %s\n", string);
	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű����
	// �� �� ������, ���ڿ� ����� ������ ������ �б� ���� ������
	// ����Ǳ� ������ ���ڿ��� ���� ������ �� �����ϴ�.

#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� ������ �Դϴ�.

	// char grade = 'A';
	// 
	// int health = 100;
	// 
	// float attack = 32.5f;
	// 
	// double defense = 7.5;
	// 
	// // ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// // �����Ҽ� �����ϴ�.
	// 
	// void* vptr = NULL;
	// 
	// vptr = &grade;
	// 
	// *(char*)vptr = 'B';
	// 
	// printf("grade ������ �� : %c\n", *(char*)vptr);
	// 
	// vptr = &health;
	// 
	// *(int*)vptr = 999;
	// 
	// printf("health ������ �� : %d\n", health);
	// 
	// vptr = &attack;
	// 
	// *(float*)vptr = 365.0f;
	// 
	// printf("attack ������ �� : %f\n", attack);
	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ� ���� �����Ͱ� 
	// ����Ű�� ������ �ڷ������� �� ��ȯ���־�� �մϴ�

#pragma endregion

#pragma region �Ӹ����

	char word[] = { "level" };

	int flag = 1;

	int size = sizeof(word) - 1;

	for (int i = 0; i < size / 2; i++)
	{
		if (word[i] != word[size - 1 - i])
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
	{
		printf("ȸ�� �Դϴ�.\n");
	}
	else
	{
		printf("ȸ���� �ƴմϴ�.\n");
	}

	// printf("word�� ũ�� %d\n", sizeof(word) - 1);


	// char str[]
	// 
	// char word[6];
	// word[0] = 'l';
	// word[1] = 'e';
	// word[2] = 'v';
	// word[3] = 'e';
	// word[4] = 'l';
	// word[5] = 0;
	// printf("%s\n", word);



#pragma endregion

}