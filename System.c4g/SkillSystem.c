/*-- Skills --*/

#strict 2
#appendto LF_S

global func GameAttributeList()
{
	return [
		//	name,			string,					lower limit,	upper limit,	cost function,	availability function
		[	"Strength",		"$AttributeStrength$",	0,				20,				"",				""],
		[	"Dexterity",	"$AttributeDexterity$",	0,				20,				"",				""],
		[	"Magic",		"$AttributeMagic$",		0,				20,				"",				""]
	];
}

global func GameSkillList()
{
	return [
		//	name,			string,					lower limit,	upper limit,	cost function,	availability function
		[ "Blacksmith",		"$SkillBlacksmith$",	0,				20,				"",				""]
	];
}

global func GamePerkList()
{
		//	name,				string,				parent,		cost function,	availability function
	return [
		[	"Perk1",			"$PerkPerk1$",		"",			"",				""],
		[	"Perk2",			"$PerkPerk2$",		"",			"",				""]
	];
}