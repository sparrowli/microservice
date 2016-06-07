#include "gtest/gtest.h"
#include "src/AudioMix.h"

TEST( AudioMix, initCPlatformInfo )
{
	AudioMix* audioMix = new AudioMix();

	EXPECT_EQ( 0u, audioMix->getRoomCount() );
}
