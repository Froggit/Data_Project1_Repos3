/*-- Schild --*/

#strict 2
#include I_W_

/* Status */
public func IsShield(){ return true;}

public func CanSwing( string szStyle ){ return false;}
public func CanLow( string szStyle ){ return false;}
public func CanThrust( string szStyle )
{
	if( szStyle == "SpSh" )
		return false;
	else
		return true;
}
public func CanStrike( string szStyle )
{
	if( szStyle == "SpSh" )
		return true;
	else
		return false;
}
/*
public func GetStrikeAction( string szStyle, bool fPrimary )
{
	var szAct, iRan;
	if( szStyle == "SwSh" )
	{
		if( fPrimary ) return "Cancel"; // Schwert und Buckler, d.h. ich bin immer Primary
		szAct = "StrikeSh";

	}

	return Format("%s_%s",szStyle,szAct);
}

public func GetBlockAction( string szStyle, bool fPrimary )
{
	var szAct, iRan;
	if( szStyle == "SwSh" )
	{
		if( fPrimary ) return "Cancel"; // Schwert und Buckler, d.h. ich bin immer Primary
		szAct = "ParrySh";
	}

	return Format("%s_%s",szStyle,szAct);
}
*/
public func GetStrikePos( string szStyle )
{
	return ["S","R"];
}


/* Kampfschaden */
public func GetStrikeDamage(){	return 8;}
public func GetStrikeStyles(){ return 1; }
public func GetStrikeDistance(){ return -10;}
