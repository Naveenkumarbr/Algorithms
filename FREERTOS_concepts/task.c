#include <stdio.h>

//define tasks
void task0(){ printf("task0\n");}
void task1(){ printf("task1\n");}
void task2(){ printf("task2\n");}
void task3(){ printf("task3\n");}
void task4(){ printf("task4\n");}
void task5(){ printf("task5\n");}
void task6(){ printf("task6\n");}



//pointers to task functions
#define NTASKS 7
typedef void (*pt2function)(void);//pt2function is a pointer to function with void input and return type is also void
pt2function PCB[NTASKS];

int main(void)
{
	
	PCB[0] = &task0;
	PCB[1] = &task1;
	PCB[2] = &task2;
	PCB[3] = &task3;
	PCB[4] = &task4;
	PCB[5] = &task5;
	PCB[6] = &task6;
	
	for(int i=0;i<NTASKS;i++)
	{
		PCB[i]();
	}
	return 0;
}