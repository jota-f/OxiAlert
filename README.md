# Oxialert v0.6

Oxialert is an open-source pulse oximeter project based on the MAX30105 sensor and Arduino. It measures blood oxygen saturation (SpO2) and heart rate (BPM) through the user's fingertip and displays the results on an LED indicator. This project is designed for easy and quick use.

## Features

- SpO2 and BPM measurement.
- LED indicator for visual feedback.
- Alarm functionality for abnormal readings.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno).
- MAX30105 sensor.
- NeoPixel LED strip.
- Buzzer.
- Other necessary components (wires, resistors, etc.).

## Installation

1. Clone this repository to your local machine.

2. Connect the hardware components according to the provided circuit diagram (in the `docs/` folder).

3. Upload the Arduino sketch (`Oxialert.ino`) to your Arduino board.

4. Power up the system and place your fingertip on the sensor.

## Usage

- The system will display SpO2 and BPM readings on the LED indicator.
- An alarm will sound if abnormal readings are detected.

## Imnages
![image](https://github.com/jota-f/OxiAlert/assets/21985346/3722dc6a-6976-4b09-a9b1-d822c43658a7)

![image](https://github.com/jota-f/OxiAlert/assets/21985346/f6e4ae5b-c728-4184-aca6-50ff461d464a)

## Video
-[OxiAlert](https://youtube.com/shorts/Uhm0x5Izof8?feature=share)

## License

This project is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. See the [LICENSE](LICENSE) file for details.

## Contributors

- [jota-f](https://github.com/jota-f)

## Acknowledgments

-[3D printed Case](https://www.thingiverse.com/thing:6221860)

## disclaimer

Without knowing what's typical for you, it's hard to know if your numbers are concerning. 
While 95% to 100% is normal for most healthy people, someone with chronic lung disease may be at 92% "on a good day." 
See a doctor "if the number is trending downward over time and drops to 92% or lower, especially if you are experiencing other respiratory symptoms."

This is a device developed as a form of study, it is not medical equipment.
There is no approval and/or tests that prove its correct functioning. Use at your own risk

