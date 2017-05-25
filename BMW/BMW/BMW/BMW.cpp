#include "PluginSDK.h"

PluginSetup("BMW");

IMenu* MainMenu;
IMenu* BMW_Misc;
IMenuOption* Mastery_BMW;

void Menu()
{
	MainMenu = GPluginSDK->AddMenu("BMW BM FOR DAYS");

	BMW_Misc = MainMenu->AddMenu("Misc");
	{
		Mastery_BMW = BMW_Misc->CheckBox("SPAM MASTERY EMOTE?",true);
	}
}


PLUGIN_EVENT(void) OnGameUpdate(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnGapcloser(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) AfterAttack(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnOrbwalkAfterAttack(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen()) 
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnLevelUp(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnDash(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnDeath(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnAttack(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnDestroy(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnCast(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnCastSpell(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_EVENT(void) OnCreate(IUnit* me, IUnit* enemy)
{
	if (Mastery_BMW->Enabled() && !GGame->IsChatOpen())
	{
		GGame->Say("/masterybadge");
	}

}

PLUGIN_API void OnLoad(IPluginSDK* PluginSDK)
{
	PluginSDKSetup(PluginSDK);
	Menu();
	GEventManager->AddEventHandler(kEventOrbwalkAfterAttack, OnOrbwalkAfterAttack);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->AddEventHandler(kEventOrbwalkAfterAttack, AfterAttack);
	GEventManager->AddEventHandler(kEventOnGapCloser, OnGapcloser);
	GEventManager->AddEventHandler(kEventOnLevelUp, OnLevelUp);
	GEventManager->AddEventHandler(kEventOnDash, OnDash);
	GEventManager->AddEventHandler(kEventOnUnitDeath, OnDeath);
	GEventManager->AddEventHandler(kEventOrbwalkOnAttack, OnAttack);
	GEventManager->AddEventHandler(kEventOnDestroyObject, OnDestroy);
	GEventManager->AddEventHandler(kEventOnDoCast, OnCast);
	GEventManager->AddEventHandler(kEventOnSpellCast, OnCastSpell);
	GEventManager->AddEventHandler(kEventOnCreateObject, OnCreate);
}

PLUGIN_API void OnUnload()
{
	MainMenu->Remove();
	GEventManager->RemoveEventHandler(kEventOrbwalkAfterAttack, OnOrbwalkAfterAttack);
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->RemoveEventHandler(kEventOrbwalkAfterAttack, AfterAttack);
	GEventManager->RemoveEventHandler(kEventOnGapCloser, OnGapcloser);
	GEventManager->RemoveEventHandler(kEventOnLevelUp, OnLevelUp);
	GEventManager->RemoveEventHandler(kEventOnDash, OnDash);
	GEventManager->RemoveEventHandler(kEventOnUnitDeath, OnDeath);
	GEventManager->RemoveEventHandler(kEventOrbwalkOnAttack, OnAttack);
	GEventManager->RemoveEventHandler(kEventOnDestroyObject, OnDestroy);
	GEventManager->RemoveEventHandler(kEventOnDoCast, OnCast);
	GEventManager->RemoveEventHandler(kEventOnSpellCast, OnCastSpell);
	GEventManager->RemoveEventHandler(kEventOnCreateObject, OnCreate);
}