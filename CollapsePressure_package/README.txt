***************************************************************************************************
Readme for Using Thorlabs Spectrophotometer on MATLAB

***************************************************************************************************

Prerequisite Softwares

MATLAB
	https://www.mathworks.com/products/matlab.html
ThorSpectra
	https://www.thorlabs.com/software_pages/ViewSoftwarePage.cfm?Code=CCS

C++ compiler for MATLAB, add on
	https://www.mathworks.com/matlabcentral/fileexchange/52848-matlab-support-for-mingw-w64-c-c-fortran-compiler

Driver for your specific Serial-to-USB adaptor
	Recommended Chipset PL2303 or FTDI chips  (FTDI preferred if using more than one Serial-to-USB adaptors)

___________________________________________________________________________________________________

Steps to follow

1. go to  ':\Program Files\IVI Foundation\VISA\Win64\include'
2. delete the 'visatype.h' file in that folder
3. replace the 'visatype.h' file with the one packaged with this installation package.
4. Install the MATLAB app
5. Find the apps in the 'APPS' tab in the MATLAB ribbon menu.

