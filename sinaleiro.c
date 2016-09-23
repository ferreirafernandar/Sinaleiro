#define VERMELHO 48
#define AMERELO 50
#define VERDE 52

void setup(){
	pinMode(VERMELHO, OUTPUT);
	pinMode(AMERELO, OUTPUT);
	pinMode(VERDE, OUTPUT);
	
	digitalWrite(VERMELHO, LOW);
	digitalWrite(AMERELO, LOW);
	digitalWrite(VERDE, LOW);
}


void loop(){
	digitalWrite(VERMELHO, HIGH);
	
	delay(1000);
	
	digitalWrite(VERMELHO, LOW);
	digitalWrite(VERDE, HIGH);
	
	delay(1000);
	
	digitalWrite(VERDE, LOW);
	digitalWrite(AMERELO, HIGH);
	
	delay(500);
	
	digitalWrite(AMERELO, LOW);
}