# BCA188 Lab: ESP32 & Dabble Bluetooth Setup

## 📝 About This Project
This repository contains my setup and code for our BCA188 laboratory activity. The main goal here is to successfully establish a Bluetooth connection between an ESP32 microcontroller and a mobile phone using the Dabble application.

## ⚙️ Requirements

### Hardware Components:
* An ESP32 Development Board
* A USB Data Cable (to connect to the PC)
* A mobile phone to run the application

### Software Tools:
* Visual Studio Code equipped with the PlatformIO extension
* The Dabble mobile app (available on Android/iOS)

## 🚀 How to Run This Project

### Step 1: Setting up the Environment
Make sure you have Visual Studio Code installed on your computer, and then install the PlatformIO IDE extension from the marketplace.

### Step 2: Project Configuration
Open this project folder using PlatformIO. Check that your environment is set up with the following:
* **Board:** Espressif ESP32 Dev Module
* **Framework:** Arduino

### Step 3: Flashing the Code
Plug your ESP32 board into your computer using the USB cable. Build the project and click the Upload button (the right arrow icon at the bottom toolbar of VS Code) to flash the firmware.

### Step 4: Bluetooth Pairing
Open the Dabble app on your smartphone. Search for nearby Bluetooth devices and connect to "ESP32_Dabble". If it prompts you for a pairing PIN, enter 1234.

### Step 5: Testing the Connection
Once paired, navigate to the Terminal module inside the Dabble app. Type and send a message—if everything is working correctly, the ESP32 will reply with an acknowledgment message to confirm receipt.
