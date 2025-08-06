#pragma once

namespace std {
	template <>
	struct hash<ClickAudioType> {
		std::size_t operator()(const ClickAudioType& t) const noexcept {
			return (static_cast<std::size_t>(t.clickType) << 1) ^ std::hash<int>()(t.click);
		}
	};

	template <>
	struct equal_to<ClickAudioType> {
		bool operator()(const ClickAudioType& lhs, const ClickAudioType& rhs) const noexcept {
			return lhs.clickType == rhs.clickType && lhs.click == rhs.click;
		}
	};
}
namespace gui
{
	void initializeImGui();
	void renderImGui();
	void GeodeRender();

	inline std::unordered_map<ClickAudioType, ClickAudio> m_Player1ClickAudios;
	inline std::unordered_map<ClickType, size_t> m_Player1SizeClickAudios;

	inline std::unordered_map<ClickAudioType, ClickAudio> m_Player2ClickAudios;
	inline std::unordered_map<ClickType, size_t> m_Player2SizeClickAudios;

	inline bool m_show = true;
    inline int m_selectedKey = 16;

	inline FMOD::Channel* m_whiteplayer1noisechannel = nullptr;
	inline FMOD::Sound* m_whiteplayer1noisesound = nullptr;

	inline FMOD::Channel* m_whiteplayer2noisechannel = nullptr;
	inline FMOD::Sound* m_whiteplayer2noisesound = nullptr;

	inline std::string m_player1_clickpack_path = "None";
	inline std::string m_player2_clickpack_path = "None";
	//player1
	inline bool m_player1_softclicks = false;
	inline bool m_player1_hardclicks = false;
	inline bool m_player1_microclicks = false;
	inline bool m_player1_whitenoise = false;
	inline bool m_player1_softclicksclickpack = true;
	inline bool m_player1_hardclicksclickpack = true;
	inline bool m_player1_microclicksclickpack = true;
	inline bool m_player1_whitenoiseclickpack = true;
	//player2
	inline bool m_player2_softclicks = false;
	inline bool m_player2_hardclicks = false;
	inline bool m_player2_microclicks = false;
	inline bool m_player2_whitenoise = false;
	inline bool m_player2_softclicksclickpack = true;
	inline bool m_player2_hardclicksclickpack = true;
	inline bool m_player2_microclicksclickpack = true;
	inline bool m_player2_whitenoiseclickpack = true;

	inline float m_whitenoisevolume = 1.0f;
	//If folder soft clicks for example doesn�t exists, then the user cannot change the soft clicks  
	inline float m_minVolume = 1.0f;
	inline float m_maxVolume = 100.0f;
	inline float m_minPitch = 0.8f;
	inline float m_maxPitch = 1.2f;
	inline float m_minsoftClickstime = 0.1f;
	inline float m_maxsoftClickstime = 0.1f;
	inline float m_minhardClickstime = 2.0f;
	inline float m_maxhardClickstime = 2.0f;
	inline float m_minmicroClickstime = 0.05f;
	inline float m_maxmicroClickstime = 0.05f;
	inline bool m_randomPanning = false;
	inline bool m_gameSync = false;
	inline float m_panningIntensity = 0.5f;

	inline std::string m_Currentversion = "3.7";
	inline std::string m_Title = "CBot " + m_Currentversion;
	inline bool m_updatefound = false;

	inline int m_currentreverbtype = 0;
	static const std::vector<const char*> m_dsps = { "FMOD_DSP_TYPE_UNKNOWN", "FMOD_DSP_TYPE_MIXER", "FMOD_DSP_TYPE_OSCILLATOR",
"FMOD_DSP_TYPE_LOWPASS", "FMOD_DSP_TYPE_ITLOWPASS", "FMOD_DSP_TYPE_HIGHPASS", "FMOD_DSP_TYPE_ECHO", "FMOD_DSP_TYPE_FADER",
"FMOD_DSP_TYPE_FLANGE", "FMOD_DSP_TYPE_DISTORTION", "FMOD_DSP_TYPE_NORMALIZE", "FMOD_DSP_TYPE_LIMITER", "FMOD_DSP_TYPE_PARAMEQ",
"FMOD_DSP_TYPE_PITCHSHIFT", "FMOD_DSP_TYPE_CHORUS", "FMOD_DSP_TYPE_ITECHO", "FMOD_DSP_TYPE_COMPRESSOR", "FMOD_DSP_TYPE_SFXREVERB",
"FMOD_DSP_TYPE_LOWPASS_SIMPLE", "FMOD_DSP_TYPE_DELAY", "FMOD_DSP_TYPE_TREMOLO", "FMOD_DSP_TYPE_RETURN", "FMOD_DSP_TYPE_HIGHPASS_SIMPLE",
"FMOD_DSP_TYPE_PAN", "FMOD_DSP_TYPE_THREE_EQ", "FMOD_DSP_TYPE_FFT", "FMOD_DSP_TYPE_LOUDNESS_METER", "FMOD_DSP_TYPE_CONVOLUTIONREVERB",
"FMOD_DSP_TYPE_CHANNELMIX", "FMOD_DSP_TYPE_TRANSCEIVER", "FMOD_DSP_TYPE_OBJECTPAN", "FMOD_DSP_TYPE_MULTIBAND_EQ", "FMOD_DSP_TYPE_MULTIBAND_DYNAMICS" };

	namespace m_reverb
	{
		// --- MIXER (no params) ---
		// No parameters to set.

		// OSCILLATOR
		inline int   FMOD_DSP_OSCILLATOR_TYPE = 0;       // 0 = sine, 1 = square, etc.
		inline float FMOD_DSP_OSCILLATOR_RATE = 440.0f;  // Hz

		// LOWPASS
		inline float FMOD_DSP_LOWPASS_CUTOFF = 2000.0f;
		inline float FMOD_DSP_LOWPASS_RESONANCE = 3.5f;

		// ITLOWPASS
		inline float FMOD_DSP_ITLOWPASS_CUTOFF = 1500.0f;

		// HIGHPASS
		inline float FMOD_DSP_HIGHPASS_CUTOFF = 500.0f;
		inline float FMOD_DSP_HIGHPASS_RESONANCE = 1.0f;

		// ECHO
		inline float FMOD_DSP_ECHO_DELAY = 500.0f;  // ms
		inline float FMOD_DSP_ECHO_FEEDBACK = 50.0f;   // %
		inline float FMOD_DSP_ECHO_DRYLEVEL = 0.0f;    // dB
		inline float FMOD_DSP_ECHO_WETLEVEL = 0.0f;    // dB

		// FADER
		inline float FMOD_DSP_FADER_GAIN = 1.0f;        // Linear gain (0.0 - 10.0)

		// FLANGE
		inline float FMOD_DSP_FLANGE_MIX = 50.0f;      // %
		inline float FMOD_DSP_FLANGE_DEPTH = 1.0f;       // 0.0 - 1.0
		inline float FMOD_DSP_FLANGE_RATE = 0.1f;       // Hz

		// DISTORTION
		inline float FMOD_DSP_DISTORTION_LEVEL = 0.5f;  // 0.0 - 1.0

		// NORMALIZE
		inline float FMOD_DSP_NORMALIZE_FADETIME = 500.0f;  // ms
		inline float FMOD_DSP_NORMALIZE_MAXAMP = 10.0f;   // linear gain

		// LIMITER
		inline float FMOD_DSP_LIMITER_CEILING = 0.0f;    // dB

		// PARAMEQ (Parametric EQ)
		inline float FMOD_DSP_PARAMEQ_CENTER = 1000.0f;  // Hz
		inline float FMOD_DSP_PARAMEQ_BANDWIDTH = 1.0f;     // Octaves
		inline float FMOD_DSP_PARAMEQ_GAIN = 0.0f;     // dB

		// PITCHSHIFT
		inline float FMOD_DSP_PITCHSHIFT_PITCH = 1.0f;      // 1.0 = no pitch change

		// CHORUS
		inline float FMOD_DSP_CHORUS_MIX = 50.0f;         // %
		inline float FMOD_DSP_CHORUS_RATE = 0.8f;          // Hz
		inline float FMOD_DSP_CHORUS_DEPTH = 0.8f;          // 0.0 - 1.0

		// ITECHO (Impulse Tracker Echo)
		inline float FMOD_DSP_ITECHO_FEEDBACK = 40.0f;      // %

		// COMPRESSOR
		inline float FMOD_DSP_COMPRESSOR_THRESHOLD = -20.0f; // dB
		inline float FMOD_DSP_COMPRESSOR_RATIO = 4.0f;
		inline float FMOD_DSP_COMPRESSOR_ATTACK = 10.0f;   // ms
		inline float FMOD_DSP_COMPRESSOR_RELEASE = 50.0f;   // ms

		// SFXREVERB
		inline float FMOD_DSP_SFXREVERB_DECAYTIME = 1500.0f;  // ms
		inline float FMOD_DSP_SFXREVERB_DENSITY = 100.0f;   // %
		inline float FMOD_DSP_SFXREVERB_DIFFUSION = 100.0f;   // %
		inline float FMOD_DSP_SFXREVERB_WETLEVEL = -6.0f;    // dB
		inline float FMOD_DSP_SFXREVERB_DRYLEVEL = 0.0f;     // dB

		// LOWPASS_SIMPLE
		inline float FMOD_DSP_LOWPASS_SIMPLE_CUTOFF = 2000.0f;  // Hz

		// DELAY
		inline float FMOD_DSP_DELAY_DELAY = 250.0f;  // ms

		// TREMOLO
		inline float FMOD_DSP_TREMOLO_FREQUENCY = 5.0f;  // Hz
		inline float FMOD_DSP_TREMOLO_DEPTH = 0.8f;  // 0.0 - 1.0
		inline float FMOD_DSP_TREMOLO_SKEW = 0.5f;  // waveform shape

		// SEND / RETURN / TRANSCEIVER
		// Usually no user parameters, just routing controls.

		// HIGHPASS_SIMPLE
		inline float FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF = 500.0f;  // Hz

		// FFT
		// No effect parameters � for analysis only

		// LOUDNESS_METER
		// No parameters � analysis only

		// CONVOLUTIONREVERB
		// Needs impulse response file, no direct parameters here

		// MULTIBAND_DYNAMICS
		// Complex DSP, parameters include thresholds, ratios, attack/release per band
		// Add as needed for your application
	}
}