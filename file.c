#include<stdio.h>
#include<stdlib.h>

int main(void) {
	FILE* fp1, *fp2;
	char file[100], file2[100];
	char buffer[100];

	printf("original file name: ");
	scanf("%s", file1);

	printf("copy file name: ");
	scanf("%s", file2);

	if((fp1=fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "original file  %s can not open.\n",file1);
		exit(1);
	}

	if((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "copy file %s can not open.\n",file2);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL)
  		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);
	return 0;
}

