#include "pch.h"
#include "random.h"

static random::UniqueRandom p1PushUniqueRandom[3];
static random::UniqueRandom p1ReleaseUniqueRandom[3];
static random::UniqueRandom p2PushUniqueRandom[3];
static random::UniqueRandom p2ReleaseUniqueRandom[3];

class $modify(PlayerObject)
{
	
	bool pushButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (gui::m_player2_clickpack_path != "None" && this->m_isSecondPlayer == true)
			{
				// Calculate volume and pitch based on settings
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume); 
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player2_clickpack_path, gui::m_player2_softclicks, gui::m_player2_hardclicks, gui::m_player2_microclicks, true);
				if (currentClicktype == ClickType::None)
					return PlayerObject::pushButton(playerButton);
				
				int clickType = static_cast<int>(currentClicktype);
				
				// Get a random sound from the appropriate click type category
				int maxIndex = gui::m_Player2SizeClickAudios[currentClicktype];
				if (!p2PushUniqueRandom[clickType].hasMore()) {
					p2PushUniqueRandom[clickType].reset(0, maxIndex);
				}
				int randomIndex = p2PushUniqueRandom[clickType].getNext();
				std::string currentclickpath = gui::m_Player2ClickAudios[{currentClicktype, randomIndex}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (gui::m_player1_clickpack_path != "None" && this->m_isSecondPlayer == false)
			{
				// Calculate volume and pitch based on settings
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume); 
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player1_clickpack_path, gui::m_player1_softclicks, gui::m_player1_hardclicks, gui::m_player1_microclicks, true);
				if (currentClicktype == ClickType::None)
					return PlayerObject::pushButton(playerButton);
				
				int clickType = static_cast<int>(currentClicktype);
				
				// Get a random sound from the appropriate click type category
				int maxIndex = gui::m_Player1SizeClickAudios[currentClicktype];
				if (!p1PushUniqueRandom[clickType].hasMore()) {
					p1PushUniqueRandom[clickType].reset(0, maxIndex);
				}
				int randomIndex = p1PushUniqueRandom[clickType].getNext();
				std::string currentclickpath = gui::m_Player1ClickAudios[{currentClicktype, randomIndex}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			input::m_playerinput = false;
		}

		return PlayerObject::pushButton(playerButton);
	}

	bool releaseButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (gui::m_player2_clickpack_path != "None" && this->m_isSecondPlayer == true)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume);
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player2_clickpack_path, gui::m_player2_softclicks, gui::m_player2_hardclicks, gui::m_player2_microclicks, false);
				if (currentClicktype == ClickType::None)
					return PlayerObject::releaseButton(playerButton);
				
				int clickType = static_cast<int>(currentClicktype);
				
				// Get a random sound from the appropriate click type category
				int maxIndex = gui::m_Player2SizeClickAudios[currentClicktype];
				if (!p2ReleaseUniqueRandom[clickType].hasMore()) {
					p2ReleaseUniqueRandom[clickType].reset(0, maxIndex);
				}
				int randomIndex = p2ReleaseUniqueRandom[clickType].getNext();
				std::string currentclickpath = gui::m_Player2ClickAudios[{currentClicktype, randomIndex}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (gui::m_player1_clickpack_path != "None" && this->m_isSecondPlayer == false)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume) ;
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player1_clickpack_path, gui::m_player1_softclicks, gui::m_player1_hardclicks, gui::m_player1_microclicks, false);
				if (currentClicktype == ClickType::None)
					return PlayerObject::releaseButton(playerButton);
				
				int clickType = static_cast<int>(currentClicktype);
				
				// Get a random sound from the appropriate click type category
				int maxIndex = gui::m_Player1SizeClickAudios[currentClicktype];
				if (!p1ReleaseUniqueRandom[clickType].hasMore()) {
					p1ReleaseUniqueRandom[clickType].reset(0, maxIndex);
				}
				int randomIndex = p1ReleaseUniqueRandom[clickType].getNext();
				std::string currentclickpath = gui::m_Player1ClickAudios[{currentClicktype, randomIndex}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			input::m_playerinput = false;
		}

		return PlayerObject::releaseButton(playerButton);
	}
		
};
