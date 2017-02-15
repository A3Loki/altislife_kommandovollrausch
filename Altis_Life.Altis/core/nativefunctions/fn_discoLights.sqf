/*
	Author: Nox & Fex www.Native.de - für Native-Network.net
	Description: Discolicht? :o
*/

disco1 = "#lightpoint" createVehicleLocal position NativediscoLight1;
disco1 setLightAmbient [0, 0, 0];
disco1 setLightColor [1, 0, 0];
disco1 lightAttachObject [NativediscoLight1, [0,0,5]];

disco2 = "#lightpoint" createVehicleLocal position NativediscoLight2;
disco2 setLightAmbient [0, 0, 0];
disco2 setLightColor [1, 0, 0];
disco2 lightAttachObject [NativediscoLight2, [0,0,5]];

disco3 = "#lightpoint" createVehicleLocal position NativediscoLight3;
disco3 setLightAmbient [0, 0, 0];
disco3 setLightColor [1, 0, 0];
disco3 lightAttachObject [NativediscoLight3, [0,0,5]];

disco4 = "#lightpoint" createVehicleLocal position NativediscoLight4;
disco4 setLightAmbient [0, 0, 0];
disco4 setLightColor [0, 1, 0];
disco4 lightAttachObject [NativediscoLight4, [0,0,5]];

disco5 = "#lightpoint" createVehicleLocal position NativediscoLight5;
disco5 setLightAmbient [0, 0, 0];
disco5 setLightColor [0, 1, 0];
disco5 lightAttachObject [NativediscoLight5, [0,0,5]];

disco6 = "#lightpoint" createVehicleLocal position NativediscoLight6;
disco6 setLightAmbient [0, 0, 0];
disco6 setLightColor [0, 1, 0];
disco6 lightAttachObject [NativediscoLight6, [0,0,5]];

disco7 = "#lightpoint" createVehicleLocal position NativediscoLight7;
disco7 setLightAmbient [0, 0, 0];
disco7 setLightColor [0, 0, 1];
disco7 lightAttachObject [NativediscoLight7, [0,0,5]];

disco8 = "#lightpoint" createVehicleLocal position NativediscoLight8;
disco8 setLightAmbient [0, 0, 0];
disco8 setLightColor [0, 0, 1];
disco8 lightAttachObject [NativediscoLight8, [0,0,5]];

disco9 = "#lightpoint" createVehicleLocal position NativediscoLight9;
disco9 setLightAmbient [0, 0, 0];
disco9 setLightColor [0, 0, 1];
disco9 lightAttachObject [NativediscoLight9, [0,0,5]];

while{true} do
{
	disco1 setLightBrightness 1;
	disco2 setLightBrightness 1;
	disco3 setLightBrightness 1;
	disco7 setLightBrightness 0;
	disco8 setLightBrightness 0;
	disco9 setLightBrightness 0;
	sleep 0.3;
	disco4 setLightBrightness 1;
	disco5 setLightBrightness 1;
	disco6 setLightBrightness 1;
	disco1 setLightBrightness 0;
	disco2 setLightBrightness 0;
	disco3 setLightBrightness 0;
	sleep 0.3;
	disco7 setLightBrightness 1;
	disco8 setLightBrightness 1;
	disco9 setLightBrightness 1;
	disco4 setLightBrightness 0;
	disco5 setLightBrightness 0;
	disco6 setLightBrightness 0;
	sleep 0.3;
};