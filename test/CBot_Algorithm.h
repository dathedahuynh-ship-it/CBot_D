#pragma once

enum class ClickType
{
	None, NormalClick, SoftClick, HardClick, MicroClick,
	NormalRelease, SoftRelease, HardRelease, MicroRelease
};

struct ClickAudioType
{
	ClickType clickType;
	int click;
};

struct ClickAudio
{
	std::string clickpathfilename;
};

namespace CBot
{
	ClickType CheckClickType(const std::string& ClickPack, bool SoftClick, bool HardClick, bool MicroClick, bool IsHolding);
}