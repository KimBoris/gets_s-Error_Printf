#include <stdio.h>

int main(void)
{//gets_s Error �� ���Ĺ���, �̽������� ������
	//
	char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));
	printf("=============\n\n\n");

	int x = 10;
	putchar('B');
	putchar('\n');
	printf("%c\n", 'A');
	printf("x�� %d�Դϴ�.\n", x);
	//�޸� �����÷ο츦 ���� ������

	//c����� ���Ĺ���
	// ���Ĺ���		�ڷ���			�������
	//    %c		int(char)		character, ASCII ���ڷ� ���
	//    %d		int				Decimal. ��ȣ�� �ִ� 10������ ���
	//    %o		int				Octal. 8������ ���
	//    %u		unsigned int	Unsigned. ��ȣ�� ���� 10������ ���
	//    %x,%X						Hexa. 16������ ���
	//    %e,%E		float, double	Exponent. ������ �Ҽ��� ���
	//    %f		double(float)	float. 10���� �Ҽ��� ���
	//    %g		double			������ �Ҽ�(%e)�� 10���� �Ҽ�(%f)�� ���. ��, ��µǴ� ���ڿ��� ª�� ���·� ����Ѵ�.
	//    %p		Pointer			16���� �ּҷ� ���
	//    %s		String			�μ��� ����Ű�� �޸��� ������ ���ڿ��� ���


	//�̽������� ������
	//   ����			�ǹ�
	//	  \a		����� �︲	
	//	  \b		BackSpace
	//	  \f		�μ�� ���� ���� �ѱ�(Form feed)
	//	  \n		New Line	
	//	  \r		Carriage return
	//	  \t		Tab
	//	  \v		Vertical tab
	//	  \\		Backslash
	//	  \?		����ǥ
	//	  \'		���� ����ǥ, ���� ���
	//	  \"		ū ����ǥ, ���ڿ� ���
	//	  \ooo		8����
	//	  \xhh		16����
	

	return 0;
}