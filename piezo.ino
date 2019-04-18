
/* Use File->Load Prog to
   load a different Program
*/

#define piezo 8

void setup()
{
	pinMode(piezo,OUTPUT);
}

void loop()
{
	tone(piezo,523);
	delay(3000);
	noTone(piezo);
}
