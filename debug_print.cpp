#include <cstdio>
#define Debug_print (printf("[%s--%s] %s:%d[%s]\t", \
	__DATE__, __TIME__, __FILE__, __LINE__, __FUNCTION__), printf)
#define Debug_print1(fmt, para) \
do{ \
	printf("[%s--%s] %s:%d[%s]\t", \
	 __DATE__,__TIME__, __FILE__, __LINE__, __FUNCTION__);\
	printf(fmt, para);\
} while(0)
int main()
{
	int a = 10;
	Debug_print("a=%d\n", a);
	Debug_print1("a=%d\n", a);

	return 0;
}