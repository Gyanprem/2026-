#include <stdio.h>
#define CLEAR_BIT(num, n)((num) &= ~(1<<(n)))

int main() {
unsigned int number = 5;
CLEAR_BIT(number, 2);
printf("no. after clearing the 2nd bit %u\n", number);
return 0;
}
