
/* Use File->Load Prog to
   load a different Program
*/

#define LEDR 08
#define LEDY 09
#define LEDG 10
#define Piezo 11
#define pwm 12
#define dir 13
int c;
int i;

void setup()
{
	pinMode(LEDR,OUTPUT);
	pinMode(LEDY,OUTPUT);
	pinMode(LEDG,OUTPUT);
	pinMode(Piezo,OUTPUT);
	pinMode(pwm,OUTPUT);
	pinMode(dir,OUTPUT);
	c=1;
	i=0;
}

void loop()
{
	
	if (c == 1){
		digitalWrite(dir,HIGH);
		digitalWrite(pwm,HIGH);
		digitalWrite(LEDR,LOW);
		digitalWrite(LEDG,HIGH);
		delay(5000);
		c=0;
	}
	if (c == 0){
		digitalWrite(LEDR,HIGH);
		digitalWrite(LEDG,LOW);
		digitalWrite(dir,LOW);
		digitalWrite(pwm,HIGH);
		for (i = 1; i<=10; i = i+1){
			digitalWrite(LEDY,HIGH);
			tone(Piezo,523); 
			delay(750);
			digitalWrite(LEDY,LOW);
			noTone(Piezo);
			delay(750);}
		delay(1000);
		c=1;
	}	
}
