/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef __QAL_H__
#define __QAL_H__

#include "../qcommon/q_shared.h"
#include "../qcommon/qcommon.h"

#define ALC_ALL_DEVICES_SPECIFIER 0x1013

#define AL_NO_PROTOTYPES
#define ALC_NO_PROTOTYPES

#if _WIN32
#	include <al.h>
#	include <alc.h>
#elif MACOS_X
#	include <OpenAl/al.h>
#	include <OpenAl/alc.h>
#else
#	include <AL/al.h>
#	include <AL/alc.h>
#endif

extern LPALENABLE               qalEnable;
extern LPALDISABLE              qalDisable;
extern LPALISENABLED            qalIsEnabled;
extern LPALGETSTRING            qalGetString;
extern LPALGETBOOLEANV          qalGetBooleanv;
extern LPALGETINTEGERV          qalGetIntegerv;
extern LPALGETFLOATV            qalGetFloatv;
extern LPALGETDOUBLEV           qalGetDoublev;
extern LPALGETBOOLEAN           qalGetBoolean;
extern LPALGETINTEGER           qalGetInteger;
extern LPALGETFLOAT             qalGetFloat;
extern LPALGETDOUBLE            qalGetDouble;
extern LPALGETERROR             qalGetError;
extern LPALISEXTENSIONPRESENT   qalIsExtensionPresent;
extern LPALGETPROCADDRESS       qalGetProcAddress;
extern LPALGETENUMVALUE         qalGetEnumValue;
extern LPALLISTENERF            qalListenerf;
extern LPALLISTENER3F           qalListener3f;
extern LPALLISTENERFV           qalListenerfv;
extern LPALLISTENERI            qalListeneri;
extern LPALLISTENER3I           qalListener3i;
extern LPALLISTENERIV           qalListeneriv;
extern LPALGETLISTENERF         qalGetListenerf;
extern LPALGETLISTENER3F        qalGetListener3f;
extern LPALGETLISTENERFV        qalGetListenerfv;
extern LPALGETLISTENERI         qalGetListeneri;
extern LPALGETLISTENER3I        qalGetListener3i;
extern LPALGETLISTENERIV        qalGetListeneriv;
extern LPALGENSOURCES           qalGenSources;
extern LPALDELETESOURCES        qalDeleteSources;
extern LPALISSOURCE             qalIsSource;
extern LPALSOURCEF              qalSourcef;
extern LPALSOURCE3F             qalSource3f;
extern LPALSOURCEFV             qalSourcefv;
extern LPALSOURCEI              qalSourcei;
extern LPALSOURCE3I             qalSource3i;
extern LPALSOURCEIV             qalSourceiv;
extern LPALGETSOURCEF           qalGetSourcef;
extern LPALGETSOURCE3F          qalGetSource3f;
extern LPALGETSOURCEFV          qalGetSourcefv;
extern LPALGETSOURCEI           qalGetSourcei;
extern LPALGETSOURCE3I          qalGetSource3i;
extern LPALGETSOURCEIV          qalGetSourceiv;
extern LPALSOURCEPLAYV          qalSourcePlayv;
extern LPALSOURCESTOPV          qalSourceStopv;
extern LPALSOURCEREWINDV        qalSourceRewindv;
extern LPALSOURCEPAUSEV         qalSourcePausev;
extern LPALSOURCEPLAY           qalSourcePlay;
extern LPALSOURCESTOP           qalSourceStop;
extern LPALSOURCEREWIND         qalSourceRewind;
extern LPALSOURCEPAUSE          qalSourcePause;
extern LPALSOURCEQUEUEBUFFERS   qalSourceQueueBuffers;
extern LPALSOURCEUNQUEUEBUFFERS qalSourceUnqueueBuffers;
extern LPALGENBUFFERS           qalGenBuffers;
extern LPALDELETEBUFFERS        qalDeleteBuffers;
extern LPALISBUFFER             qalIsBuffer;
extern LPALBUFFERDATA           qalBufferData;
extern LPALBUFFERF              qalBufferf;
extern LPALBUFFER3F             qalBuffer3f;
extern LPALBUFFERFV             qalBufferfv;
extern LPALBUFFERF              qalBufferi;
extern LPALBUFFER3F             qalBuffer3i;
extern LPALBUFFERFV             qalBufferiv;
extern LPALGETBUFFERF           qalGetBufferf;
extern LPALGETBUFFER3F          qalGetBuffer3f;
extern LPALGETBUFFERFV          qalGetBufferfv;
extern LPALGETBUFFERI           qalGetBufferi;
extern LPALGETBUFFER3I          qalGetBuffer3i;
extern LPALGETBUFFERIV          qalGetBufferiv;
extern LPALDOPPLERFACTOR        qalDopplerFactor;
extern LPALDOPPLERVELOCITY      qalDopplerVelocity;
extern LPALSPEEDOFSOUND         qalSpeedOfSound;
extern LPALDISTANCEMODEL        qalDistanceModel;

extern LPALCCREATECONTEXT       qalcCreateContext;
extern LPALCMAKECONTEXTCURRENT  qalcMakeContextCurrent;
extern LPALCPROCESSCONTEXT      qalcProcessContext;
extern LPALCSUSPENDCONTEXT      qalcSuspendContext;
extern LPALCDESTROYCONTEXT      qalcDestroyContext;
extern LPALCGETCURRENTCONTEXT   qalcGetCurrentContext;
extern LPALCGETCONTEXTSDEVICE   qalcGetContextsDevice;
extern LPALCOPENDEVICE          qalcOpenDevice;
extern LPALCCLOSEDEVICE         qalcCloseDevice;
extern LPALCGETERROR            qalcGetError;
extern LPALCISEXTENSIONPRESENT  qalcIsExtensionPresent;
extern LPALCGETPROCADDRESS      qalcGetProcAddress;
extern LPALCGETENUMVALUE        qalcGetEnumValue;
extern LPALCGETSTRING           qalcGetString;
extern LPALCGETINTEGERV         qalcGetIntegerv;
extern LPALCCAPTUREOPENDEVICE   qalcCaptureOpenDevice;
extern LPALCCAPTURECLOSEDEVICE  qalcCaptureCloseDevice;
extern LPALCCAPTURESTART        qalcCaptureStart;
extern LPALCCAPTURESTOP         qalcCaptureStop;
extern LPALCCAPTURESAMPLES      qalcCaptureSamples;

qboolean                        QAL_Init( const char *libname );
void                            QAL_Shutdown( void );

#endif // __QAL_H__
