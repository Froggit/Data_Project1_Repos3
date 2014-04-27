/*-- Rüstung --*/

#strict 2

#include LF_I // Item
#include LF_O // Overlay

/* Status */
public func IsArmor(){ return true;}

/* Grafik */
public func GetOverlayGraphics(){ return("Armored"); }
public func GetPutOnAction(){ return "PutOnArmor"; }
