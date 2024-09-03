#define MQ135pin (0)

void setup()
{
    Serial.begin(9600); // Inicializamos el puerto serial a 9600 baudios
    Serial.println("El sensor de contaminación se esta pre-calentando.");
    delay(20000); // Espera a que el sensor se caliente durante 20s.
}

void loop()
{
    sensorValue = analogRead(MQ135pin); // Lectura de la entrada analoga "A0"
    Serial.print("Valor detectado por el sensor: ");
    Serial.print(sensorValue);
    if (sensorValue > 300)
    {
        Serial.print(" | Se ha detectado contaminación!")
    }
    Serial.print("");
    delay(2000); // Espera 2s para la siguiente lectura
}
