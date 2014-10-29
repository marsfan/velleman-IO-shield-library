int inputPins = [2,3,4,5,6,7];
int outputPins = [8,9,10,11,12,13];

void setup(){
	for(int i = 0; i < inputPins.length; i++){
		pinMode(inputPins[i], INPUT);
	}
	for(int i = 0; i < outputPins.length; i++){
		pinMode(outputPins[i], OUTPUT);
	}
	Serial.begin(9600);
}

void loop(){
       
}
