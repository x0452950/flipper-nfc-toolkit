# Flipper Zero NFC Toolkit

**Graduate Capstone Project**

A custom firmware extension for Flipper Zero, focused on creating an NFC toolkit capable of spoofing, fuzzing, and emulating various NFC tags. Developed as part of a cybersecurity graduate capstone.

## Features
- Custom NDEF tag emulation
- NTAG215 spoofing with custom memory blocks
- NFC reader fuzzing module
- Clean integration with official Flipper Zero firmware

## How to Use
1. Clone the [flipperzero-firmware](https://github.com/flipperdevices/flipperzero-firmware) repo
2. Copy `applications_user/nfc_custom` into the firmware root
3. Add this line to `applications_user/CMakeLists.txt`:
   ```cmake
   add_subdirectory(nfc_custom)
   ```
4. Build and flash:
   ```bash
   ./fbt
   ./fbt flash
   ```

## Project Structure
```
applications_user/
└── nfc_custom/
    ├── nfc_custom.c         // Core tool logic
    └── CMakeLists.txt       // Build configuration
```

## Technologies
- Flipper Zero SDK (C, STM32)
- FreeRTOS-based architecture
- Python (build tooling)

## Legal Notice
This tool is intended strictly for **educational and research purposes**. Do not use it to emulate or spoof secure NFC systems such as payment cards.
