#include<stdio.h>

int pc			= 0;
int mem[100]	= {0};

void power_on();
void fetch();
void decode();
void execute();
void delay();
int load();

int main()
{
	char yn;
	printf("Turn on power?(y/n)\n");
	scanf("%c", &yn);
	if(yn == 'y')
	{
		power_on();	
	}
	
}
void power_on()
{
	int i = 0;
	printf("Power_on\n");
	load();
	
	while(i < 11)
	{
		printf("pc: 0x%x\n", pc);
		fetch();
		decode();
		execute();
		pc++;
		delay();
		
		
		i++;
	} 
	
}

void fetch()
{
	printf("Fetched Instruction: 0x%x\n", mem[pc]);

}

void decode()
{
	printf("decoded Instruction: 0x%x\n", mem[pc]);

}

void execute()
{
	printf("executed Instruction: 0x%x\n", mem[pc]);

}

void delay()
{
	volatile int i;  
	for(i = 0; i < 0xFFFFFFF; i++);
	
	
}

int load()
{

	FILE *fp;
	int i = 0;
	
	fp = fopen("inst.bin", "rb");
	
	while(1 == fread(&mem[i],sizeof(int),1,fp))
	{
		i++;
	}
}
