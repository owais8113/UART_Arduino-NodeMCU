void setup() {
  Serial.begin(9600);  // Initialize serial communication for monitoring
  Serial.swap();       // Swap to use UART0 on GPIO13(TX) and GPIO15(RX) if required
  Serial.setTimeout(2000); // Set a timeout for Serial.readStringUntil
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    Serial.print("Received data: ");
    Serial.println(data);
    
    // Further processing of the received data can be done here
  }
}
