#include <stdio.h>
#include <stdint.h>
//define tasks
void task0(){ printf("task0\n");}
void task1(){ printf("task1\n");}
void task2(){ printf("task2\n");}
void task3(){ printf("task3\n");}
void task4(){ printf("task4\n");}
void task5(){ printf("task5\n");}
void task6(){ printf("task6\n");}
#define NTASKS 4
typedef void (*pt2function)(void);//pt2function is a pointer to function with void input and return type is also void

struct PCBstruct
{
    pt2function Taskptr;
    uint8_t Period;
    uint8_t TimeLeft;
    uint8_t ReadyToRun;
};

struct PCBstruct PCB[NTASKS];

//pointers to task functions


int main(void)
{
	
	// init PCB values
    PCB[0].Taskptr = &task0; PCB[0].Period = 1; PCB[0].TimeLeft = 1;
    PCB[1].Taskptr = &task1; PCB[1].Period = 2; PCB[1].TimeLeft = 1;
    PCB[2].Taskptr = &task2; PCB[2].Period = 4; PCB[2].TimeLeft = 1;
    PCB[3].Taskptr = &task3; PCB[3].Period = 5; PCB[3].TimeLeft = 1;
    PCB[4].Taskptr = &task4; PCB[4].Period = 7; PCB[4].TimeLeft = 1;

	for(int j=0;j<10;j++)
	{
	    for (int i = 0; i <= NTASKS; i++)
        { if (--PCB[i].TimeLeft == 0) // decrement and check time
        // NOTE: “time” is in # iterations, not wall time
        { 
            PCB[i].Taskptr(); // TimeLeft is zero – execute task
            PCB[i].TimeLeft = PCB[i].Period; // re-init TimeLeft
        }
}
	}
	return 0;
}