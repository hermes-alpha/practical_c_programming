#include <stdio.h>
#include <assert.h>

struct customers {
	int orderid;
	char customer_name[20];
	float amount;
};

static_assert(
	sizeof(struct customers) == 28,
	"The structure is consuming unexpected number of bytes");

int main(void)
{
	printf( "sizeof(int)\t\t%lu\n"
			"sizeof(float)\t\t%lu\n"
			"sizeof(char)\t\t%lu\n"
			"sizeof(struct customers)\t%lu\n",
			sizeof(int), sizeof(float),
			sizeof(char), sizeof(struct customers));

	return 0;
}
