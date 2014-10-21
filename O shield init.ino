void setup(){
	for(int i = 2; i < 8; i++){
		pinMode(i, INPUT);
	}
	for(int i = 8; i < 14; i++){
		pinMode(i, OUTPUT);
	}
	Serial.begin(9600);
}

avoid loop(){
       
}
