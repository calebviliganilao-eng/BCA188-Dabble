#define CUSTOM_SETTINGS
#define INCLUDE_TERMINAL_MODULE
#include <DabbleESP32.h>

void setup() {
  Serial.begin(115200);
  
  // Initialize Dabble over BLE (pass your device name directly)
  Dabble.begin("ESP32_Dabble"); 
  Serial.println("Bluetooth BLE is ready. Connect using Dabble app.");
}

void loop() {
  // Process incoming data from Dabble app
  Dabble.processInput(); 

  // Check if a message is received from the Terminal module
  if (Terminal.available()) {
    String message = Terminal.readString();
    Serial.print("Received from phone: ");
    Serial.println(message);

    // Send a reply back to the mobile phone via Terminal
    Terminal.print("ESP32: Message received - ");
    Terminal.println(message);
  }

  // Small delay to prevent watchdog reset
  delay(10); 
}
