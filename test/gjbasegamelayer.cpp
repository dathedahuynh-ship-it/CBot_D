#include "pch.h"

class $modify(GJBaseGameLayer)
{
	
	void handleButton(bool down, int button, bool isPlayer1)
	{
		// Only process input when button is pressed (down) or released (!down)
		// Button 1 is the main gameplay button (jump/click/etc.)
		if (button == 1)
		{
			// Store which player triggered the input
			input::m_isplayer1input = isPlayer1;
			
			// Set the input flag to true to trigger sound playback
			// This will be processed in playerobject.cpp
			input::m_playerinput = true;
		}
		
		// Call the original method to handle the actual game input
		return GJBaseGameLayer::handleButton(down, button, isPlayer1);
	}
};
