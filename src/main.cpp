#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author rishabh-rb
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

// TODO 1:
// Define LDR analog pin (Use A0)
#define LDR_PIN A0

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;

// Threshold value (adjust if needed)
int threshold = 500;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Intensity Monitoring System - Initialized");
    delay(1000);
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // TODO 7 & 8:
    // Apply threshold logic (Bright / Dark detection)
    if (ldrValue > threshold) {
        Serial.println("Status: Bright Environment");
    } else {
        Serial.println("Status: Dark Environment");
    }

    Serial.println("-----------------------------");

    // TODO 9:
    // Add delay (1 second)
    delay(1000);
}