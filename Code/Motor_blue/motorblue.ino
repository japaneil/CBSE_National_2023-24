
int m1a = 9; 
int m1b = 10; 
int m2a = 11; 
int m2b = 12; 
char val; 

void setup() { 
pinMode(m1a, OUTPUT); 
pinMode(m1b, OUTPUT); 
pinMode(m2a, OUTPUT); 
pinMode(m2b, OUTPUT); 
Serial.begin(9600);
} 

void loop() { 
while (Serial.available() > 0) 
{ 
val = Serial.read(); 
Serial.println(val); 
} 

if( val == 'F') 
{ 
digitalWrite(m1a, HIGH); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, HIGH); 
digitalWrite(m2b, LOW);
} 

else if(val == 'B')  
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, HIGH); 
digitalWrite(m2a, LOW); 
digitalWrite(m2b, HIGH); 
} 

else if(val == 'L')
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, HIGH); 
digitalWrite(m2b, LOW); 
} 

else if(val == 'R') 
{ 
digitalWrite(m1a, HIGH); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, LOW); 
digitalWrite(m2b, LOW); 
} 

else if(val == 'S') 
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, LOW);
digitalWrite(m2a, LOW); 
digitalWrite(m2b, LOW); 
} 

else if(val == 'I') 
{ 
digitalWrite(m1a, HIGH); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, LOW); 
digitalWrite(m2b, LOW);
} 

else if(val == 'J') 
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, HIGH); 
digitalWrite(m2a, LOW); 
digitalWrite(m2b, LOW); 
}
 
else if(val == 'G') 
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, HIGH); 
digitalWrite(m2b, LOW); 
} 

else if(val == 'H')
{ 
digitalWrite(m1a, LOW); 
digitalWrite(m1b, LOW); 
digitalWrite(m2a, LOW); 
digitalWrite(m2b, HIGH); 
}

    }
