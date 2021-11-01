# [Frozen] embedQR integration into Tasmota

The repository at hand offers the first application of the [embedQR](https://github.com/resmh/embedQR) library as a fork to the [Tasmota](https://github.com/arendst/Tasmota) firmware. It enables to easily and securely join Tasmota devices to WiFi networks entirely through QR Codes and is retained for reference purposes.


## Preparation

- Generate a WiFi URI QR Code for your Home Network
- Print and attach it to your router

## Build

- Define a suitable WIFI_AP_SSID and a random WIFI_AP_PASSPHRASE for setup within configuration
- Generate the respective setup WiFi URI QR Code
- Generate the setup HTTP URL QR Code directing at http://192.168.4.1/
- Print and attach the codes
- Build and flash the firmware

## Prebuilt

The firmware-embedQR branch contains a precompiled firmware suitable for thermostat applications alongside a baseline build without embedQR. Both employ unprotected setup networks and you still need to generate, print and attach the two QR Codes.

## Usage

- Scan the setup WiFi QR Code
- Scan the setup HTTP QR Code
- Within the setup web page, choose "Scan QR" and scan the WiFi QR Code off your router

## Demonstration

The following image sequence has been acquired during a successful test on the Apple iPhone mobile platform:

<p>
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/1.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/2.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/3.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/4.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/5.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/6.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/7.PNG?raw=true" style="display: inline-block; width: 24%">
<img src="https://github.com/resmh/Tasmota-embedQR/blob/development-embedQR/demo/8.PNG?raw=true" style="display: inline-block; width: 24%">
</p>

## Licenses

The embedQR library is licensed under LGPL-3.0 as provided within lib/lib_div/embedQR/LICENSE.md, the jsQR engine is licensed under Apache-2.0 as provided within lib/lib_div/embedQR/LICENSE.engine.md.

The Tasmota firmware is licensed under GPL-3.0 as provided within LICENSE.txt.

The "WiFi URI" format is part of the "WPA3" standard, which is a registered trademark of the Wi-Fi Alliance.

The term "QR Code" is a registered trademark of DENSO WAVE Incorporated.

Apple and iPhone are trademarks of Apple Inc., registered in the U.S. and other countries and regions.
