#include <stdio.h>

int main(void)
{//gets_s Error 및 형식문자, 이스케이프 시퀀스
	//
	char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));
	printf("=============\n\n\n");

	int x = 10;
	putchar('B');
	putchar('\n');
	printf("%c\n", 'A');
	printf("x는 %d입니다.\n", x);
	//메모리 오버플로우를 통한 오버런

	//c언어의 형식문자
	// 형식문자		자료형			출력형식
	//    %c		int(char)		character, ASCII 문자로 출력
	//    %d		int				Decimal. 부호가 있는 10진수로 출력
	//    %o		int				Octal. 8진수로 출력
	//    %u		unsigned int	Unsigned. 부호가 없는 10진수로 출력
	//    %x,%X						Hexa. 16진수로 출력
	//    %e,%E		float, double	Exponent. 지수형 소수로 출력
	//    %f		double(float)	float. 10진형 소수로 출력
	//    %g		double			지수형 소수(%e)나 10진형 소수(%f)로 출력. 단, 출력되는 문자열이 짧은 형태로 출력한다.
	//    %p		Pointer			16진수 주소로 출력
	//    %s		String			인수가 가리키는 메모리의 내용을 문자열로 출력


	//이스케이프 시퀀스
	//   문자			의미
	//	  \a		경고음 울림	
	//	  \b		BackSpace
	//	  \f		인쇄시 종이 한장 넘김(Form feed)
	//	  \n		New Line	
	//	  \r		Carriage return
	//	  \t		Tab
	//	  \v		Vertical tab
	//	  \\		Backslash
	//	  \?		물음표
	//	  \'		작은 따옴표, 문자 상수
	//	  \"		큰 따옴표, 문자열 상수
	//	  \ooo		8진수
	//	  \xhh		16진수
	

	return 0;
}