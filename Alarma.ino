/*
Castañeda Mares Luis Gerardo.
Práctica: ALARMA.
15 de marzo de 2018
Sistemas Programables

*/

int rswitch = 7; //El pin 2 será usado para el reed switch
int led= 8; //El pin 13 es para el LED

void setup() 
{
pinMode(rswitch,INPUT); //El reed switch se asigna como entrada
pinMode(led, OUTPUT); //El LED se asigna como salida.
}

void loop() 
{ 
if (digitalRead(rswitch)==LOW){// en este IF se valida la cercania del iman con el reed switch, si está cerca, se ejecuta el ciclo FOR

for(int x=0; x<30; x++){ //El ciclo se repite hasta que el valor de a sea igual o mayor a 50
digitalWrite(led,HIGH); //se enciende el LED
delay(50); //Lapso de tiempo
digitalWrite(led,LOW); //Se apaga el LED
delay(50); //Lapso de tiempo
}
}else{ //Si no...
digitalWrite(led,LOW); //El LED se queda apagado
}
}
