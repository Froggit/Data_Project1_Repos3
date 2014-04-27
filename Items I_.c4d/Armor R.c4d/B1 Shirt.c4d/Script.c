/*-- Rüstung --*/

#strict 2

#include LF_I // Item
#include LF_O // Overlay


protected func Initialize()
{
	_inherited();
	SetClrModulation(HSL2RGB(RGB(RandomX(0,255),RandomX(100,200),150)));
}



/* Status */
public func IsShirt(){ return true;}

/* Grafik */
public func GetOverlayGraphics(){ return("Shirt"); }

public func GetPutOnAction(){ return "PutOnArms"; }