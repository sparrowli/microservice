#include "AudioMix.h"

AudioMix::AudioMix()
{
	m_roomCount = 0;
}

AudioMix::~AudioMix()
{
}

int AudioMix::getRoomCount()
{
	return m_roomCount;
}
