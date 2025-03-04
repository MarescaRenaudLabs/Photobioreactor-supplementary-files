[![License: MIT](https://img.shields.io/badge/License-MIT-lightgrey.svg)](https://opensource.org/license/mit)

# Photobioreactor Supplementary Files

This repository contains example code and data accompanying the paper: "A Low-Cost Photobioreactor for Scalable Gas Vesicle Production".

The repository is divided into two sections: 
	1. Photobioreactor microcontroller code
	2. MATLAB app for hydrostatic collapse pressure measurements


## Photobioreactor Microcontroller code

The code contained in `Microcontroller_Photobioreactor.ino` is meant to run on Arduino UNO boards. Simply open the `Microcontroller_Photobioreactor.ino` file in the Arduino IDE, and upload to an Arduino UNO.

# MATLAB app for hydrostatic collapse pressure measurements

Representative data is shown in Fig. 7a and 7b in the aforementioned manuscript.
This app has several software dependencies which are listed below. 

## Software Dependencies

- MATLAB: https://www.mathworks.com/products/matlab.html
- ThorSpectra: 	https://www.thorlabs.com/software_pages/ViewSoftwarePage.cfm?Code=CCS
- C++ compiler for MATLAB, add on: https://www.mathworks.com/matlabcentral/fileexchange/52848-matlab-support-for-mingw-w64-c-c-fortran-compiler
- Driver for your specific Serial-to-USB adaptor. Recommended Chipset PL2303 or FTDI chips (FTDI preferred if using more than one Serial-to-USB adaptors)

## Installation Instructions

1. go to 'C:\Program Files\IVI Foundation\VISA\Win64\include'
2. delete the 'visatype.h' file in that folder
3. replace the 'visatype.h' file with the one packaged with this installation package.
4. Install the MATLAB app
5. Find the apps in the 'APPS' tab in the MATLAB ribbon menu.


# License

This project is licensed under the MIT License. 