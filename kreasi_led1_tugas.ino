
/* Use File->Load Prog to
   load a different Program
*/

#define ledg 13
#define ledy1 12
#define ledy2 11
#define ledy3 10
#define ledr 09
int c; 
int i;
int j;

void setup()
{
	pinMode(ledr,OUTPUT);
	pinMode(ledy1,OUTPUT);
	pinMode(ledy2,OUTPUT);
	pinMode(ledy3,OUTPUT);
	pinMode(ledg,OUTPUT);
	c = 0;
}

void loop()
{
	if (c==0){
		digitalWrite(ledg,LOW);
		for (i = 1; i<=10; i = i+1){
			digitalWrite(ledy1,HIGH);
			digitalWrite(ledy2,LOW);
			digitalWrite(ledy3,LOW);
			delay(250);
			digitalWrite(ledy1,LOW);
			digitalWrite(ledy2,HIGH);
			digitalWrite(ledy3,LOW);
			delay(250);
			digitalWrite(ledy1,LOW);
			digitalWrite(ledy2,LOW);
			digitalWrite(ledy3,HIGH);
			delay(250);}
		digitalWrite(ledy1,LOW);
		digitalWrite(ledy2,LOW);
		digitalWrite(ledy3,LOW);
		digitalWrite(ledr,HIGH);
		c=1;
		i=1;
		delay(2000);}	
	if (c == 1){
		digitalWrite(ledr,LOW);
		for (j = 1; j<=10; j= j+1){
			digitalWrite(ledy1,LOW);
			digitalWrite(ledy2,LOW);
			digitalWrite(ledy3,HIGH);
			delay(250);
			digitalWrite(ledy1,LOW);
			digitalWrite(ledy2,HIGH);
			digitalWrite(ledy3,LOW);
			delay(250);
			digitalWrite(ledy1,HIGH);
			digitalWrite(ledy2,LOW);
			digitalWrite(ledy3,LOW);
			delay(250);}
		digitalWrite(ledg,HIGH);
		digitalWrite(ledy1,LOW);
		digitalWrite(ledy2,LOW);
		digitalWrite(ledy3,LOW);
		c=0;
		j=1;
		delay(2000);}	
	
}
