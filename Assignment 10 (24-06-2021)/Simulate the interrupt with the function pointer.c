//Simulate the interrupt with the function pointer
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct
{
	char interrupt_name[32];
	int (*isr)();
}isr_t;

int keyboard_interrupt()
{
	printf("Generating keyboard interrupt..\n");
}
int mouse_interrupt()
{
	printf("Generating mouse interrupt..\n");
}
int i2c_interrupt()
{
	printf("Generating i2c interrupt..\n");
}
int rtc_interrupt()
{
	printf("Generating rtc interrupt..\n");
}
int usb_interrupt()
{
	printf("Generating usb interrupt..\n");
}

isr_t ivt[] = 
{
	{"isr0", keyboard_interrupt},
	{"isr1",mouse_interrupt},
	{"isr2",i2c_interrupt},
	{"isr3",rtc_interrupt},
	{"isr4",usb_interrupt}	
};

int main()
{
    while(1)
    {
    	(ivt[rand()%5].isr)();
    	sleep(1);
	}
}
/*Output:
Generating mouse interrupt..
Generating i2c interrupt..
Generating usb interrupt..
Generating keyboard interrupt..
Generating usb interrupt..
Generating usb interrupt..
Generating rtc interrupt..
.......
.........
................
*/