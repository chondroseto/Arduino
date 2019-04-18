
/* Use File->Load Prog to
   load a different Program
*/

#define pwm 13
#define dir 12
#define enc 11
int a,b;
int c_l,c_r;
void setup()
{
	pinMode(pwm,OUTPUT);
	pinMode(dir,OUTPUT);
	pinMode(enc,INPUT);
}

void loop()
{
	for(a=0; a<=9; a++){
		digitalWrite(dir,LOW);
		digitalWrite(pwm,HIGH);
		delay(700);
		digitalWrite(pwm,LOW);
		delay(300);
		c_r=digitalRead(enc);
	}
	for(b=0;b<=6; b++){
		digitalWrite(dir,HIGH);
		digitalWrite(pwm,HIGH);
		delay(300);
		digitalWrite(pwm,LOW);
		delay(700);
		c_l=digitalRead(enc);
	}
}
