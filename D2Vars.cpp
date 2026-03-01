#include "DLLmain.h"

void __fastcall Config_Load()
{
	INIReader ConfigReader(DEFAULT_CONFIG_PATH);

	Config.iVotCode = ConfigReader.GetInteger(SECTION_NAME, "iVotCode", 603);
	Config.iVotLifeStatNo = ConfigReader.GetInteger(SECTION_NAME, "iVotLifeStatNo", 359);

	Config.iBagItemNo = ConfigReader.GetInteger(SECTION_NAME, "iBagItemNo", 659);
	Config.iBagStatNo = ConfigReader.GetInteger(SECTION_NAME, "iBagStatNo", 310);
	Config.iBagItemDesc = ConfigReader.GetInteger(SECTION_NAME, "iBagItemDesc", 11172);
	Config.iBagEmptyDesc = ConfigReader.GetInteger(SECTION_NAME, "iBagEmptyDesc", 11173);

	Config.iReforgeStatNo = ConfigReader.GetInteger(SECTION_NAME, "iReforgeStatNo", 213);
	Config.dSPLevelBounsFactor = ConfigReader.GetReal(SECTION_NAME, "dSPLevelBounsFactor", 0.1);
	Config.dSPCountBounsFactor = ConfigReader.GetReal(SECTION_NAME, "dSPCountBounsFactor", 2);
	Config.iSPBounsModify = ConfigReader.GetInteger(SECTION_NAME, "iSPBounsModify", 0);
	Config.dAPLevelBounsFactor = ConfigReader.GetReal(SECTION_NAME, "dAPLevelBounsFactor", 0.1);
	Config.dAPCountBounsFactor = ConfigReader.GetReal(SECTION_NAME, "dAPCountBounsFactor", 2);
	Config.iAPBounsModify = ConfigReader.GetInteger(SECTION_NAME, "iAPBounsModify", 0);

	Config.iEtherealItemRate = ConfigReader.GetInteger(SECTION_NAME, "iEtherealItemRate", 5);

	Config.iMaxGambleCost = ConfigReader.GetInteger(SECTION_NAME, "iMaxGambleCost", 1000000);

	Config.bMoveCorpseToTown = ConfigReader.GetBoolean(SECTION_NAME, "bMoveCorpseToTown", true);
}