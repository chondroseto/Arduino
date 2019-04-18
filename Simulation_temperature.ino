
/* Use File->Load Prog to
   load a different Program
*/

#define ledr 13
#define ledy 12
#define ledg 11
#define ledb 10
int c; 

void setup()
{
	pinMode(ledr,OUTPUT);
	pinMode(ledg,OUTPUT);
	pinMode(ledb,OUTPUT);
	pinMode(ledy,OUTPUT);
	c = 0;
}

void loop()
{
	c=c+1;
	delay(250);
	if (c <= 20){
		digitalWrite(ledr,LOW);
		digitalWrite(ledy,LOW);
		digitalWrite(ledg,LOW);
		digitalWrite(ledb,HIGH);
	}
	if (c >= 20 && c <= 30){
		digitalWrite(ledr,LOW);
		digitalWrite(ledy,LOW);
		digitalWrite(ledg,HIGH);
		digitalWrite(ledb,LOW);
	}
	if (c >= 30 && c <= 35){
		digitalWrite(ledr,LOW);
		digitalWrite(ledy,HIGH);
		digitalWrite(ledg,LOW);
		digitalWrite(ledb,LOW);
	}
	if (c >= 35){
		digitalWrite(ledr,HIGH);
		digitalWrite(ledy,LOW);
		digitalWrite(ledg,LOW);
		digitalWrite(ledb,LOW);
		if (c == 100){
		c=0;}
	}
}
