#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there 
*
*betty style doc for function main goes there 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char word = 'a';
	while( word <='z')
	{
		putchar(word);
		word++;
	}
	char WORD = 'A';
	for (WORD='A',WORD<='Z',WORD++)
	{
		putchar(WORD);
	]
	putchar('\n');
	return (0);
