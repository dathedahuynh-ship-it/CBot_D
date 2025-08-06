#include "pch.h"

namespace CBot
{
	ClickType CheckClickType(const std::string& ClickPack,bool SoftClick, bool HardClick, bool MicroClick, bool IsHolding)
	{
		static float PreviousTime = 0;
		float CurrentTime = 0.0f;
		
		bool hasClickpacks = !gui::m_Player1ClickAudios.empty() || !gui::m_Player2ClickAudios.empty();
		
		// Get the current time
		DWORD timelocal = timeGetTime();
		float timeDiff = (timelocal - PreviousTime);
		PreviousTime = timelocal;
		
		if (gui::m_gameSync && hasClickpacks)
		{
			auto* director = cocos2d::CCDirector::sharedDirector();
			if (director)
			{
				// Use the game's actual delta time instead of the fixed animation interval
				// This ensures clicks are properly synchronized with the actual game speed
				CurrentTime = director->getDeltaTime();
				
				// If delta time is zero or very small, use a reasonable default
				// This prevents issues when the game is paused or running very slowly
				if (CurrentTime < 0.0001f)
				{
					CurrentTime = 0.016f; // Default to ~60fps timing
				}
			}
			else
			{
				// Fallback to system time if director is not available
				CurrentTime = timeDiff;
			}
		}
		else
		{
			// When game sync is disabled, use system time
			CurrentTime = timeDiff;
		}

		if (CurrentTime < random::floatRandom(gui::m_minsoftClickstime, gui::m_maxsoftClickstime) && SoftClick)
		{
			if (IsHolding)
				return ClickType::SoftClick;
			else
				return ClickType::SoftRelease;
		}

		if (CurrentTime > random::floatRandom(gui::m_minhardClickstime, gui::m_maxhardClickstime) && HardClick)
		{
			if (IsHolding)
				return ClickType::HardClick;
			else
				return ClickType::HardRelease;
		}

		if (CurrentTime < random::floatRandom(gui::m_minmicroClickstime, gui::m_maxmicroClickstime) && MicroClick)
		{
			if (IsHolding)
				return ClickType::MicroClick;
			else
				return ClickType::MicroRelease;
		}

		// Only return NormalClick/NormalRelease if at least one click type is enabled
		if (SoftClick || HardClick || MicroClick)
		{
			if (IsHolding)
				return ClickType::NormalClick;
			else
				return ClickType::NormalRelease;
		}

		// Return a special type that indicates no click should be played
		return ClickType::None;
	}
}