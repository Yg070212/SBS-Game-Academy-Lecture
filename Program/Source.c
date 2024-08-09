#include  <stdio.h>

void main()
{
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

	// char  -> 한 문자를 저장할 수 있는 자료형
	// int   -> 정수를 저장할 수 있는 자료형
	// float -> 실수를 저장할 수 있는 자료형
	
#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	// 자료형은 각각의 자료ㅕ형마다 크기가 정해져 있으며, 자료형의
	// 크기는 바이트 단위로 이루어져 있고, 자료형의 경우 자료형에 따라
	// 저장할 수 있는 값의 종류와 범위가 결정되어 있습니다.
#pragma endregion
	

	// char alphabet = 'A';   // -128 ~ 127
	// 
	// int data = 100; 
	// 
	// float decimal = 3.75f;
	// 
	// // "%c" : 한 문자를 표현하는 서식 지정자
    // // "$d" : 정수를 표현하는 서식 지정자
	// // "%f" : 실수를 표현하는 서식 지정자
	// 
	// alphabet = 'B';
	// 
	// data = 999;
	// 
	// decimal = 5.75;
	// 
	// // 이스케이프 키 \
	// 
	// printf("%c\n", alphabet); // A
	// printf("%d\n", data);     // 100
	// printf("%f\n", decimal);  // 3.75

	// 변수의 메모리 공간은 프로그램이 실행될 때마다
	// 바뀌며, 여러 개의 변수가 있을 때 서로 고유의
	// 메모리 공간을 가지고 있습니다.

#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더이상 변경할 수 없는
	// 메모리 공간입니다.
	
	const float pi = 3.14f;

	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.

	// pi = 6.66f; 
	
	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴
	// 상수라고 하며, 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.

	// + - * / %
	//1. 변수(result1) = 변수 + 변수
	//2. 변수(result2) = 변수 - 리터럴 상수
	//3. 변수(result3) = 변수 * 심볼릭 상수
	//4. 변수(result4) = 리터럴 상수 / 심볼릭 상수
	//5. 변수(result5) = 심볼릭 상수 % 심볼릭 상수

	int x = 10;
	int y = 5;

	int a = 15;
	int b = 20;

	int result1 = x + y;
	int result2 = x - a;
	int result3 = y * b;
	int result4 = a / b;
	int result5 = b % b;
	
	printf('d%\n', result1);
	printf('d%\n', result2);
	printf('d%\n', result3);
	printf('d%\n', result4);
	printf('d%\n', result5);


#pragma endregion

}