#include<stdio.h>

int load();

int main()
{
	
	
	load();


}


int load()
{

	FILE *fp;
	char ch;
	
	fp = fopen("file.txt", "r");
	
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
}
