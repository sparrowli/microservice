#ifndef __AUDIO_MIX_H__
#define __AUDIO_MIX_H__


#if TRAE_PLATFORM_ANDROID

	typedef struct _trae_platform_specific_info_s
	{
		void *jvm;
		void *jenv;
	} trae_platform_specific_into_t;

#else

	typedef struct _trae_platform_specific_info_s
	{
		unsigned int reserved;
	} trae_platform_specific_into_t;

#endif

typedef trae_platform_specific_into_t CPlatformInfo;
#endif // __AUDIO_MIX_H__
