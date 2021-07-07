#include "stm32l476xx.h"
#include <stdint.h>
#include <stdbool.h>


// This Function will turn off and on the required LED's to make the seven-segment display numbers 0 through 9

void wait_ms(uint32_t ms){
		uint32_t i, j;
		for(i = 0; i<ms; i++){
			for(j=0; j< 18000; j++){
		}
	}
}

void set_Display(int set_Number){
	if(set_Number == 0){
		GPIOE->ODR |= GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR &= ~GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 1){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR &= ~GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR &= ~GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR &= ~GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR &= ~GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 2){
		GPIOE->ODR |= GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR &= ~GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR &= ~GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 3){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR &= ~GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 4){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR &= ~GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR &= ~GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 5){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR &= ~GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 6){
		GPIOE->ODR |= GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR &= ~GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 7){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR &= ~GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR &= ~GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR &= ~GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 8){
		GPIOE->ODR |= GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12 
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
	if(set_Number == 9){
		GPIOE->ODR &= ~GPIO_ODR_ODR_10;  // Output PE10 
		GPIOE->ODR |= GPIO_ODR_ODR_11;  // Output PE11 
		GPIOE->ODR |= GPIO_ODR_ODR_12;  // Output PE12
		GPIOE->ODR |= GPIO_ODR_ODR_13;  // Output PE13 
		GPIOE->ODR |= GPIO_ODR_ODR_14;  // Output PE14 
		GPIOE->ODR |= GPIO_ODR_ODR_15;  // Output PE15 
		GPIOH->ODR |= GPIO_ODR_ODR_0;  // Output PH00 
}
}
void clock_initialize(){	
	// Enable High Speed Internal Clock (HSI = 16 MHz)
  RCC->CR |= ((uint32_t)RCC_CR_HSION);
	
  // wait until HSI is ready
  while ( (RCC->CR & (uint32_t) RCC_CR_HSIRDY) == 0 ) {;}
	
  // Select HSI as system clock source 
  RCC->CFGR &= (uint32_t)((uint32_t)~(RCC_CFGR_SW));
  RCC->CFGR |= (uint32_t)RCC_CFGR_SW_HSI;  //01: HSI16 oscillator used as system clock

  // Wait till HSI is used as system clock source 
  while ((RCC->CFGR & (uint32_t)RCC_CFGR_SWS) == 0 ) {;}
  
  // Enable the clock to GPIO Port A	
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;   

  // Enable the clock to GPIO Port E	
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOEEN;
	
	// Enable the clock to GPIO Port H	
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOHEN;
	}

void set_display_mode(){
	//PE10 set to segment a
	GPIOE->MODER &= ~(0x300000 << 0); // Clear mode bits
	GPIOE->MODER |=   0x100000 << 0;  // Set mode to output
	
	//PE11 set to segment b
	GPIOE->MODER &= ~(0x300000 << 2); // Clear mode bits
	GPIOE->MODER |=   0x100000 << 2;  // Set mode to output
	
	//PE12 set to segment c
	GPIOE->MODER &= ~(0x300000 << 4); // Clear mode bits
	GPIOE->MODER |=   0x100000 << 4;  // Set mode to output
	
	//PE13 set to segment d
	GPIOE->MODER &= ~(0x300000 << 6); // Clear mode bits
	GPIOE->MODER |=   0x100000 << 6;  // Set mode to output
	
	//PE14 set to segment e
	GPIOE->MODER &= ~(0x300000 << 8); // Clear mode bits
	GPIOE->MODER |=   0x100000 << 8;  // Set mode to output
	
	//PE15 set to segment f
	GPIOE->MODER &= ~(0x3 << 30); // Clear mode bits
	GPIOE->MODER |=   0x1 << 30;  // Set mode to output
	
	//PH0	set to segment g
	GPIOH->MODER &= ~(0x3); // Clear mode bits
	GPIOH->MODER |=   0x1;  // Set mode to output
}

	
void initialize_joystick(){
	
	
	
	GPIOA -> MODER &= ~(3UL<<2);   //clear bits 1 and sets inputmode
	GPIOA -> MODER &= ~(3UL<<4); //clear bits 2 and sets inputmode
	
	GPIOA -> PUPDR |= (2UL<<2);  //sets pin 1 to pulldown
	GPIOA -> PUPDR |= (2UL<<4); //sets pin 2 to pulldown
	
}

bool is_button_pressed(uint32_t mask){

	int counter = 0;
	int i = 0;
	uint32_t input;	
	input = (GPIOA->IDR & mask) == mask;	
	if(input == 0){
		return false;	
	}	
	for(i=0;i<10;i++){
		wait_ms(5);
		input = (GPIOA->IDR & mask) == mask;	
		if(input == 0){
			counter = 0;
		}else{
			counter = counter + 1;
			if(counter>=4){
				return true;
				
			}
		}
	}
	return false;
}	
	


int main(void){	
	int i,x,y = 0;
	uint32_t right = 1UL<<2;
	uint32_t left = 1UL<<1;
	clock_initialize();
	set_display_mode();
	initialize_joystick();
	
  // Dead loop & program hangs here
	while(1){
		
		if(is_button_pressed(right) == true){
			if(i==9){
				i=-1;
			}
			i++;
			set_Display(i);
		}
		if(is_button_pressed(left) == true){
			if(i==0){
				i=10;
			}
			i--;
			set_Display(i);								
   }
}
	}
