/*
 * Oxialert v0.6
 * Oxialert by jottafis is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
 */

#include <Wire.h>
#include "MAX30105.h"
#include <Adafruit_NeoPixel.h>
#include <Ticker.h>

MAX30105 particleSensor;
int buzzer = 13;
#define maxperiod_siz 120   // Max number of samples in a period
#define measures 100        // Number of periods stored
#define samp_siz 4          // Number of samples for average
#define rise_threshold 4    // Number of rising measures to determine a peak
#define PIN D8

int T = 20;  // Slot milliseconds to read a value from the sensor
int SpO2 = 0;
int c = 0;
int c1 = 0, som = 0, tom = 261;
int L = 0, alarme = 0;
int aum = 0;
Ticker ticker;
int v1 = 255;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8, PIN, NEO_GRB + NEO_KHZ800);
uint32_t verde = pixels.Color(0, 200, 0);
uint32_t vermelho = pixels.Color(200, 0, 0);

void setup() {
  Serial.begin(115200);
  Serial.flush();
  pixels.begin();
  pinMode(buzzer, OUTPUT);
  if (particleSensor.begin() == false) {
    Serial.println("MAX30105 was not found. Please check wiring/power. ");
    pixels.fill(pixels.Color(50, 50, 50));
    pixels.show();
    while (1);
  }
  byte ledBrightness = 55;
  byte sampleAverage = 16;
  byte ledMode = 2;
  byte sampleRate = 1000;
  int pulseWidth = 411;
  int adcRange = 4096;

  particleSensor.setup(ledBrightness, sampleAverage, ledMode, sampleRate, pulseWidth, adcRange);
  ticker.attach(0.1, timerIsr);
}

void loop() {
  bool finger_status = true;
  float readsIR[samp_siz], sumIR, lastIR, reader, reader1, start;
  float readsRED[samp_siz], sumRED, lastRED;
  int period, samples;
  period = 0;
  samples = 0;
  int samplesCounter = 0;
  float readsIRMM[maxperiod_siz], readsREDMM[maxperiod_siz];
  int ptrMM = 0;
  for (int i = 0; i < maxperiod_siz; i++) {
    readsIRMM[i] = 0;
    readsREDMM[i] = 0;
  }
  float IRmax = 0;
  float IRmin = 0;
  float REDmax = 0;
  float REDmin = 0;
  double R = 0;
  float measuresR[measures];
  int measuresPeriods[measures];
  int m = 0;
  for (int i = 0; i < measures; i++) {
    measuresPeriods[i] = 0;
    measuresR[i] = 0;
  }
  int ptr;
  float beforeIR;
  bool rising;
  int rise_count;
  int n;
  long int last_beat;
  for (int i = 0; i < samp_siz; i++) {
    readsIR[i] = 0;
    readsRED[i] = 0;
  }
  sumIR = 0;
  sumRED = 0;
  ptr = 0;

  while (1) {
    // Code...
    // Comment your code to explain what each section does
    // ...
  }
}

void setColor(int led, int redValue, int greenValue, int blueValue) {
  pixels.setPixelColor(led, pixels.Color(redValue, greenValue, blueValue));
  pixels.show();
}

void timerIsr() {
  // Code for timer interrupt handler
  // ...
}

void gameboy() {
  // Code for the gameboy function
  // ...
}

void baixo() {
  // Code for the baixo function
  // ...
}
