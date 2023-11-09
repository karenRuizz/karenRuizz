int motor = 8;
int bomba = 13;
int infrarrojo2=7;
int infrarrojo3=3;
int sensor2=0;
int sensor3=0;

void setup(){
  // ASIGNACION DE SALIDAS DIGITALES.
  Serial.begin(9600);
  pinMode(infrarrojo2,INPUT);
  pinMode(infrarrojo3,INPUT);
  pinMode(motor, OUTPUT);  //definir pin como salida
  pinMode(bomba, OUTPUT);  //definir pin como salida
}

void loop(){
  digitalWrite(bomba, LOW); // Prendido bomba
  digitalWrite(motor, LOW); // LOW prendido motor
  sensor2 = digitalRead(infrarrojo2);
  if(sensor2==0){
      
      digitalWrite(motor, LOW);  // prendido motor
      delay(2000);
      digitalWrite(motor, HIGH);  // apaga motor
      digitalWrite(bomba, HIGH); // prendido bomba 
      delay(20000);  // Llenado
      digitalWrite(bomba, LOW); // apagado bomba
      digitalWrite(motor, LOW); // LOW prendido motor
      delay(3000);}
      
  sensor3 = digitalRead(infrarrojo3);
  if(sensor3==0){
    digitalWrite(motor, HIGH);  // apagado motor
    delay(5000);
  }
  
}
