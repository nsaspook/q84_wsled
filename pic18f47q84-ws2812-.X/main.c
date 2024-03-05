/*
 * hardware of LED output
 * SPI1
 * DMA3
 * CLC3
 * PWM1
 */

#pragma warning disable 520
#pragma warning disable 1090
#pragma warning disable 1498
#pragma warning disable 2053

#include "mcc_generated_files/mcc.h"

bool buttonPressed = false;

void ws_led_isr(void);

/*
			 Main application
 */
void main(void)
{
	// Initialize the device
	SYSTEM_Initialize();

	/*
	 * TMR0 DMA trigger isr
	 */
	TMR0_SetInterruptHandler(ws_led_isr);

	// Enable high priority global interrupts
	INTERRUPT_GlobalInterruptHighEnable();

	while (1) {
		__delay_ms(500);
		MLED_Toggle();
		RLED_Toggle();
		DLED_Toggle();
	}
}

void ws_led_isr(void)
{
	uint24_t ws2812_seed_addr = (uint24_t) & ws2812_seed;

	// start DMA transfer (transfer GRB data to SPI for WS2812)
	DMASELECT = 0x02;
	DMAnCON0bits.SIRQEN = 1;
	DMAnSSA += DMAnSSZ; // move source start addr ahead
	if (DMAnSSA >= (ws2812_seed_addr + WS2812_SEED_SIZE)) // rollover
	{
		DMAnSSA = ws2812_seed_addr;
	}
}
/**
 End of File
 */