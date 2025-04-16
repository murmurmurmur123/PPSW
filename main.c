#include <LPC21xx.H>

#define LED_BM (1 << 16)

int main()
{
	IO1DIR = LED_BM;
	IO1SET = LED_BM;
	
	for (;;) { }
	
	return 0;
}
