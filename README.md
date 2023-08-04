# LoRa_APRSdroid
Firmware for TTGO LoRa32 V2.1.

Features: For use the 'APRSdroid' APP in LoRa technology.

<br>
<img src="https://github.com/iw1cgw/LoRa-APRSdroid/blob/main/img/main.jpg">
<br>

if you don't have a TTGO LoRa32 T-beam with integrated GPS receiver but you want to test the potential of APRS trackers with LoRa technology you can use this solution..

Source code is in src/main.cpp, compilated firmware is in /bin directory.

Firmware configuration/customization is via TTY terminal (ex: Putty or Termite).

Those who have problems with compiling from PlatformIO can directly download the already compiled .bin file and inoculate it with the usual tools (eg: 'ESP32 flash download tools' or my 'CGWloader' ) starting from the address 0x000.

Before running your station please check:

- you have a valid HAM radio license

- you have APP APRSdroid installed in your smartphone whit specific setup for this operated mode

- you have configured the TTGO with the correct transmit frequency (ex: 433775 KHz) and your options.

  
<h2>Upload via PlatformIO</h2>

1. Download this repository and open it in PlatformIO. It should obtain all dependencies automatically, otherwise they are listed in platformio.ini.

2. Upload to your TTGO desk.


<h2>Upload via CGWloader</h2

<br>
<img src="https://github.com/iw1cgw/LoRa-APRSdroid/blob/main/img/CGWloader.jpg">
<br>

<h2>Upload via ESP32 flash download tools</h2

<br>
<img src="https://github.com/iw1cgw/LoRa-APRSdroid/blob/main/img/ESP32.jpg">
<br>

<h2>Config APRSdroid</h2>

APRSdroid by George Lukas DO1GL can be downloaded from his website: https://aprsdroid.org/ or from GooglePlay.

To use it specifically for this project it is necessary, under the heading 'Connection preferences', to arrive at: TNC (text TNC2) and type of connection BLUETOOTH SPP; then select the Bluetooth unit – 'APRSdroid' .

<br>
<img src="https://github.com/iw1cgw/LoRa-APRSdroid/blob/main/img/setup.jpg">
<br>

Anyone interested in tracking in APRS already knows APRSdroid and therefore I do not report the 'basic' setups for correct operation that can be found in various tutorials on the net.

<h2>Firmware setup</h2>

Using a serial terminal ( eg: Termite with setup : 115200 bps 8N1 [ append LF ] ) it is possible to verify and vary some parameters of the TTGO which is used as a transmitter.

<br>
<img src="https://github.com/iw1cgw/LoRa-APRSdroid/blob/main/img/termite.jpg"><br>
<br>


If you need help or have any questions or suggestions, please reach me: iw1cgw(at)libero.it
