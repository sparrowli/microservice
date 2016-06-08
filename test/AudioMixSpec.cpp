#include "gtest/gtest.h"
#include "src/AudioMix.h"

class AudioMixSpec : public testing::Test {
protected:
	virtual void SetUp() 
	{
		audioMix = new AudioMix();
	} 

	virtual void TearDown()
	{
		delete audioMix;
	}

	AudioMix* audioMix;

};
TEST_F( AudioMixSpec, isRoomCountRight )
{
	EXPECT_EQ( 0u, audioMix->getRoomCount() );
}
