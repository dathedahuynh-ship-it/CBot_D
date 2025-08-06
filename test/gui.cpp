#include "pch.h"
#include <filesystem>

namespace gui
{
	
	// This function is called once when the hook is initialized
	// You can use it to set up ImGui styles, fonts, etc.

	void initializeImGui()
	{
		ImGuiStyle& style = ImGui::GetStyle();
		style.WindowRounding = 8.0f;
		style.FrameRounding = 4.0f;
		style.PopupRounding = 6.0f;
		style.ScrollbarRounding = 12.0f;
		style.GrabRounding = 4.0f;
		style.TabRounding = 6.0f;
		style.WindowBorderSize = 1.0f;
		style.FrameBorderSize = 0.0f;
		style.PopupBorderSize = 1.0f;
		style.ChildBorderSize = 0.0f;
		
		ImVec4* colors = ImGui::GetStyle().Colors;
		colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
		colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
		colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
		colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
		colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
		colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_FrameBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
		colors[ImGuiCol_FrameBgHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.40f);
		colors[ImGuiCol_FrameBgActive] = ImVec4(0.60f, 0.26f, 0.98f, 0.67f);
		colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
		colors[ImGuiCol_TitleBgActive] = ImVec4(0.31f, 0.16f, 0.48f, 1.00f);
		colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
		colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
		colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
		colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
		colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
		colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
		colors[ImGuiCol_CheckMark] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_SliderGrab] = ImVec4(0.54f, 0.24f, 0.88f, 1.00f);
		colors[ImGuiCol_SliderGrabActive] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_Button] = ImVec4(0.60f, 0.26f, 0.98f, 0.40f);
		colors[ImGuiCol_ButtonHovered] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_ButtonActive] = ImVec4(0.49f, 0.06f, 0.98f, 1.00f);
		colors[ImGuiCol_Header] = ImVec4(0.60f, 0.26f, 0.98f, 0.31f);
		colors[ImGuiCol_HeaderHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.80f);
		colors[ImGuiCol_HeaderActive] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
		colors[ImGuiCol_SeparatorHovered] = ImVec4(0.41f, 0.10f, 0.75f, 0.78f);
		colors[ImGuiCol_SeparatorActive] = ImVec4(0.41f, 0.10f, 0.75f, 1.00f);
		colors[ImGuiCol_ResizeGrip] = ImVec4(0.60f, 0.26f, 0.98f, 0.20f);
		colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.67f);
		colors[ImGuiCol_ResizeGripActive] = ImVec4(0.60f, 0.26f, 0.98f, 0.95f);
		colors[ImGuiCol_TabHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.80f);
		colors[ImGuiCol_Tab] = ImVec4(0.37f, 0.18f, 0.58f, 0.86f);
		colors[ImGuiCol_TabSelected] = ImVec4(0.42f, 0.20f, 0.68f, 1.00f);
		colors[ImGuiCol_TabSelectedOverline] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_TabDimmed] = ImVec4(0.11f, 0.07f, 0.15f, 0.97f);
		colors[ImGuiCol_TabDimmedSelected] = ImVec4(0.27f, 0.14f, 0.42f, 1.00f);
		colors[ImGuiCol_TabDimmedSelectedOverline] = ImVec4(0.50f, 0.50f, 0.50f, 0.00f);
		colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
		colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
		colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
		colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
		colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
		colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
		colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
		colors[ImGuiCol_TextLink] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_TextSelectedBg] = ImVec4(0.53f, 0.53f, 0.53f, 0.45f);
		colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
		colors[ImGuiCol_NavCursor] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
		colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
		colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
		colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	}

	void loadcurrentClickpack()
	{
		// Reset flags
		m_player1_hardclicksclickpack = true;
		m_player1_softclicksclickpack = true;
		m_player1_microclicksclickpack = true;
		m_player1_whitenoiseclickpack = true;
		m_player2_hardclicksclickpack = true;
		m_player2_softclicksclickpack = true;
		m_player2_microclicksclickpack = true;
		m_player2_whitenoiseclickpack = true;

		// Clear existing audio maps for clean reload
		m_Player1ClickAudios.clear();
		m_Player2ClickAudios.clear();
		m_Player1SizeClickAudios.clear();
		m_Player2SizeClickAudios.clear();

		if (m_whiteplayer1noisechannel) m_whiteplayer1noisechannel->stop();
		if (m_whiteplayer2noisechannel) m_whiteplayer2noisechannel->stop();

		// Support File Audio
		static const std::unordered_set<std::string> validExtensions = {
			".wav", ".mp3", ".ogg", ".flac", ".m4a"
		};

		// Helper lambda to load clickpack files efficiently
		auto loadClickpackFolder = [&](const std::string& basePath, 
			                         const std::unordered_map<ClickType, std::string>& folderMap,
			                         std::unordered_map<ClickAudioType, ClickAudio>& audioMap,
			                         std::unordered_map<ClickType, size_t>& sizeMap,
			                         bool& softFlag, bool& hardFlag, bool& microFlag) -> void {
			for (const auto& [clickType, folderPath] : folderMap) {
				if (!std::filesystem::exists(folderPath)) {
					// Flags For Missing File
					if (clickType == ClickType::SoftClick || clickType == ClickType::SoftRelease) {
						softFlag = false;
					}
					if (clickType == ClickType::HardClick || clickType == ClickType::HardRelease) {
						hardFlag = false;
					}
					if (clickType == ClickType::MicroClick || clickType == ClickType::MicroRelease) {
						microFlag = false;
					}
					continue;
				}

				int fileCount = 0;
				try {
					for (const auto& entry : std::filesystem::directory_iterator(folderPath)) {
						if (!entry.is_regular_file()) continue;
						
						const auto& path = entry.path();
						const std::string extension = path.extension().string();
					
						if (validExtensions.find(extension) == validExtensions.end()) continue;
						
						const std::string filePath = path.string();
						audioMap[{clickType, fileCount}] = { filePath };
						
						// Faster Loading + Better Memory Usage Thats All
						CBot::fmodengine::createSound(filePath, FMOD_CREATECOMPRESSEDSAMPLE);
						fileCount++;
					}
				} catch (const std::filesystem::filesystem_error& e) {
					// Handle directory access errors gracefully
					std::println("Error accessing directory {}: {}", folderPath, e.what());
				}
				
				sizeMap[clickType] = std::max(0, fileCount - 1);
			}
		};

		std::unordered_map<ClickType, std::string> Player1ClickTypesFolder = {
			{ ClickType::NormalClick, m_player1_clickpack_path + "\\Clicks\\" },
			{ ClickType::NormalRelease, m_player1_clickpack_path + "\\Releases\\" },
			{ ClickType::SoftClick, m_player1_clickpack_path + "\\softClicks\\" },
			{ ClickType::SoftRelease, m_player1_clickpack_path + "\\softReleases\\" },
			{ ClickType::HardClick, m_player1_clickpack_path + "\\hardClicks\\" },
			{ ClickType::HardRelease, m_player1_clickpack_path + "\\hardReleases\\" },
			{ ClickType::MicroClick, m_player1_clickpack_path + "\\microClicks\\" },
			{ ClickType::MicroRelease, m_player1_clickpack_path + "\\microReleases\\" }
		};

		std::unordered_map<ClickType, std::string> Player2ClickTypesFolder = {
			{ ClickType::NormalClick, m_player2_clickpack_path + "\\Clicks\\" },
			{ ClickType::NormalRelease, m_player2_clickpack_path + "\\Releases\\" },
			{ ClickType::SoftClick, m_player2_clickpack_path + "\\softClicks\\" },
			{ ClickType::SoftRelease, m_player2_clickpack_path + "\\softReleases\\" },
			{ ClickType::HardClick, m_player2_clickpack_path + "\\hardClicks\\" },
			{ ClickType::HardRelease, m_player2_clickpack_path + "\\hardReleases\\" },
			{ ClickType::MicroClick, m_player2_clickpack_path + "\\microClicks\\" },
			{ ClickType::MicroRelease, m_player2_clickpack_path + "\\microReleases\\" }
		};

		loadClickpackFolder(m_player1_clickpack_path, Player1ClickTypesFolder, 
			                 m_Player1ClickAudios, m_Player1SizeClickAudios,
			                 m_player1_softclicksclickpack, m_player1_hardclicksclickpack, m_player1_microclicksclickpack);

		loadClickpackFolder(m_player2_clickpack_path, Player2ClickTypesFolder, 
			                 m_Player2ClickAudios, m_Player2SizeClickAudios,
			                 m_player2_softclicksclickpack, m_player2_hardclicksclickpack, m_player2_microclicksclickpack);

		// Load white noise files efficiently
		auto loadWhiteNoise = [&](const std::string& basePath, bool& noiseFlag, FMOD::Sound*& sound, FMOD::Channel*& channel) -> void {
			if (!std::filesystem::exists(basePath)) {
				noiseFlag = false;
				return;
			}

			bool found = false;
			try {
				for (const auto& entry : std::filesystem::directory_iterator(basePath)) {
					if (!entry.is_regular_file()) continue;
					
					const std::string filename = entry.path().filename().string();
					const std::string lowerFilename = [filename] {
						std::string result = filename;
						std::transform(result.begin(), result.end(), result.begin(), ::tolower);
						return result;
					}();
					
					if (lowerFilename.find("whitenoise") != std::string::npos || 
					    lowerFilename.find("noise") != std::string::npos) {
						const std::string filePath = entry.path().string();
						
						// Use compressed sample for white noise too
						FMOD_RESULT result = CBot::fmodengine::system->createSound(
							filePath.c_str(), 
							FMOD_LOOP_NORMAL | FMOD_CREATECOMPRESSEDSAMPLE, 
							nullptr, 
							&sound);
						
						if (result == FMOD_OK) {
							CBot::fmodengine::system->playSound(sound, nullptr, false, &channel);
							channel->setPaused(true); // Start paused
							found = true;
							break;
						}
					}
				}
			} catch (const std::filesystem::filesystem_error& e) {
				std::println("Error loading white noise: {}", e.what());
			}
			
			noiseFlag = found;
		};

		loadWhiteNoise(m_player1_clickpack_path, m_player1_whitenoiseclickpack, 
			              m_whiteplayer1noisesound, m_whiteplayer1noisechannel);

		loadWhiteNoise(m_player2_clickpack_path, m_player2_whitenoiseclickpack, 
			              m_whiteplayer2noisesound, m_whiteplayer2noisechannel);

		// Synchronize UI states with availability
		m_player1_softclicks = m_player1_softclicks && m_player1_softclicksclickpack;
		m_player1_hardclicks = m_player1_hardclicks && m_player1_hardclicksclickpack;
		m_player1_whitenoise = m_player1_whitenoise && m_player1_whitenoiseclickpack;

		m_player2_softclicks = m_player2_softclicks && m_player2_softclicksclickpack;
		m_player2_hardclicks = m_player2_hardclicks && m_player2_hardclicksclickpack;
		m_player2_whitenoise = m_player2_whitenoise && m_player2_whitenoiseclickpack;

		// Save synchronized states to config
		auto config = geode::Mod::get();
		config->setSettingValue("Player 1 SoftClicks", m_player1_softclicks);
		config->setSettingValue("Player 1 HardClicks", m_player1_hardclicks);
		config->setSettingValue("Player 1 WhiteNoise", m_player1_whitenoise);
		config->setSettingValue("Player 2 SoftClicks", m_player2_softclicks);
		config->setSettingValue("Player 2 HardClicks", m_player2_hardclicks);
		config->setSettingValue("Player 2 WhiteNoise", m_player2_whitenoise);
	}
	void loadClickpacks(std::vector<std::string>& vectorclickpacks)
	{
		for (const auto& entry : std::filesystem::directory_iterator(".cbot/clickpacks")) {
			if (std::filesystem::is_directory(entry.status())) {
				vectorclickpacks.push_back(entry.path().generic_string());
			}
		}
	}

	void renderAutoUpdate()
	{
		auto config = geode::Mod::get();

		ImGui::Begin("AutoUpdate");
		config->setSettingValue("Menu key", m_selectedKey);
		//Config button
		if (ImGui::InputInt("Menu Key", &m_selectedKey))
		{
			saveMenukeyConfig();
		}
		
		if (ImGui::Button("Show Keybind Config"))
		{
			writeTutorialKeys();
			#ifdef _WIN32
			system("notepad .cbot/KeyCodes.txt");
			#else
			system("xdg-open .cbot/KeyCodes.txt");
			#endif
		}
		
		ImGui::SameLine();
		ImGui::Text("Current: %d", m_selectedKey);

		ImGui::Text("We currently deceted\nthat new version of CBot has been found\ngo to https://github.com/therealsnopphin/CBot/releases\nto update CBot");

		if (ImGui::Button("Go to url") == true)
		{
			system("start https://github.com/therealsnopphin/CBot/releases");
		}

		if (ImGui::Button("Skip it") == true)
		{
			m_updatefound = false;
		}

		ImGui::End();
	}

	// This function is called every frame to render the ImGui interface
	// You can use it to create windows, buttons, sliders, etc.
	void renderImGui()
	{
		if (m_show)
		{
			if (m_updatefound == false)
			{
				auto config = geode::Mod::get();

				ImGui::Begin(m_Title.c_str());
			
				//Config button
				if (ImGui::InputInt("Menu Key", &m_selectedKey))
				{
					if (m_selectedKey < 0) m_selectedKey = 0;
					if (m_selectedKey > 4356) m_selectedKey = 4356;
					config->setSettingValue("Menu key", m_selectedKey);
					saveMenukeyConfig();
				}
				
				if (ImGui::Button("Show Keybind Config"))
				{
					writeTutorialKeys();
					#ifdef _WIN32
					system("notepad .cbot/KeyCodes.txt");
					#else
					system("xdg-open .cbot/KeyCodes.txt");
					#endif
				}
				
				ImGui::SameLine();
				ImGui::Text("Current: %d", m_selectedKey);

				//Clickpack
				{
					std::vector<std::string> clickpackfolders;
					clickpackfolders.push_back("None");
					loadClickpacks(clickpackfolders);

					static std::string oldplayer1clickpack = m_player1_clickpack_path;
					static std::string oldplayer2clickpack = m_player2_clickpack_path;

					static int s_selected_player1_clickpack_index = 0;
					static int s_selected_player2_clickpack_index = 0;
					// Convert to const char* array
					std::vector<const char*> clickpack_cstrs;
					clickpack_cstrs.reserve(clickpackfolders.size());
					for (const auto& folder : clickpackfolders)
						clickpack_cstrs.push_back(folder.c_str());

					if (ImGui::Combo("Select player1 clickpack", &s_selected_player1_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size()))
					{
						config->setSettingValue("Player 1 ClickpackPath", clickpackfolders[s_selected_player1_clickpack_index]);
					}
					if (ImGui::Combo("Select player2 clickpack", &s_selected_player2_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size()))
					{
						config->setSettingValue("Player 2 ClickpackPath", clickpackfolders[s_selected_player2_clickpack_index]);
					}
					m_player1_clickpack_path = clickpackfolders[s_selected_player1_clickpack_index];
					m_player2_clickpack_path = clickpackfolders[s_selected_player2_clickpack_index];

					if (oldplayer1clickpack != m_player1_clickpack_path || oldplayer2clickpack != m_player2_clickpack_path)
					{
						loadcurrentClickpack();
					}
					oldplayer1clickpack = m_player1_clickpack_path;
					oldplayer2clickpack = m_player2_clickpack_path;
				}

				if (m_player1_softclicksclickpack == false)
					m_player1_softclicks = false;

				if (m_player1_hardclicksclickpack == false)
					m_player1_hardclicks = false;
				if (m_player1_whitenoiseclickpack == false)
					m_player1_whitenoise = false;

				if (m_player1_whitenoise == true)
				{
					m_whiteplayer1noisechannel->setVolume(m_whitenoisevolume);
					m_whiteplayer1noisechannel->setPaused(false);
				}
				else
				{
					m_whiteplayer1noisechannel->setPaused(true);
				}

				if (m_player2_softclicksclickpack == false)
					m_player2_softclicks = false;

				if (m_player2_hardclicksclickpack == false)
					m_player2_hardclicks = false;
				if (m_player2_whitenoiseclickpack == false)
					m_player2_whitenoise = false;

				if (m_player2_whitenoise == true)
				{
					m_whiteplayer2noisechannel->setVolume(m_whitenoisevolume);
					m_whiteplayer2noisechannel->setPaused(false);
				}
				else
				{
					m_whiteplayer2noisechannel->setPaused(true);
				}

				//Settings 
				ImGui::BeginDisabled(!m_player1_softclicksclickpack); // Fix Ui Bind from Alex
				if (ImGui::Checkbox("Enable Player1 Softclicks", &m_player1_softclicks))
				{
					config->setSettingValue("Player 1 SoftClicks", m_player1_softclicks);
				}
				ImGui::EndDisabled();
				
				ImGui::BeginDisabled(!m_player1_hardclicksclickpack);
				if (ImGui::Checkbox("Enable Player1 Hardclicks", &m_player1_hardclicks))
				{
					config->setSettingValue("Player 1 HardClicks", m_player1_hardclicks);
				}
				ImGui::EndDisabled();

				ImGui::BeginDisabled(!m_player1_microclicksclickpack);
				if (ImGui::Checkbox("Enable Player1 Microclicks", &m_player1_microclicks))
				{
					config->setSettingValue("Player 1 MicroClicks", m_player1_microclicks);
				}
				ImGui::EndDisabled();

				ImGui::BeginDisabled(!m_player1_whitenoiseclickpack);
				if (ImGui::Checkbox("Enable Player1 WhiteNoise", &m_player1_whitenoise))
				{
					config->setSettingValue("Player 1 WhiteNoise", m_player1_whitenoise);
				}
				ImGui::EndDisabled();

				//Settings
				ImGui::BeginDisabled(!m_player2_softclicksclickpack);
				if (ImGui::Checkbox("Enable Player2 Softclicks", &m_player2_softclicks))
				{
					config->setSettingValue("Player 2 SoftClicks", m_player2_softclicks);
				}
				ImGui::EndDisabled();
				
				ImGui::BeginDisabled(!m_player2_hardclicksclickpack);
				if (ImGui::Checkbox("Enable Player2 Hardclicks", &m_player2_hardclicks))
				{
					config->setSettingValue("Player 2 HardClicks", m_player2_hardclicks);
				}
				ImGui::EndDisabled();

				ImGui::BeginDisabled(!m_player2_microclicksclickpack);
				if (ImGui::Checkbox("Enable Player2 Microclicks", &m_player2_microclicks))
				{
					config->setSettingValue("Player 2 MicroClicks", m_player2_microclicks);
				}
				ImGui::EndDisabled();

				ImGui::BeginDisabled(!m_player2_whitenoiseclickpack);
				if (ImGui::Checkbox("Enable Player2 WhiteNoise", &m_player2_whitenoise))
				{
					config->setSettingValue("Player 2 WhiteNoise", m_player2_whitenoise);
				}
				ImGui::EndDisabled();

				if (ImGui::InputFloat("PC Noise volume", &m_whitenoisevolume))
				{
					config->setSettingValue("PC Noise Volume", m_whitenoisevolume);
				}

				if (ImGui::InputFloat("Min Click Pitch", &m_minPitch))
				{
					config->setSettingValue("Min Click Pitch", m_minPitch);
				}
				if (ImGui::InputFloat("Max Click Pitch", &m_maxPitch)) 
				{
					config->setSettingValue("Max Click Pitch", m_maxPitch);
				}
				if (ImGui::InputFloat("Min Click Volume", &m_minVolume))
				{
					config->setSettingValue("Min Click Volume", m_minVolume);
				}
				if (ImGui::InputFloat("Max Click Volume", &m_maxVolume))
				{
					config->setSettingValue("Max Click Volume", m_maxVolume);
				}
				if (ImGui::InputFloat("Min softclicks_time", &m_minsoftClickstime)) 
				{
					config->setSettingValue("Min softclicks_time", m_minsoftClickstime);
				}
				if (ImGui::InputFloat("Max softclicks_time", &m_maxsoftClickstime)) 
				{
					config->setSettingValue("Max softclicks_time", m_maxsoftClickstime);
				}
				if (ImGui::InputFloat("Min hardclicks_time", &m_minhardClickstime)) 
				{
					config->setSettingValue("Min hardclicks_time", m_minhardClickstime);
				}
				if (ImGui::InputFloat("Max hardclicks_time", &m_maxhardClickstime))
				{
					config->setSettingValue("Max hardclicks_time", m_maxhardClickstime);
				}
				if (ImGui::InputFloat("Min microclicks_time", &m_minmicroClickstime)) 
				{
					config->setSettingValue("Min microclicks_time", m_minmicroClickstime);
				}
				if (ImGui::InputFloat("Max microclicks_time", &m_maxmicroClickstime))
				{
					config->setSettingValue("Max microclicks_time", m_maxmicroClickstime);
				}


				// Disable Random Panning and Game Sync if no clickpacks are loaded
				bool hasClickpacks = !m_Player1ClickAudios.empty() || !m_Player2ClickAudios.empty();
				ImGui::BeginDisabled(!hasClickpacks);
				if (ImGui::Checkbox("Random Panning", &m_randomPanning))
				{
					config->setSettingValue("Random panning", m_randomPanning);
				}
				if (ImGui::Checkbox("Game Sync", &m_gameSync))
				{
					config->setSettingValue("Game sync", m_gameSync);
				}
				ImGui::EndDisabled();
				if (!hasClickpacks && (m_randomPanning || m_gameSync))
				{
					// Automatically disable features if no clickpacks are loaded
					m_randomPanning = false;
					m_gameSync = false;
					config->setSettingValue("Random panning", false);
					config->setSettingValue("Game sync", false);
					ImGui::TextColored(ImVec4(1.0f, 0.3f, 0.3f, 1.0f), "Random Panning and Game Sync require clickpacks");
				}
				if (m_randomPanning)
				{
					ImGui::SliderFloat("Panning Intensity", &m_panningIntensity, 0.0f, 1.0f);
					config->setSettingValue("Panning intensity", m_panningIntensity);
				}

				ImGui::End();

				ImGui::Begin("Reverb");
				ImGui::Text("Select Reverb Type");
				
				ImGui::BeginDisabled(!hasClickpacks);
				if (ImGui::Combo("Reverb type: ", &m_currentreverbtype, m_dsps.data(), m_dsps.size()))
				{
					config->setSettingValue("Reverb Effect", m_currentreverbtype);
				}
				ImGui::EndDisabled();
				
				if (!hasClickpacks && m_currentreverbtype != (int)FMOD_DSP_TYPE_UNKNOWN)
				{
					m_currentreverbtype = (int)FMOD_DSP_TYPE_UNKNOWN;
					config->setSettingValue("Reverb Effect", m_currentreverbtype);
					ImGui::TextColored(ImVec4(1.0f, 0.3f, 0.3f, 1.0f), "Reverb Require ClickPack Load");
				}

				ImGui::BeginDisabled(!hasClickpacks);
				switch (m_currentreverbtype)
				{
				case (int)FMOD_DSP_TYPE_OSCILLATOR:
					ImGui::InputInt("FMOD_DSP_OSCILLATOR_TYPE", (int*)&m_reverb::FMOD_DSP_OSCILLATOR_TYPE);
					ImGui::InputFloat("FMOD_DSP_OSCILLATOR_RATE", &m_reverb::FMOD_DSP_OSCILLATOR_RATE);
					break;

				case (int)FMOD_DSP_TYPE_LOWPASS:
					ImGui::InputFloat("FMOD_DSP_LOWPASS_CUTOFF", &m_reverb::FMOD_DSP_LOWPASS_CUTOFF);
					ImGui::InputFloat("FMOD_DSP_LOWPASS_RESONANCE", &m_reverb::FMOD_DSP_LOWPASS_RESONANCE);
					break;

				case (int)FMOD_DSP_TYPE_ITLOWPASS:
					ImGui::InputFloat("FMOD_DSP_ITLOWPASS_CUTOFF", &m_reverb::FMOD_DSP_ITLOWPASS_CUTOFF);
					break;

				case (int)FMOD_DSP_TYPE_HIGHPASS:
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_CUTOFF", &m_reverb::FMOD_DSP_HIGHPASS_CUTOFF);
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_RESONANCE", &m_reverb::FMOD_DSP_HIGHPASS_RESONANCE);
					break;

				case (int)FMOD_DSP_TYPE_ECHO:
					ImGui::InputFloat("FMOD_DSP_ECHO_DELAY", &m_reverb::FMOD_DSP_ECHO_DELAY);
					ImGui::InputFloat("FMOD_DSP_ECHO_FEEDBACK", &m_reverb::FMOD_DSP_ECHO_FEEDBACK);
					ImGui::InputFloat("FMOD_DSP_ECHO_DRYLEVEL", &m_reverb::FMOD_DSP_ECHO_DRYLEVEL);
					ImGui::InputFloat("FMOD_DSP_ECHO_WETLEVEL", &m_reverb::FMOD_DSP_ECHO_WETLEVEL);
					break;

				case (int)FMOD_DSP_TYPE_FADER:
					ImGui::InputFloat("FMOD_DSP_FADER_GAIN", &m_reverb::FMOD_DSP_FADER_GAIN);
					break;

				case (int)FMOD_DSP_TYPE_FLANGE:
					ImGui::InputFloat("FMOD_DSP_FLANGE_MIX", &m_reverb::FMOD_DSP_FLANGE_MIX);
					ImGui::InputFloat("FMOD_DSP_FLANGE_DEPTH", &m_reverb::FMOD_DSP_FLANGE_DEPTH);
					ImGui::InputFloat("FMOD_DSP_FLANGE_RATE", &m_reverb::FMOD_DSP_FLANGE_RATE);
					break;

				case (int)FMOD_DSP_TYPE_DISTORTION:
					ImGui::InputFloat("FMOD_DSP_DISTORTION_LEVEL", &m_reverb::FMOD_DSP_DISTORTION_LEVEL);
					break;

				case (int)FMOD_DSP_TYPE_NORMALIZE:
					ImGui::InputFloat("FMOD_DSP_NORMALIZE_FADETIME", &m_reverb::FMOD_DSP_NORMALIZE_FADETIME);
					ImGui::InputFloat("FMOD_DSP_NORMALIZE_MAXAMP", &m_reverb::FMOD_DSP_NORMALIZE_MAXAMP);
					break;

				case (int)FMOD_DSP_TYPE_LIMITER:
					ImGui::InputFloat("FMOD_DSP_LIMITER_CEILING", &m_reverb::FMOD_DSP_LIMITER_CEILING);
					break;

				case (int)FMOD_DSP_TYPE_PARAMEQ:
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_CENTER", &m_reverb::FMOD_DSP_PARAMEQ_CENTER);
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_BANDWIDTH", &m_reverb::FMOD_DSP_PARAMEQ_BANDWIDTH);
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_GAIN", &m_reverb::FMOD_DSP_PARAMEQ_GAIN);
					break;

				case (int)FMOD_DSP_TYPE_PITCHSHIFT:
					ImGui::InputFloat("FMOD_DSP_PITCHSHIFT_PITCH", &m_reverb::FMOD_DSP_PITCHSHIFT_PITCH);
					break;

				case (int)FMOD_DSP_TYPE_CHORUS:
					ImGui::InputFloat("FMOD_DSP_CHORUS_MIX", &m_reverb::FMOD_DSP_CHORUS_MIX);
					ImGui::InputFloat("FMOD_DSP_CHORUS_RATE", &m_reverb::FMOD_DSP_CHORUS_RATE);
					ImGui::InputFloat("FMOD_DSP_CHORUS_DEPTH", &m_reverb::FMOD_DSP_CHORUS_DEPTH);
					break;

				case (int)FMOD_DSP_TYPE_ITECHO:
					ImGui::InputFloat("FMOD_DSP_ITECHO_FEEDBACK", &m_reverb::FMOD_DSP_ITECHO_FEEDBACK);
					break;

				case (int)FMOD_DSP_TYPE_COMPRESSOR:
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_THRESHOLD", &m_reverb::FMOD_DSP_COMPRESSOR_THRESHOLD);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_RATIO", &m_reverb::FMOD_DSP_COMPRESSOR_RATIO);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_ATTACK", &m_reverb::FMOD_DSP_COMPRESSOR_ATTACK);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_RELEASE", &m_reverb::FMOD_DSP_COMPRESSOR_RELEASE);
					break;

				case (int)FMOD_DSP_TYPE_SFXREVERB:
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DECAYTIME", &m_reverb::FMOD_DSP_SFXREVERB_DECAYTIME);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DENSITY", &m_reverb::FMOD_DSP_SFXREVERB_DENSITY);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DIFFUSION", &m_reverb::FMOD_DSP_SFXREVERB_DIFFUSION);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_WETLEVEL", &m_reverb::FMOD_DSP_SFXREVERB_WETLEVEL);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DRYLEVEL", &m_reverb::FMOD_DSP_SFXREVERB_DRYLEVEL);
					break;

				case (int)FMOD_DSP_TYPE_LOWPASS_SIMPLE:
					ImGui::InputFloat("FMOD_DSP_LOWPASS_SIMPLE_CUTOFF", &m_reverb::FMOD_DSP_LOWPASS_SIMPLE_CUTOFF);
					break;

				case (int)FMOD_DSP_TYPE_DELAY:
					ImGui::InputFloat("FMOD_DSP_DELAY_DELAY", &m_reverb::FMOD_DSP_DELAY_DELAY);
					break;

				case (int)FMOD_DSP_TYPE_TREMOLO:
					ImGui::InputFloat("FMOD_DSP_TREMOLO_FREQUENCY", &m_reverb::FMOD_DSP_TREMOLO_FREQUENCY);
					ImGui::InputFloat("FMOD_DSP_TREMOLO_DEPTH", &m_reverb::FMOD_DSP_TREMOLO_DEPTH);
					ImGui::InputFloat("FMOD_DSP_TREMOLO_SKEW", &m_reverb::FMOD_DSP_TREMOLO_SKEW);
					break;

				case (int)FMOD_DSP_TYPE_HIGHPASS_SIMPLE:
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF", &m_reverb::FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF);
					break;
				}
				
				// End the disabled block for reverb controls
				ImGui::EndDisabled();
				ImGui::End();
			}
			else
			{
				renderAutoUpdate();
			}
		}
	}

	void GeodeRender()
	{
		auto config = geode::Mod::get();

		m_selectedKey = config->getSettingValue<int>("Menu key");

		m_player1_clickpack_path = config->getSettingValue<std::string>("Player 1 ClickpackPath");
		m_player2_clickpack_path = config->getSettingValue<std::string>("Player 2 ClickpackPath");

		m_player1_softclicks = config->getSettingValue<bool>("Player 1 SoftClicks");
		m_player1_hardclicks = config->getSettingValue<bool>("Player 1 HardClicks");
		m_player1_microclicks = config->getSettingValue<bool>("Player 1 MicroClicks");
		m_player1_whitenoise = config->getSettingValue<bool>("Player 1 WhiteNoise");
		m_player2_softclicks = config->getSettingValue<bool>("Player 2 SoftClicks");
		m_player2_hardclicks = config->getSettingValue<bool>("Player 2 HardClicks");
		m_player2_microclicks = config->getSettingValue<bool>("Player 2 MicroClicks");
		m_player2_whitenoise = config->getSettingValue<bool>("Player 2 WhiteNoise");

		m_whitenoisevolume = config->getSettingValue<float>("PC Noise Volume");
		m_minPitch = config->getSettingValue<float>("Min Click Pitch");
		m_maxPitch = config->getSettingValue<float>("Max Click Pitch");
		m_minVolume = config->getSettingValue<float>("Min Click Volume");
		m_maxVolume = config->getSettingValue<float>("Max Click Volume");

		m_minsoftClickstime = config->getSettingValue<float>("Min softclicks_time");
		m_maxsoftClickstime = config->getSettingValue<float>("Max softclicks_time");
		m_minhardClickstime = config->getSettingValue<float>("Min hardclicks_time");
		m_maxhardClickstime = config->getSettingValue<float>("Max hardclicks_time");
		m_minmicroClickstime = config->getSettingValue<float>("Min microclicks_time");
		m_maxmicroClickstime = config->getSettingValue<float>("Max microclicks_time");

		m_currentreverbtype = config->getSettingValue<int>("Reverb effect");
		m_randomPanning = config->getSettingValue<bool>("Random panning");
		m_gameSync = config->getSettingValue<bool>("Game sync");
		m_panningIntensity = config->getSettingValue<float>("Panning intensity");
	}
	$on_mod(Loaded) {
		ImGuiCocos::get().setup([] {
			writeTutorialKeys();

			m_updatefound = CBot::autoupdate::CheckForNewUpdate();
			// update!
			std::filesystem::create_directory(".cbot");
			std::filesystem::create_directory(".cbot/clickpacks");
			
			try {
				for (const auto& entry : std::filesystem::directory_iterator(".cbot")) {
					if (std::filesystem::is_directory(entry.status()) && entry.path().filename() != "clickpacks") {
						std::string oldPath = entry.path().string();
						std::string newPath = ".cbot/clickpacks/" + entry.path().filename().string();

						if (!std::filesystem::exists(newPath)) {
							try {
								std::filesystem::copy(oldPath, newPath, std::filesystem::copy_options::recursive);
								std::filesystem::remove_all(oldPath);
							} catch (const std::exception& e) {
								std::println("Error moving clickpack {}: {}", oldPath, e.what());
							}
						}
					}
				}
			} catch (const std::exception& e) {
				std::println("Error checking for clickpacks to move: {}", e.what());
			}

			if (std::filesystem::exists("save.bin")) {
				try {

					if (!std::filesystem::exists(savefilepath)) {
						std::filesystem::copy("save.bin", savefilepath);
						std::filesystem::remove("save.bin");
						std::println("save.bin in .cbot");
					}
				} catch (const std::exception& e) {
					std::println("Error moving save.bin: {}", e.what());
				}
			}
			
			// Check if old KeyCodes.txt exists in root directory and move it to .cbot
			if (std::filesystem::exists("KeyCodes.txt")) {
				try {
					// Only move if destination doesn't exist
					if (!std::filesystem::exists(".cbot/KeyCodes.txt")) {
						std::filesystem::copy("KeyCodes.txt", ".cbot/KeyCodes.txt");
						std::filesystem::remove("KeyCodes.txt");
						std::println("KeyCodes.txt in .cbot/");
					}
				} catch (const std::exception& e) {
					std::println("Error Moving KeyCodes.txt: {}", e.what());
				}
			}
			// basiclly Its File Move ALl File To .cbot It Cleans Fr LoL
			if (std::filesystem::exists(savefilepath))
			{
				loadMenukeyConfig();
			}
			initializeImGui();
			// this runs after imgui has been setup,
			// its a callback as imgui will be re initialized when toggling fullscreen,
			// so use this to setup any themes and or fonts!
			}).draw([] {
				GeodeRender(); // I mean i need call it every frame, why not here
				renderImGui();
				});
	}
	
	class $modify(ImGuiKeybindHook, cocos2d::CCKeyboardDispatcher) {
		bool dispatchKeyboardMSG(cocos2d::enumKeyCodes key, bool isKeyDown, bool isKeyRepeat) {
			if (key == m_selectedKey && isKeyDown) {
				gui::m_show = !gui::m_show;
			}
			return CCKeyboardDispatcher::dispatchKeyboardMSG(key, isKeyDown, isKeyRepeat);
		}
	};	
}