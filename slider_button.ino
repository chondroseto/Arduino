
/* Use File->Load Prog to
   load a different Program
*/

#define L1 8
#define L2 9
#define Btn1 7
#define pwm 10
#define dir 11

int dig_val = 0;
int alg_val = 0;


void setup()
{
	pinMode(L1,OUTPUT);
	pinMode(L2,OUTPUT);
	pinMode(Btn1,INPUT);
}

void loop()
{
	digitalWrite(pwm,HIGH);
	dig_val = digitalRead(Btn1);
	if (dig_val == HIGH) 
		digitalWrite(L1,HIGH);
	else 
		digitalWrite(L1,LOW);
		
	
	alg_val = analogRead(0);
	
	digitalWrite(L2,HIGH);
	delay(0+alg_val);
	digitalWrite(dir,HIGH);
	
	digitalWrite(L2,LOW);
	delay(1023-alg_val);
	digitalWrite(dir,LOW);
	
}
