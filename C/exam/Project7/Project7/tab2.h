#pragma once
#include<stdio.h>
void tab2(FILE *fp2, FILE *fp3)
{
	char c;
	while (!(feof(fp2)))
	{
		c = fgetc(fp2);
		if (c == '\t')
		{
			fputs("\/t", fp3);

		}
		else
			fputc(c, fp3);
	}
	printf("\n");
	printf("After replacing the content would be\n");
	rewind(fp3);
	while (!(feof(fp3)))
	{
		c = fgetc(fp3);
		printf("%c", c);
	}
}