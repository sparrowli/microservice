#ifndef __AUDIO_MIX_H__
#define __AUDIO_MIX_H__

class AudioMix
{
public:
	AudioMix();
	~AudioMix();

	int getRoomCount();

private:
	int m_roomCount;
};

#endif // __AUDIO_MIX_H__
