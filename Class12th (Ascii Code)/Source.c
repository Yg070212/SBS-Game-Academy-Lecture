#include  <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Execute\n");
	Execute(count - 1);
	printf("%d\n", count);
}

int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Execute(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �˴ϴ�.

#pragma endregion

#pragma region ASCII CODE
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ���� ��ȯ��
	// 7 bit ��ȣ ü���Դϴ�.

	// int alphabet = 'A' + 1;
	// 
	// printf("alphabet ������ �� : %d\n", alphabet);
	// printf("alphabet ������ �� : %c\n", alphabet);

	// for (int i = 65; i < 91; i++)
	// {
	// 	printf("%c\n", i);
	// }

	// for (int i = 0; i < 26; i++)
	// {
	// 	printf("%c", alphabet + 1);
	// }

#pragma endregion

#pragma region ��ҹ��� ��ȯ
	char content[] = "HELLO";

	// int size = sizeof(content) / sizeof(char);
	// for (int i = 0; i < size; i++)
	// {
	// 	if (content[i] <= 90)
	// 	{
	// 		printf("%c", content[i] + 32);
	// 	}
	// 	else
	// 	{
	// 		printf("%c", content[i] - 32);
	// 	}
	// } // < ���

	// for (int i = 0; i < sizeof(content); i++)
	// {
	// 	if (content[i] >= 'a' && content[i] <= 'z')
	// 	{
	// 		content[i] = content[i] - 32;
	// 	}
	// 	else if (content[i] >= 'a' && content[i] <= 'z')
	// 	{
	// 		content[i] = content[i] + 32;
	// 	}
	// }
	// 
	// printf("%s", content); // < ����� ���

#pragma endregion


	return 0;
}