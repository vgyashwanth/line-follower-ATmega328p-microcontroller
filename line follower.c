#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>
int main(void){
  DDRB=DDRB|(1<<0);//0b00000001
  DDRB=DDRB|(1<<1);//0b00000011
  
  DDRD=DDRD|(1<<2);//0b00000100
  DDRD=DDRD|(1<<3);//0b00001100
  DDRD=~(DDRD);//0b11110011
  PORTD=0b00001100;
  unsigned char button;
  while(1){
    button=PIND;
    if(button==0x00){
      
      PORTB=0b00000011;
      
      }else if(button==0x08){
        
        PORTB=0b00000010;
        
        }else if(button==0x04){
          
            PORTB=0b00000001;
          
          
          }else{
            
            PORTB=0b00000000;
            
            }
    
 }
   return 0;
   }
