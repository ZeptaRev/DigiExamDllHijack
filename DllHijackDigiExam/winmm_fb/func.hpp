#pragma once

//Export all the functions so it can be used by the attacked program.
//This is important so the infected dll can be loaded
//Their are multiple sources of this.

//This is from a source on github called winmm_fb
#pragma comment( lib, "Shlwapi.lib")
#pragma comment(linker, "/EXPORT:Noname2=_AheadLib_Unnamed2,@2,NONAME")
#pragma comment(linker, "/EXPORT:mciExecute=_AheadLib_mciExecute,@3")
#pragma comment(linker, "/EXPORT:CloseDriver=_AheadLib_CloseDriver,@4")
#pragma comment(linker, "/EXPORT:DefDriverProc=_AheadLib_DefDriverProc,@5")
#pragma comment(linker, "/EXPORT:DriverCallback=_AheadLib_DriverCallback,@6")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=_AheadLib_DrvGetModuleHandle,@7")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=_AheadLib_GetDriverModuleHandle,@8")
#pragma comment(linker, "/EXPORT:NotifyCallbackData=_AheadLib_NotifyCallbackData,@9")
#pragma comment(linker, "/EXPORT:OpenDriver=_AheadLib_OpenDriver,@10")
#pragma comment(linker, "/EXPORT:PlaySound=_AheadLib_PlaySound,@11")
#pragma comment(linker, "/EXPORT:PlaySoundA=_AheadLib_PlaySoundA,@12")
#pragma comment(linker, "/EXPORT:PlaySoundW=_AheadLib_PlaySoundW,@13")
#pragma comment(linker, "/EXPORT:SendDriverMessage=_AheadLib_SendDriverMessage,@14")
#pragma comment(linker, "/EXPORT:WOW32DriverCallback=_AheadLib_WOW32DriverCallback,@15")
#pragma comment(linker, "/EXPORT:WOW32ResolveMultiMediaHandle=_AheadLib_WOW32ResolveMultiMediaHandle,@16")
#pragma comment(linker, "/EXPORT:WOWAppExit=_AheadLib_WOWAppExit,@17")
#pragma comment(linker, "/EXPORT:aux32Message=_AheadLib_aux32Message,@18")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=_AheadLib_auxGetDevCapsA,@19")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=_AheadLib_auxGetDevCapsW,@20")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=_AheadLib_auxGetNumDevs,@21")
#pragma comment(linker, "/EXPORT:auxGetVolume=_AheadLib_auxGetVolume,@22")
#pragma comment(linker, "/EXPORT:auxOutMessage=_AheadLib_auxOutMessage,@23")
#pragma comment(linker, "/EXPORT:auxSetVolume=_AheadLib_auxSetVolume,@24")
#pragma comment(linker, "/EXPORT:joy32Message=_AheadLib_joy32Message,@25")
#pragma comment(linker, "/EXPORT:joyConfigChanged=_AheadLib_joyConfigChanged,@26")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=_AheadLib_joyGetDevCapsA,@27")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=_AheadLib_joyGetDevCapsW,@28")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=_AheadLib_joyGetNumDevs,@29")
#pragma comment(linker, "/EXPORT:joyGetPos=_AheadLib_joyGetPos,@30")
#pragma comment(linker, "/EXPORT:joyGetPosEx=_AheadLib_joyGetPosEx,@31")
#pragma comment(linker, "/EXPORT:joyGetThreshold=_AheadLib_joyGetThreshold,@32")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=_AheadLib_joyReleaseCapture,@33")
#pragma comment(linker, "/EXPORT:joySetCapture=_AheadLib_joySetCapture,@34")
#pragma comment(linker, "/EXPORT:joySetThreshold=_AheadLib_joySetThreshold,@35")
#pragma comment(linker, "/EXPORT:mci32Message=_AheadLib_mci32Message,@36")
#pragma comment(linker, "/EXPORT:mciDriverNotify=_AheadLib_mciDriverNotify,@37")
#pragma comment(linker, "/EXPORT:mciDriverYield=_AheadLib_mciDriverYield,@38")
#pragma comment(linker, "/EXPORT:mciFreeCommandResource=_AheadLib_mciFreeCommandResource,@39")
#pragma comment(linker, "/EXPORT:mciGetCreatorTask=_AheadLib_mciGetCreatorTask,@40")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDA=_AheadLib_mciGetDeviceIDA,@41")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=_AheadLib_mciGetDeviceIDFromElementIDA,@42")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=_AheadLib_mciGetDeviceIDFromElementIDW,@43")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDW=_AheadLib_mciGetDeviceIDW,@44")
#pragma comment(linker, "/EXPORT:mciGetDriverData=_AheadLib_mciGetDriverData,@45")
#pragma comment(linker, "/EXPORT:mciGetErrorStringA=_AheadLib_mciGetErrorStringA,@46")
#pragma comment(linker, "/EXPORT:mciGetErrorStringW=_AheadLib_mciGetErrorStringW,@47")
#pragma comment(linker, "/EXPORT:mciGetYieldProc=_AheadLib_mciGetYieldProc,@48")
#pragma comment(linker, "/EXPORT:mciLoadCommandResource=_AheadLib_mciLoadCommandResource,@49")
#pragma comment(linker, "/EXPORT:mciSendCommandA=_AheadLib_mciSendCommandA,@50")
#pragma comment(linker, "/EXPORT:mciSendCommandW=_AheadLib_mciSendCommandW,@51")
#pragma comment(linker, "/EXPORT:mciSendStringA=_AheadLib_mciSendStringA,@52")
#pragma comment(linker, "/EXPORT:mciSendStringW=_AheadLib_mciSendStringW,@53")
#pragma comment(linker, "/EXPORT:mciSetDriverData=_AheadLib_mciSetDriverData,@54")
#pragma comment(linker, "/EXPORT:mciSetYieldProc=_AheadLib_mciSetYieldProc,@55")
#pragma comment(linker, "/EXPORT:mid32Message=_AheadLib_mid32Message,@56")
#pragma comment(linker, "/EXPORT:midiConnect=_AheadLib_midiConnect,@57")
#pragma comment(linker, "/EXPORT:midiDisconnect=_AheadLib_midiDisconnect,@58")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=_AheadLib_midiInAddBuffer,@59")
#pragma comment(linker, "/EXPORT:midiInClose=_AheadLib_midiInClose,@60")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=_AheadLib_midiInGetDevCapsA,@61")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=_AheadLib_midiInGetDevCapsW,@62")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=_AheadLib_midiInGetErrorTextA,@63")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=_AheadLib_midiInGetErrorTextW,@64")
#pragma comment(linker, "/EXPORT:midiInGetID=_AheadLib_midiInGetID,@65")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=_AheadLib_midiInGetNumDevs,@66")
#pragma comment(linker, "/EXPORT:midiInMessage=_AheadLib_midiInMessage,@67")
#pragma comment(linker, "/EXPORT:midiInOpen=_AheadLib_midiInOpen,@68")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=_AheadLib_midiInPrepareHeader,@69")
#pragma comment(linker, "/EXPORT:midiInReset=_AheadLib_midiInReset,@70")
#pragma comment(linker, "/EXPORT:midiInStart=_AheadLib_midiInStart,@71")
#pragma comment(linker, "/EXPORT:midiInStop=_AheadLib_midiInStop,@72")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=_AheadLib_midiInUnprepareHeader,@73")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=_AheadLib_midiOutCacheDrumPatches,@74")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=_AheadLib_midiOutCachePatches,@75")
#pragma comment(linker, "/EXPORT:midiOutClose=_AheadLib_midiOutClose,@76")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=_AheadLib_midiOutGetDevCapsA,@77")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=_AheadLib_midiOutGetDevCapsW,@78")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=_AheadLib_midiOutGetErrorTextA,@79")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=_AheadLib_midiOutGetErrorTextW,@80")
#pragma comment(linker, "/EXPORT:midiOutGetID=_AheadLib_midiOutGetID,@81")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=_AheadLib_midiOutGetNumDevs,@82")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=_AheadLib_midiOutGetVolume,@83")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=_AheadLib_midiOutLongMsg,@84")
#pragma comment(linker, "/EXPORT:midiOutMessage=_AheadLib_midiOutMessage,@85")
#pragma comment(linker, "/EXPORT:midiOutOpen=_AheadLib_midiOutOpen,@86")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=_AheadLib_midiOutPrepareHeader,@87")
#pragma comment(linker, "/EXPORT:midiOutReset=_AheadLib_midiOutReset,@88")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=_AheadLib_midiOutSetVolume,@89")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=_AheadLib_midiOutShortMsg,@90")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=_AheadLib_midiOutUnprepareHeader,@91")
#pragma comment(linker, "/EXPORT:midiStreamClose=_AheadLib_midiStreamClose,@92")
#pragma comment(linker, "/EXPORT:midiStreamOpen=_AheadLib_midiStreamOpen,@93")
#pragma comment(linker, "/EXPORT:midiStreamOut=_AheadLib_midiStreamOut,@94")
#pragma comment(linker, "/EXPORT:midiStreamPause=_AheadLib_midiStreamPause,@95")
#pragma comment(linker, "/EXPORT:midiStreamPosition=_AheadLib_midiStreamPosition,@96")
#pragma comment(linker, "/EXPORT:midiStreamProperty=_AheadLib_midiStreamProperty,@97")
#pragma comment(linker, "/EXPORT:midiStreamRestart=_AheadLib_midiStreamRestart,@98")
#pragma comment(linker, "/EXPORT:midiStreamStop=_AheadLib_midiStreamStop,@99")
#pragma comment(linker, "/EXPORT:mixerClose=_AheadLib_mixerClose,@100")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=_AheadLib_mixerGetControlDetailsA,@101")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=_AheadLib_mixerGetControlDetailsW,@102")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=_AheadLib_mixerGetDevCapsA,@103")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=_AheadLib_mixerGetDevCapsW,@104")
#pragma comment(linker, "/EXPORT:mixerGetID=_AheadLib_mixerGetID,@105")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=_AheadLib_mixerGetLineControlsA,@106")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=_AheadLib_mixerGetLineControlsW,@107")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=_AheadLib_mixerGetLineInfoA,@108")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=_AheadLib_mixerGetLineInfoW,@109")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=_AheadLib_mixerGetNumDevs,@110")
#pragma comment(linker, "/EXPORT:mixerMessage=_AheadLib_mixerMessage,@111")
#pragma comment(linker, "/EXPORT:mixerOpen=_AheadLib_mixerOpen,@112")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=_AheadLib_mixerSetControlDetails,@113")
#pragma comment(linker, "/EXPORT:mmDrvInstall=_AheadLib_mmDrvInstall,@114")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=_AheadLib_mmGetCurrentTask,@115")
#pragma comment(linker, "/EXPORT:mmTaskBlock=_AheadLib_mmTaskBlock,@116")
#pragma comment(linker, "/EXPORT:mmTaskCreate=_AheadLib_mmTaskCreate,@117")
#pragma comment(linker, "/EXPORT:mmTaskSignal=_AheadLib_mmTaskSignal,@118")
#pragma comment(linker, "/EXPORT:mmTaskYield=_AheadLib_mmTaskYield,@119")
#pragma comment(linker, "/EXPORT:mmioAdvance=_AheadLib_mmioAdvance,@120")
#pragma comment(linker, "/EXPORT:mmioAscend=_AheadLib_mmioAscend,@121")
#pragma comment(linker, "/EXPORT:mmioClose=_AheadLib_mmioClose,@122")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=_AheadLib_mmioCreateChunk,@123")
#pragma comment(linker, "/EXPORT:mmioDescend=_AheadLib_mmioDescend,@124")
#pragma comment(linker, "/EXPORT:mmioFlush=_AheadLib_mmioFlush,@125")
#pragma comment(linker, "/EXPORT:mmioGetInfo=_AheadLib_mmioGetInfo,@126")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=_AheadLib_mmioInstallIOProcA,@127")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=_AheadLib_mmioInstallIOProcW,@128")
#pragma comment(linker, "/EXPORT:mmioOpenA=_AheadLib_mmioOpenA,@129")
#pragma comment(linker, "/EXPORT:mmioOpenW=_AheadLib_mmioOpenW,@130")
#pragma comment(linker, "/EXPORT:mmioRead=_AheadLib_mmioRead,@131")
#pragma comment(linker, "/EXPORT:mmioRenameA=_AheadLib_mmioRenameA,@132")
#pragma comment(linker, "/EXPORT:mmioRenameW=_AheadLib_mmioRenameW,@133")
#pragma comment(linker, "/EXPORT:mmioSeek=_AheadLib_mmioSeek,@134")
#pragma comment(linker, "/EXPORT:mmioSendMessage=_AheadLib_mmioSendMessage,@135")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=_AheadLib_mmioSetBuffer,@136")
#pragma comment(linker, "/EXPORT:mmioSetInfo=_AheadLib_mmioSetInfo,@137")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=_AheadLib_mmioStringToFOURCCA,@138")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=_AheadLib_mmioStringToFOURCCW,@139")
#pragma comment(linker, "/EXPORT:mmioWrite=_AheadLib_mmioWrite,@140")
#pragma comment(linker, "/EXPORT:mmsystemGetVersion=_AheadLib_mmsystemGetVersion,@141")
#pragma comment(linker, "/EXPORT:mod32Message=_AheadLib_mod32Message,@142")
#pragma comment(linker, "/EXPORT:mxd32Message=_AheadLib_mxd32Message,@143")
#pragma comment(linker, "/EXPORT:sndPlaySoundA=_AheadLib_sndPlaySoundA,@144")
#pragma comment(linker, "/EXPORT:sndPlaySoundW=_AheadLib_sndPlaySoundW,@145")
#pragma comment(linker, "/EXPORT:tid32Message=_AheadLib_tid32Message,@146")
#pragma comment(linker, "/EXPORT:timeBeginPeriod=_AheadLib_timeBeginPeriod,@147")
#pragma comment(linker, "/EXPORT:timeEndPeriod=_AheadLib_timeEndPeriod,@148")
#pragma comment(linker, "/EXPORT:timeGetDevCaps=_AheadLib_timeGetDevCaps,@149")
#pragma comment(linker, "/EXPORT:timeGetSystemTime=_AheadLib_timeGetSystemTime,@150")
#pragma comment(linker, "/EXPORT:timeGetTime=_AheadLib_timeGetTime,@151")
#pragma comment(linker, "/EXPORT:timeKillEvent=_AheadLib_timeKillEvent,@152")
#pragma comment(linker, "/EXPORT:timeSetEvent=_AheadLib_timeSetEvent,@153")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=_AheadLib_waveInAddBuffer,@154")
#pragma comment(linker, "/EXPORT:waveInClose=_AheadLib_waveInClose,@155")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=_AheadLib_waveInGetDevCapsA,@156")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=_AheadLib_waveInGetDevCapsW,@157")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=_AheadLib_waveInGetErrorTextA,@158")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=_AheadLib_waveInGetErrorTextW,@159")
#pragma comment(linker, "/EXPORT:waveInGetID=_AheadLib_waveInGetID,@160")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=_AheadLib_waveInGetNumDevs,@161")
#pragma comment(linker, "/EXPORT:waveInGetPosition=_AheadLib_waveInGetPosition,@162")
#pragma comment(linker, "/EXPORT:waveInMessage=_AheadLib_waveInMessage,@163")
#pragma comment(linker, "/EXPORT:waveInOpen=_AheadLib_waveInOpen,@164")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=_AheadLib_waveInPrepareHeader,@165")
#pragma comment(linker, "/EXPORT:waveInReset=_AheadLib_waveInReset,@166")
#pragma comment(linker, "/EXPORT:waveInStart=_AheadLib_waveInStart,@167")
#pragma comment(linker, "/EXPORT:waveInStop=_AheadLib_waveInStop,@168")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=_AheadLib_waveInUnprepareHeader,@169")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=_AheadLib_waveOutBreakLoop,@170")
#pragma comment(linker, "/EXPORT:waveOutClose=_AheadLib_waveOutClose,@171")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=_AheadLib_waveOutGetDevCapsA,@172")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=_AheadLib_waveOutGetDevCapsW,@173")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=_AheadLib_waveOutGetErrorTextA,@174")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=_AheadLib_waveOutGetErrorTextW,@175")
#pragma comment(linker, "/EXPORT:waveOutGetID=_AheadLib_waveOutGetID,@176")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=_AheadLib_waveOutGetNumDevs,@177")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=_AheadLib_waveOutGetPitch,@178")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=_AheadLib_waveOutGetPlaybackRate,@179")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=_AheadLib_waveOutGetPosition,@180")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=_AheadLib_waveOutGetVolume,@181")
#pragma comment(linker, "/EXPORT:waveOutMessage=_AheadLib_waveOutMessage,@182")
#pragma comment(linker, "/EXPORT:waveOutOpen=_AheadLib_waveOutOpen,@183")
#pragma comment(linker, "/EXPORT:waveOutPause=_AheadLib_waveOutPause,@184")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=_AheadLib_waveOutPrepareHeader,@185")
#pragma comment(linker, "/EXPORT:waveOutReset=_AheadLib_waveOutReset,@186")
#pragma comment(linker, "/EXPORT:waveOutRestart=_AheadLib_waveOutRestart,@187")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=_AheadLib_waveOutSetPitch,@188")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=_AheadLib_waveOutSetPlaybackRate,@189")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=_AheadLib_waveOutSetVolume,@190")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=_AheadLib_waveOutUnprepareHeader,@191")
#pragma comment(linker, "/EXPORT:waveOutWrite=_AheadLib_waveOutWrite,@192")
#pragma comment(linker, "/EXPORT:wid32Message=_AheadLib_wid32Message,@193")
#pragma comment(linker, "/EXPORT:wod32Message=_AheadLib_wod32Message,@194")
#include <winnt.h>


PVOID fAheadLib_Unnamed2;
PVOID fAheadLib_mciExecute;
PVOID fAheadLib_CloseDriver;
PVOID fAheadLib_DefDriverProc;
PVOID fAheadLib_DriverCallback;
PVOID fAheadLib_DrvGetModuleHandle;
PVOID fAheadLib_GetDriverModuleHandle;
PVOID fAheadLib_NotifyCallbackData;
PVOID fAheadLib_OpenDriver;
PVOID fAheadLib_PlaySound;
PVOID fAheadLib_PlaySoundA;
PVOID fAheadLib_PlaySoundW;
PVOID fAheadLib_SendDriverMessage;
PVOID fAheadLib_WOW32DriverCallback;
PVOID fAheadLib_WOW32ResolveMultiMediaHandle;
PVOID fAheadLib_WOWAppExit;
PVOID fAheadLib_aux32Message;
PVOID fAheadLib_auxGetDevCapsA;
PVOID fAheadLib_auxGetDevCapsW;
PVOID fAheadLib_auxGetNumDevs;
PVOID fAheadLib_auxGetVolume;
PVOID fAheadLib_auxOutMessage;
PVOID fAheadLib_auxSetVolume;
PVOID fAheadLib_joy32Message;
PVOID fAheadLib_joyConfigChanged;
PVOID fAheadLib_joyGetDevCapsA;
PVOID fAheadLib_joyGetDevCapsW;
PVOID fAheadLib_joyGetNumDevs;
PVOID fAheadLib_joyGetPos;
PVOID fAheadLib_joyGetPosEx;
PVOID fAheadLib_joyGetThreshold;
PVOID fAheadLib_joyReleaseCapture;
PVOID fAheadLib_joySetCapture;
PVOID fAheadLib_joySetThreshold;
PVOID fAheadLib_mci32Message;
PVOID fAheadLib_mciDriverNotify;
PVOID fAheadLib_mciDriverYield;
PVOID fAheadLib_mciFreeCommandResource;
PVOID fAheadLib_mciGetCreatorTask;
PVOID fAheadLib_mciGetDeviceIDA;
PVOID fAheadLib_mciGetDeviceIDFromElementIDA;
PVOID fAheadLib_mciGetDeviceIDFromElementIDW;
PVOID fAheadLib_mciGetDeviceIDW;
PVOID fAheadLib_mciGetDriverData;
PVOID fAheadLib_mciGetErrorStringA;
PVOID fAheadLib_mciGetErrorStringW;
PVOID fAheadLib_mciGetYieldProc;
PVOID fAheadLib_mciLoadCommandResource;
PVOID fAheadLib_mciSendCommandA;
PVOID fAheadLib_mciSendCommandW;
PVOID fAheadLib_mciSendStringA;
PVOID fAheadLib_mciSendStringW;
PVOID fAheadLib_mciSetDriverData;
PVOID fAheadLib_mciSetYieldProc;
PVOID fAheadLib_mid32Message;
PVOID fAheadLib_midiConnect;
PVOID fAheadLib_midiDisconnect;
PVOID fAheadLib_midiInAddBuffer;
PVOID fAheadLib_midiInClose;
PVOID fAheadLib_midiInGetDevCapsA;
PVOID fAheadLib_midiInGetDevCapsW;
PVOID fAheadLib_midiInGetErrorTextA;
PVOID fAheadLib_midiInGetErrorTextW;
PVOID fAheadLib_midiInGetID;
PVOID fAheadLib_midiInGetNumDevs;
PVOID fAheadLib_midiInMessage;
PVOID fAheadLib_midiInOpen;
PVOID fAheadLib_midiInPrepareHeader;
PVOID fAheadLib_midiInReset;
PVOID fAheadLib_midiInStart;
PVOID fAheadLib_midiInStop;
PVOID fAheadLib_midiInUnprepareHeader;
PVOID fAheadLib_midiOutCacheDrumPatches;
PVOID fAheadLib_midiOutCachePatches;
PVOID fAheadLib_midiOutClose;
PVOID fAheadLib_midiOutGetDevCapsA;
PVOID fAheadLib_midiOutGetDevCapsW;
PVOID fAheadLib_midiOutGetErrorTextA;
PVOID fAheadLib_midiOutGetErrorTextW;
PVOID fAheadLib_midiOutGetID;
PVOID fAheadLib_midiOutGetNumDevs;
PVOID fAheadLib_midiOutGetVolume;
PVOID fAheadLib_midiOutLongMsg;
PVOID fAheadLib_midiOutMessage;
PVOID fAheadLib_midiOutOpen;
PVOID fAheadLib_midiOutPrepareHeader;
PVOID fAheadLib_midiOutReset;
PVOID fAheadLib_midiOutSetVolume;
PVOID fAheadLib_midiOutShortMsg;
PVOID fAheadLib_midiOutUnprepareHeader;
PVOID fAheadLib_midiStreamClose;
PVOID fAheadLib_midiStreamOpen;
PVOID fAheadLib_midiStreamOut;
PVOID fAheadLib_midiStreamPause;
PVOID fAheadLib_midiStreamPosition;
PVOID fAheadLib_midiStreamProperty;
PVOID fAheadLib_midiStreamRestart;
PVOID fAheadLib_midiStreamStop;
PVOID fAheadLib_mixerClose;
PVOID fAheadLib_mixerGetControlDetailsA;
PVOID fAheadLib_mixerGetControlDetailsW;
PVOID fAheadLib_mixerGetDevCapsA;
PVOID fAheadLib_mixerGetDevCapsW;
PVOID fAheadLib_mixerGetID;
PVOID fAheadLib_mixerGetLineControlsA;
PVOID fAheadLib_mixerGetLineControlsW;
PVOID fAheadLib_mixerGetLineInfoA;
PVOID fAheadLib_mixerGetLineInfoW;
PVOID fAheadLib_mixerGetNumDevs;
PVOID fAheadLib_mixerMessage;
PVOID fAheadLib_mixerOpen;
PVOID fAheadLib_mixerSetControlDetails;
PVOID fAheadLib_mmDrvInstall;
PVOID fAheadLib_mmGetCurrentTask;
PVOID fAheadLib_mmTaskBlock;
PVOID fAheadLib_mmTaskCreate;
PVOID fAheadLib_mmTaskSignal;
PVOID fAheadLib_mmTaskYield;
PVOID fAheadLib_mmioAdvance;
PVOID fAheadLib_mmioAscend;
PVOID fAheadLib_mmioClose;
PVOID fAheadLib_mmioCreateChunk;
PVOID fAheadLib_mmioDescend;
PVOID fAheadLib_mmioFlush;
PVOID fAheadLib_mmioGetInfo;
PVOID fAheadLib_mmioInstallIOProcA;
PVOID fAheadLib_mmioInstallIOProcW;
PVOID fAheadLib_mmioOpenA;
PVOID fAheadLib_mmioOpenW;
PVOID fAheadLib_mmioRead;
PVOID fAheadLib_mmioRenameA;
PVOID fAheadLib_mmioRenameW;
PVOID fAheadLib_mmioSeek;
PVOID fAheadLib_mmioSendMessage;
PVOID fAheadLib_mmioSetBuffer;
PVOID fAheadLib_mmioSetInfo;
PVOID fAheadLib_mmioStringToFOURCCA;
PVOID fAheadLib_mmioStringToFOURCCW;
PVOID fAheadLib_mmioWrite;
PVOID fAheadLib_mmsystemGetVersion;
PVOID fAheadLib_mod32Message;
PVOID fAheadLib_mxd32Message;
PVOID fAheadLib_sndPlaySoundA;
PVOID fAheadLib_sndPlaySoundW;
PVOID fAheadLib_tid32Message;
PVOID fAheadLib_timeBeginPeriod;
PVOID fAheadLib_timeEndPeriod;
PVOID fAheadLib_timeGetDevCaps;
PVOID fAheadLib_timeGetSystemTime;
PVOID fAheadLib_timeGetTime;
PVOID fAheadLib_timeKillEvent;
PVOID fAheadLib_timeSetEvent;
PVOID fAheadLib_waveInAddBuffer;
PVOID fAheadLib_waveInClose;
PVOID fAheadLib_waveInGetDevCapsA;
PVOID fAheadLib_waveInGetDevCapsW;
PVOID fAheadLib_waveInGetErrorTextA;
PVOID fAheadLib_waveInGetErrorTextW;
PVOID fAheadLib_waveInGetID;
PVOID fAheadLib_waveInGetNumDevs;
PVOID fAheadLib_waveInGetPosition;
PVOID fAheadLib_waveInMessage;
PVOID fAheadLib_waveInOpen;
PVOID fAheadLib_waveInPrepareHeader;
PVOID fAheadLib_waveInReset;
PVOID fAheadLib_waveInStart;
PVOID fAheadLib_waveInStop;
PVOID fAheadLib_waveInUnprepareHeader;
PVOID fAheadLib_waveOutBreakLoop;
PVOID fAheadLib_waveOutClose;
PVOID fAheadLib_waveOutGetDevCapsA;
PVOID fAheadLib_waveOutGetDevCapsW;
PVOID fAheadLib_waveOutGetErrorTextA;
PVOID fAheadLib_waveOutGetErrorTextW;
PVOID fAheadLib_waveOutGetID;
PVOID fAheadLib_waveOutGetNumDevs;
PVOID fAheadLib_waveOutGetPitch;
PVOID fAheadLib_waveOutGetPlaybackRate;
PVOID fAheadLib_waveOutGetPosition;
PVOID fAheadLib_waveOutGetVolume;
PVOID fAheadLib_waveOutMessage;
PVOID fAheadLib_waveOutOpen;
PVOID fAheadLib_waveOutPause;
PVOID fAheadLib_waveOutPrepareHeader;
PVOID fAheadLib_waveOutReset;
PVOID fAheadLib_waveOutRestart;
PVOID fAheadLib_waveOutSetPitch;
PVOID fAheadLib_waveOutSetPlaybackRate;
PVOID fAheadLib_waveOutSetVolume;
PVOID fAheadLib_waveOutUnprepareHeader;
PVOID fAheadLib_waveOutWrite;
PVOID fAheadLib_wid32Message;
PVOID fAheadLib_wod32Message;

static HMODULE g_OldModule = NULL;

FARPROC WINAPI GetAddress(PCSTR pszProcName)
{
	FARPROC fpAddress;
	CHAR szProcName[64];
	TCHAR tzTemp[MAX_PATH];

	fpAddress = GetProcAddress(g_OldModule, pszProcName);
	if (fpAddress == NULL) {
		if (HIWORD(pszProcName) == 0) {
			wsprintfA(szProcName, "#%d", pszProcName);
			pszProcName = szProcName;
		}
		ExitProcess(-1);
	}
	return fpAddress;
}

BOOL WINAPI Init()
{
	TCHAR tzPath[MAX_PATH];
	TCHAR tzTemp[MAX_PATH * 2];

	GetSystemDirectory(tzPath, MAX_PATH);
	lstrcat(tzPath, TEXT("\\winmm.dll"));

	g_OldModule = LoadLibrary(tzPath);

	fAheadLib_Unnamed2 = GetAddress(MAKEINTRESOURCEA(2));
	fAheadLib_mciExecute = GetAddress("mciExecute");
	fAheadLib_CloseDriver = GetAddress("CloseDriver");
	fAheadLib_DefDriverProc = GetAddress("DefDriverProc");
	fAheadLib_DriverCallback = GetAddress("DriverCallback");
	fAheadLib_DrvGetModuleHandle = GetAddress("DrvGetModuleHandle");
	fAheadLib_GetDriverModuleHandle = GetAddress("GetDriverModuleHandle");
	fAheadLib_NotifyCallbackData = GetAddress("NotifyCallbackData");
	fAheadLib_OpenDriver = GetAddress("OpenDriver");
	fAheadLib_PlaySound = GetAddress("PlaySound");
	fAheadLib_PlaySoundA = GetAddress("PlaySoundA");
	fAheadLib_PlaySoundW = GetAddress("PlaySoundW");
	fAheadLib_SendDriverMessage = GetAddress("SendDriverMessage");
	fAheadLib_WOW32DriverCallback = GetAddress("WOW32DriverCallback");
	fAheadLib_WOW32ResolveMultiMediaHandle = GetAddress("WOW32ResolveMultiMediaHandle");
	fAheadLib_WOWAppExit = GetAddress("WOWAppExit");
	fAheadLib_aux32Message = GetAddress("aux32Message");
	fAheadLib_auxGetDevCapsA = GetAddress("auxGetDevCapsA");
	fAheadLib_auxGetDevCapsW = GetAddress("auxGetDevCapsW");
	fAheadLib_auxGetNumDevs = GetAddress("auxGetNumDevs");
	fAheadLib_auxGetVolume = GetAddress("auxGetVolume");
	fAheadLib_auxOutMessage = GetAddress("auxOutMessage");
	fAheadLib_auxSetVolume = GetAddress("auxSetVolume");
	fAheadLib_joy32Message = GetAddress("joy32Message");
	fAheadLib_joyConfigChanged = GetAddress("joyConfigChanged");
	fAheadLib_joyGetDevCapsA = GetAddress("joyGetDevCapsA");
	fAheadLib_joyGetDevCapsW = GetAddress("joyGetDevCapsW");
	fAheadLib_joyGetNumDevs = GetAddress("joyGetNumDevs");
	fAheadLib_joyGetPos = GetAddress("joyGetPos");
	fAheadLib_joyGetPosEx = GetAddress("joyGetPosEx");
	fAheadLib_joyGetThreshold = GetAddress("joyGetThreshold");
	fAheadLib_joyReleaseCapture = GetAddress("joyReleaseCapture");
	fAheadLib_joySetCapture = GetAddress("joySetCapture");
	fAheadLib_joySetThreshold = GetAddress("joySetThreshold");
	fAheadLib_mci32Message = GetAddress("mci32Message");
	fAheadLib_mciDriverNotify = GetAddress("mciDriverNotify");
	fAheadLib_mciDriverYield = GetAddress("mciDriverYield");
	fAheadLib_mciFreeCommandResource = GetAddress("mciFreeCommandResource");
	fAheadLib_mciGetCreatorTask = GetAddress("mciGetCreatorTask");
	fAheadLib_mciGetDeviceIDA = GetAddress("mciGetDeviceIDA");
	fAheadLib_mciGetDeviceIDFromElementIDA = GetAddress("mciGetDeviceIDFromElementIDA");
	fAheadLib_mciGetDeviceIDFromElementIDW = GetAddress("mciGetDeviceIDFromElementIDW");
	fAheadLib_mciGetDeviceIDW = GetAddress("mciGetDeviceIDW");
	fAheadLib_mciGetDriverData = GetAddress("mciGetDriverData");
	fAheadLib_mciGetErrorStringA = GetAddress("mciGetErrorStringA");
	fAheadLib_mciGetErrorStringW = GetAddress("mciGetErrorStringW");
	fAheadLib_mciGetYieldProc = GetAddress("mciGetYieldProc");
	fAheadLib_mciLoadCommandResource = GetAddress("mciLoadCommandResource");
	fAheadLib_mciSendCommandA = GetAddress("mciSendCommandA");
	fAheadLib_mciSendCommandW = GetAddress("mciSendCommandW");
	fAheadLib_mciSendStringA = GetAddress("mciSendStringA");
	fAheadLib_mciSendStringW = GetAddress("mciSendStringW");
	fAheadLib_mciSetDriverData = GetAddress("mciSetDriverData");
	fAheadLib_mciSetYieldProc = GetAddress("mciSetYieldProc");
	fAheadLib_mid32Message = GetAddress("mid32Message");
	fAheadLib_midiConnect = GetAddress("midiConnect");
	fAheadLib_midiDisconnect = GetAddress("midiDisconnect");
	fAheadLib_midiInAddBuffer = GetAddress("midiInAddBuffer");
	fAheadLib_midiInClose = GetAddress("midiInClose");
	fAheadLib_midiInGetDevCapsA = GetAddress("midiInGetDevCapsA");
	fAheadLib_midiInGetDevCapsW = GetAddress("midiInGetDevCapsW");
	fAheadLib_midiInGetErrorTextA = GetAddress("midiInGetErrorTextA");
	fAheadLib_midiInGetErrorTextW = GetAddress("midiInGetErrorTextW");
	fAheadLib_midiInGetID = GetAddress("midiInGetID");
	fAheadLib_midiInGetNumDevs = GetAddress("midiInGetNumDevs");
	fAheadLib_midiInMessage = GetAddress("midiInMessage");
	fAheadLib_midiInOpen = GetAddress("midiInOpen");
	fAheadLib_midiInPrepareHeader = GetAddress("midiInPrepareHeader");
	fAheadLib_midiInReset = GetAddress("midiInReset");
	fAheadLib_midiInStart = GetAddress("midiInStart");
	fAheadLib_midiInStop = GetAddress("midiInStop");
	fAheadLib_midiInUnprepareHeader = GetAddress("midiInUnprepareHeader");
	fAheadLib_midiOutCacheDrumPatches = GetAddress("midiOutCacheDrumPatches");
	fAheadLib_midiOutCachePatches = GetAddress("midiOutCachePatches");
	fAheadLib_midiOutClose = GetAddress("midiOutClose");
	fAheadLib_midiOutGetDevCapsA = GetAddress("midiOutGetDevCapsA");
	fAheadLib_midiOutGetDevCapsW = GetAddress("midiOutGetDevCapsW");
	fAheadLib_midiOutGetErrorTextA = GetAddress("midiOutGetErrorTextA");
	fAheadLib_midiOutGetErrorTextW = GetAddress("midiOutGetErrorTextW");
	fAheadLib_midiOutGetID = GetAddress("midiOutGetID");
	fAheadLib_midiOutGetNumDevs = GetAddress("midiOutGetNumDevs");
	fAheadLib_midiOutGetVolume = GetAddress("midiOutGetVolume");
	fAheadLib_midiOutLongMsg = GetAddress("midiOutLongMsg");
	fAheadLib_midiOutMessage = GetAddress("midiOutMessage");
	fAheadLib_midiOutOpen = GetAddress("midiOutOpen");
	fAheadLib_midiOutPrepareHeader = GetAddress("midiOutPrepareHeader");
	fAheadLib_midiOutReset = GetAddress("midiOutReset");
	fAheadLib_midiOutSetVolume = GetAddress("midiOutSetVolume");
	fAheadLib_midiOutShortMsg = GetAddress("midiOutShortMsg");
	fAheadLib_midiOutUnprepareHeader = GetAddress("midiOutUnprepareHeader");
	fAheadLib_midiStreamClose = GetAddress("midiStreamClose");
	fAheadLib_midiStreamOpen = GetAddress("midiStreamOpen");
	fAheadLib_midiStreamOut = GetAddress("midiStreamOut");
	fAheadLib_midiStreamPause = GetAddress("midiStreamPause");
	fAheadLib_midiStreamPosition = GetAddress("midiStreamPosition");
	fAheadLib_midiStreamProperty = GetAddress("midiStreamProperty");
	fAheadLib_midiStreamRestart = GetAddress("midiStreamRestart");
	fAheadLib_midiStreamStop = GetAddress("midiStreamStop");
	fAheadLib_mixerClose = GetAddress("mixerClose");
	fAheadLib_mixerGetControlDetailsA = GetAddress("mixerGetControlDetailsA");
	fAheadLib_mixerGetControlDetailsW = GetAddress("mixerGetControlDetailsW");
	fAheadLib_mixerGetDevCapsA = GetAddress("mixerGetDevCapsA");
	fAheadLib_mixerGetDevCapsW = GetAddress("mixerGetDevCapsW");
	fAheadLib_mixerGetID = GetAddress("mixerGetID");
	fAheadLib_mixerGetLineControlsA = GetAddress("mixerGetLineControlsA");
	fAheadLib_mixerGetLineControlsW = GetAddress("mixerGetLineControlsW");
	fAheadLib_mixerGetLineInfoA = GetAddress("mixerGetLineInfoA");
	fAheadLib_mixerGetLineInfoW = GetAddress("mixerGetLineInfoW");
	fAheadLib_mixerGetNumDevs = GetAddress("mixerGetNumDevs");
	fAheadLib_mixerMessage = GetAddress("mixerMessage");
	fAheadLib_mixerOpen = GetAddress("mixerOpen");
	fAheadLib_mixerSetControlDetails = GetAddress("mixerSetControlDetails");
	fAheadLib_mmDrvInstall = GetAddress("mmDrvInstall");
	fAheadLib_mmGetCurrentTask = GetAddress("mmGetCurrentTask");
	fAheadLib_mmTaskBlock = GetAddress("mmTaskBlock");
	fAheadLib_mmTaskCreate = GetAddress("mmTaskCreate");
	fAheadLib_mmTaskSignal = GetAddress("mmTaskSignal");
	fAheadLib_mmTaskYield = GetAddress("mmTaskYield");
	fAheadLib_mmioAdvance = GetAddress("mmioAdvance");
	fAheadLib_mmioAscend = GetAddress("mmioAscend");
	fAheadLib_mmioClose = GetAddress("mmioClose");
	fAheadLib_mmioCreateChunk = GetAddress("mmioCreateChunk");
	fAheadLib_mmioDescend = GetAddress("mmioDescend");
	fAheadLib_mmioFlush = GetAddress("mmioFlush");
	fAheadLib_mmioGetInfo = GetAddress("mmioGetInfo");
	fAheadLib_mmioInstallIOProcA = GetAddress("mmioInstallIOProcA");
	fAheadLib_mmioInstallIOProcW = GetAddress("mmioInstallIOProcW");
	fAheadLib_mmioOpenA = GetAddress("mmioOpenA");
	fAheadLib_mmioOpenW = GetAddress("mmioOpenW");
	fAheadLib_mmioRead = GetAddress("mmioRead");
	fAheadLib_mmioRenameA = GetAddress("mmioRenameA");
	fAheadLib_mmioRenameW = GetAddress("mmioRenameW");
	fAheadLib_mmioSeek = GetAddress("mmioSeek");
	fAheadLib_mmioSendMessage = GetAddress("mmioSendMessage");
	fAheadLib_mmioSetBuffer = GetAddress("mmioSetBuffer");
	fAheadLib_mmioSetInfo = GetAddress("mmioSetInfo");
	fAheadLib_mmioStringToFOURCCA = GetAddress("mmioStringToFOURCCA");
	fAheadLib_mmioStringToFOURCCW = GetAddress("mmioStringToFOURCCW");
	fAheadLib_mmioWrite = GetAddress("mmioWrite");
	fAheadLib_mmsystemGetVersion = GetAddress("mmsystemGetVersion");
	fAheadLib_mod32Message = GetAddress("mod32Message");
	fAheadLib_mxd32Message = GetAddress("mxd32Message");
	fAheadLib_sndPlaySoundA = GetAddress("sndPlaySoundA");
	fAheadLib_sndPlaySoundW = GetAddress("sndPlaySoundW");
	fAheadLib_tid32Message = GetAddress("tid32Message");
	fAheadLib_timeBeginPeriod = GetAddress("timeBeginPeriod");
	fAheadLib_timeEndPeriod = GetAddress("timeEndPeriod");
	fAheadLib_timeGetDevCaps = GetAddress("timeGetDevCaps");
	fAheadLib_timeGetSystemTime = GetAddress("timeGetSystemTime");
	fAheadLib_timeGetTime = GetAddress("timeGetTime");
	fAheadLib_timeKillEvent = GetAddress("timeKillEvent");
	fAheadLib_timeSetEvent = GetAddress("timeSetEvent");
	fAheadLib_waveInAddBuffer = GetAddress("waveInAddBuffer");
	fAheadLib_waveInClose = GetAddress("waveInClose");
	fAheadLib_waveInGetDevCapsA = GetAddress("waveInGetDevCapsA");
	fAheadLib_waveInGetDevCapsW = GetAddress("waveInGetDevCapsW");
	fAheadLib_waveInGetErrorTextA = GetAddress("waveInGetErrorTextA");
	fAheadLib_waveInGetErrorTextW = GetAddress("waveInGetErrorTextW");
	fAheadLib_waveInGetID = GetAddress("waveInGetID");
	fAheadLib_waveInGetNumDevs = GetAddress("waveInGetNumDevs");
	fAheadLib_waveInGetPosition = GetAddress("waveInGetPosition");
	fAheadLib_waveInMessage = GetAddress("waveInMessage");
	fAheadLib_waveInOpen = GetAddress("waveInOpen");
	fAheadLib_waveInPrepareHeader = GetAddress("waveInPrepareHeader");
	fAheadLib_waveInReset = GetAddress("waveInReset");
	fAheadLib_waveInStart = GetAddress("waveInStart");
	fAheadLib_waveInStop = GetAddress("waveInStop");
	fAheadLib_waveInUnprepareHeader = GetAddress("waveInUnprepareHeader");
	fAheadLib_waveOutBreakLoop = GetAddress("waveOutBreakLoop");
	fAheadLib_waveOutClose = GetAddress("waveOutClose");
	fAheadLib_waveOutGetDevCapsA = GetAddress("waveOutGetDevCapsA");
	fAheadLib_waveOutGetDevCapsW = GetAddress("waveOutGetDevCapsW");
	fAheadLib_waveOutGetErrorTextA = GetAddress("waveOutGetErrorTextA");
	fAheadLib_waveOutGetErrorTextW = GetAddress("waveOutGetErrorTextW");
	fAheadLib_waveOutGetID = GetAddress("waveOutGetID");
	fAheadLib_waveOutGetNumDevs = GetAddress("waveOutGetNumDevs");
	fAheadLib_waveOutGetPitch = GetAddress("waveOutGetPitch");
	fAheadLib_waveOutGetPlaybackRate = GetAddress("waveOutGetPlaybackRate");
	fAheadLib_waveOutGetPosition = GetAddress("waveOutGetPosition");
	fAheadLib_waveOutGetVolume = GetAddress("waveOutGetVolume");
	fAheadLib_waveOutMessage = GetAddress("waveOutMessage");
	fAheadLib_waveOutOpen = GetAddress("waveOutOpen");
	fAheadLib_waveOutPause = GetAddress("waveOutPause");
	fAheadLib_waveOutPrepareHeader = GetAddress("waveOutPrepareHeader");
	fAheadLib_waveOutReset = GetAddress("waveOutReset");
	fAheadLib_waveOutRestart = GetAddress("waveOutRestart");
	fAheadLib_waveOutSetPitch = GetAddress("waveOutSetPitch");
	fAheadLib_waveOutSetPlaybackRate = GetAddress("waveOutSetPlaybackRate");
	fAheadLib_waveOutSetVolume = GetAddress("waveOutSetVolume");
	fAheadLib_waveOutUnprepareHeader = GetAddress("waveOutUnprepareHeader");
	fAheadLib_waveOutWrite = GetAddress("waveOutWrite");
	fAheadLib_wid32Message = GetAddress("wid32Message");
	fAheadLib_wod32Message = GetAddress("wod32Message");
	return (g_OldModule != NULL);
	
}

extern "C"  __declspec(naked) void __cdecl AheadLib_Unnamed2(void)
{
	__asm jmp fAheadLib_Unnamed2; 
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciExecute(void)
{
	__asm jmp fAheadLib_mciExecute;
}

extern "C" __declspec(naked) void __cdecl AheadLib_CloseDriver(void)
{
	__asm jmp fAheadLib_CloseDriver;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DefDriverProc(void)
{
	__asm jmp fAheadLib_DefDriverProc;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DriverCallback(void)
{
	__asm jmp fAheadLib_DriverCallback;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DrvGetModuleHandle(void)
{
	__asm jmp fAheadLib_DrvGetModuleHandle;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetDriverModuleHandle(void)
{
	__asm jmp fAheadLib_GetDriverModuleHandle;
}

extern "C" __declspec(naked) void __cdecl AheadLib_NotifyCallbackData(void)
{
	__asm jmp fAheadLib_NotifyCallbackData;
}

extern "C" __declspec(naked) void __cdecl AheadLib_OpenDriver(void)
{
	__asm jmp fAheadLib_OpenDriver;
}

extern "C" __declspec(naked) void __cdecl AheadLib_PlaySound(void)
{
	__asm jmp fAheadLib_PlaySound;
}

extern "C" __declspec(naked) void __cdecl AheadLib_PlaySoundA(void)
{
	__asm jmp fAheadLib_PlaySoundA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_PlaySoundW(void)
{
	__asm jmp fAheadLib_PlaySoundW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_SendDriverMessage(void)
{
	__asm jmp fAheadLib_SendDriverMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_WOW32DriverCallback(void)
{
	__asm jmp fAheadLib_WOW32DriverCallback;
}

extern "C" __declspec(naked) void __cdecl AheadLib_WOW32ResolveMultiMediaHandle(void)
{
	__asm jmp fAheadLib_WOW32ResolveMultiMediaHandle;
}

extern "C" __declspec(naked) void __cdecl AheadLib_WOWAppExit(void)
{
	__asm jmp fAheadLib_WOWAppExit;
}

extern "C" __declspec(naked) void __cdecl AheadLib_aux32Message(void)
{
	__asm jmp fAheadLib_aux32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxGetDevCapsA(void)
{
	__asm jmp fAheadLib_auxGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxGetDevCapsW(void)
{
	__asm jmp fAheadLib_auxGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxGetNumDevs(void)
{
	__asm jmp fAheadLib_auxGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxGetVolume(void)
{
	__asm jmp fAheadLib_auxGetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxOutMessage(void)
{
	__asm jmp fAheadLib_auxOutMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_auxSetVolume(void)
{
	__asm jmp fAheadLib_auxSetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joy32Message(void)
{
	__asm jmp fAheadLib_joy32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyConfigChanged(void)
{
	__asm jmp fAheadLib_joyConfigChanged;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetDevCapsA(void)
{
	__asm jmp fAheadLib_joyGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetDevCapsW(void)
{
	__asm jmp fAheadLib_joyGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetNumDevs(void)
{
	__asm jmp fAheadLib_joyGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetPos(void)
{
	__asm jmp fAheadLib_joyGetPos;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetPosEx(void)
{
	__asm jmp fAheadLib_joyGetPosEx;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyGetThreshold(void)
{
	__asm jmp fAheadLib_joyGetThreshold;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joyReleaseCapture(void)
{
	__asm jmp fAheadLib_joyReleaseCapture;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joySetCapture(void)
{
	__asm jmp fAheadLib_joySetCapture;
}

extern "C" __declspec(naked) void __cdecl AheadLib_joySetThreshold(void)
{
	__asm jmp fAheadLib_joySetThreshold;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mci32Message(void)
{
	__asm jmp fAheadLib_mci32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciDriverNotify(void)
{
	__asm jmp fAheadLib_mciDriverNotify;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciDriverYield(void)
{
	__asm jmp fAheadLib_mciDriverYield;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciFreeCommandResource(void)
{
	__asm jmp fAheadLib_mciFreeCommandResource;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetCreatorTask(void)
{
	__asm jmp fAheadLib_mciGetCreatorTask;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetDeviceIDA(void)
{
	__asm jmp fAheadLib_mciGetDeviceIDA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetDeviceIDFromElementIDA(void)
{
	__asm jmp fAheadLib_mciGetDeviceIDFromElementIDA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetDeviceIDFromElementIDW(void)
{
	__asm jmp fAheadLib_mciGetDeviceIDFromElementIDW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetDeviceIDW(void)
{
	__asm jmp fAheadLib_mciGetDeviceIDW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetDriverData(void)
{
	__asm jmp fAheadLib_mciGetDriverData;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetErrorStringA(void)
{
	__asm jmp fAheadLib_mciGetErrorStringA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetErrorStringW(void)
{
	__asm jmp fAheadLib_mciGetErrorStringW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciGetYieldProc(void)
{
	__asm jmp fAheadLib_mciGetYieldProc;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciLoadCommandResource(void)
{
	__asm jmp fAheadLib_mciLoadCommandResource;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSendCommandA(void)
{
	__asm jmp fAheadLib_mciSendCommandA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSendCommandW(void)
{
	__asm jmp fAheadLib_mciSendCommandW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSendStringA(void)
{
	__asm jmp fAheadLib_mciSendStringA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSendStringW(void)
{
	__asm jmp fAheadLib_mciSendStringW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSetDriverData(void)
{
	__asm jmp fAheadLib_mciSetDriverData;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mciSetYieldProc(void)
{
	__asm jmp fAheadLib_mciSetYieldProc;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mid32Message(void)
{
	__asm jmp fAheadLib_mid32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiConnect(void)
{
	__asm jmp fAheadLib_midiConnect;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiDisconnect(void)
{
	__asm jmp fAheadLib_midiDisconnect;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInAddBuffer(void)
{
	__asm jmp fAheadLib_midiInAddBuffer;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInClose(void)
{
	__asm jmp fAheadLib_midiInClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetDevCapsA(void)
{
	__asm jmp fAheadLib_midiInGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetDevCapsW(void)
{
	__asm jmp fAheadLib_midiInGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetErrorTextA(void)
{
	__asm jmp fAheadLib_midiInGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetErrorTextW(void)
{
	__asm jmp fAheadLib_midiInGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetID(void)
{
	__asm jmp fAheadLib_midiInGetID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInGetNumDevs(void)
{
	__asm jmp fAheadLib_midiInGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInMessage(void)
{
	__asm jmp fAheadLib_midiInMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInOpen(void)
{
	__asm jmp fAheadLib_midiInOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInPrepareHeader(void)
{
	__asm jmp fAheadLib_midiInPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInReset(void)
{
	__asm jmp fAheadLib_midiInReset;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInStart(void)
{
	__asm jmp fAheadLib_midiInStart;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInStop(void)
{
	__asm jmp fAheadLib_midiInStop;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiInUnprepareHeader(void)
{
	__asm jmp fAheadLib_midiInUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutCacheDrumPatches(void)
{
	__asm jmp fAheadLib_midiOutCacheDrumPatches;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutCachePatches(void)
{
	__asm jmp fAheadLib_midiOutCachePatches;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutClose(void)
{
	__asm jmp fAheadLib_midiOutClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetDevCapsA(void)
{
	__asm jmp fAheadLib_midiOutGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetDevCapsW(void)
{
	__asm jmp fAheadLib_midiOutGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetErrorTextA(void)
{
	__asm jmp fAheadLib_midiOutGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetErrorTextW(void)
{
	__asm jmp fAheadLib_midiOutGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetID(void)
{
	__asm jmp fAheadLib_midiOutGetID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetNumDevs(void)
{
	__asm jmp fAheadLib_midiOutGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutGetVolume(void)
{
	__asm jmp fAheadLib_midiOutGetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutLongMsg(void)
{
	__asm jmp fAheadLib_midiOutLongMsg;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutMessage(void)
{
	__asm jmp fAheadLib_midiOutMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutOpen(void)
{
	__asm jmp fAheadLib_midiOutOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutPrepareHeader(void)
{
	__asm jmp fAheadLib_midiOutPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutReset(void)
{
	__asm jmp fAheadLib_midiOutReset;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutSetVolume(void)
{
	__asm jmp fAheadLib_midiOutSetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutShortMsg(void)
{
	__asm jmp fAheadLib_midiOutShortMsg;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiOutUnprepareHeader(void)
{
	__asm jmp fAheadLib_midiOutUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamClose(void)
{
	__asm jmp fAheadLib_midiStreamClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamOpen(void)
{
	__asm jmp fAheadLib_midiStreamOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamOut(void)
{
	__asm jmp fAheadLib_midiStreamOut;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamPause(void)
{
	__asm jmp fAheadLib_midiStreamPause;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamPosition(void)
{
	__asm jmp fAheadLib_midiStreamPosition;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamProperty(void)
{
	__asm jmp fAheadLib_midiStreamProperty;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamRestart(void)
{
	__asm jmp fAheadLib_midiStreamRestart;
}

extern "C" __declspec(naked) void __cdecl AheadLib_midiStreamStop(void)
{
	__asm jmp fAheadLib_midiStreamStop;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerClose(void)
{
	__asm jmp fAheadLib_mixerClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetControlDetailsA(void)
{
	__asm jmp fAheadLib_mixerGetControlDetailsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetControlDetailsW(void)
{
	__asm jmp fAheadLib_mixerGetControlDetailsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetDevCapsA(void)
{
	__asm jmp fAheadLib_mixerGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetDevCapsW(void)
{
	__asm jmp fAheadLib_mixerGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetID(void)
{
	__asm jmp fAheadLib_mixerGetID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetLineControlsA(void)
{
	__asm jmp fAheadLib_mixerGetLineControlsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetLineControlsW(void)
{
	__asm jmp fAheadLib_mixerGetLineControlsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetLineInfoA(void)
{
	__asm jmp fAheadLib_mixerGetLineInfoA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetLineInfoW(void)
{
	__asm jmp fAheadLib_mixerGetLineInfoW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerGetNumDevs(void)
{
	__asm jmp fAheadLib_mixerGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerMessage(void)
{
	__asm jmp fAheadLib_mixerMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerOpen(void)
{
	__asm jmp fAheadLib_mixerOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mixerSetControlDetails(void)
{
	__asm jmp fAheadLib_mixerSetControlDetails;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmDrvInstall(void)
{
	__asm jmp fAheadLib_mmDrvInstall;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmGetCurrentTask(void)
{
	__asm jmp fAheadLib_mmGetCurrentTask;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmTaskBlock(void)
{
	__asm jmp fAheadLib_mmTaskBlock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmTaskCreate(void)
{
	__asm jmp fAheadLib_mmTaskCreate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmTaskSignal(void)
{
	__asm jmp fAheadLib_mmTaskSignal;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmTaskYield(void)
{
	__asm jmp fAheadLib_mmTaskYield;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioAdvance(void)
{
	__asm jmp fAheadLib_mmioAdvance;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioAscend(void)
{
	__asm jmp fAheadLib_mmioAscend;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioClose(void)
{
	__asm jmp fAheadLib_mmioClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioCreateChunk(void)
{
	__asm jmp fAheadLib_mmioCreateChunk;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioDescend(void)
{
	__asm jmp fAheadLib_mmioDescend;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioFlush(void)
{
	__asm jmp fAheadLib_mmioFlush;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioGetInfo(void)
{
	__asm jmp fAheadLib_mmioGetInfo;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioInstallIOProcA(void)
{
	__asm jmp fAheadLib_mmioInstallIOProcA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioInstallIOProcW(void)
{
	__asm jmp fAheadLib_mmioInstallIOProcW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioOpenA(void)
{
	__asm jmp fAheadLib_mmioOpenA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioOpenW(void)
{
	__asm jmp fAheadLib_mmioOpenW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioRead(void)
{
	__asm jmp fAheadLib_mmioRead;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioRenameA(void)
{
	__asm jmp fAheadLib_mmioRenameA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioRenameW(void)
{
	__asm jmp fAheadLib_mmioRenameW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioSeek(void)
{
	__asm jmp fAheadLib_mmioSeek;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioSendMessage(void)
{
	__asm jmp fAheadLib_mmioSendMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioSetBuffer(void)
{
	__asm jmp fAheadLib_mmioSetBuffer;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioSetInfo(void)
{
	__asm jmp fAheadLib_mmioSetInfo;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioStringToFOURCCA(void)
{
	__asm jmp fAheadLib_mmioStringToFOURCCA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioStringToFOURCCW(void)
{
	__asm jmp fAheadLib_mmioStringToFOURCCW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmioWrite(void)
{
	__asm jmp fAheadLib_mmioWrite;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mmsystemGetVersion(void)
{
	__asm jmp fAheadLib_mmsystemGetVersion;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mod32Message(void)
{
	__asm jmp fAheadLib_mod32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_mxd32Message(void)
{
	__asm jmp fAheadLib_mxd32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_sndPlaySoundA(void)
{
	__asm jmp fAheadLib_sndPlaySoundA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_sndPlaySoundW(void)
{
	__asm jmp fAheadLib_sndPlaySoundW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_tid32Message(void)
{
	__asm jmp fAheadLib_tid32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeBeginPeriod(void)
{
	__asm jmp fAheadLib_timeBeginPeriod;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeEndPeriod(void)
{
	__asm jmp fAheadLib_timeEndPeriod;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeGetDevCaps(void)
{
	__asm jmp fAheadLib_timeGetDevCaps;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeGetSystemTime(void)
{
	__asm jmp fAheadLib_timeGetSystemTime;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeGetTime(void)
{
	__asm jmp fAheadLib_timeGetTime;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeKillEvent(void)
{
	__asm jmp fAheadLib_timeKillEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_timeSetEvent(void)
{
	__asm jmp fAheadLib_timeSetEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInAddBuffer(void)
{
	__asm jmp fAheadLib_waveInAddBuffer;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInClose(void)
{
	__asm jmp fAheadLib_waveInClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetDevCapsA(void)
{
	__asm jmp fAheadLib_waveInGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetDevCapsW(void)
{
	__asm jmp fAheadLib_waveInGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetErrorTextA(void)
{
	__asm jmp fAheadLib_waveInGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetErrorTextW(void)
{
	__asm jmp fAheadLib_waveInGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetID(void)
{
	__asm jmp fAheadLib_waveInGetID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetNumDevs(void)
{
	__asm jmp fAheadLib_waveInGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInGetPosition(void)
{
	__asm jmp fAheadLib_waveInGetPosition;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInMessage(void)
{
	__asm jmp fAheadLib_waveInMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInOpen(void)
{
	__asm jmp fAheadLib_waveInOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInPrepareHeader(void)
{
	__asm jmp fAheadLib_waveInPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInReset(void)
{
	__asm jmp fAheadLib_waveInReset;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInStart(void)
{
	__asm jmp fAheadLib_waveInStart;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInStop(void)
{
	__asm jmp fAheadLib_waveInStop;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveInUnprepareHeader(void)
{
	__asm jmp fAheadLib_waveInUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutBreakLoop(void)
{
	__asm jmp fAheadLib_waveOutBreakLoop;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutClose(void)
{
	__asm jmp fAheadLib_waveOutClose;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetDevCapsA(void)
{
	__asm jmp fAheadLib_waveOutGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetDevCapsW(void)
{
	__asm jmp fAheadLib_waveOutGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetErrorTextA(void)
{
	__asm jmp fAheadLib_waveOutGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetErrorTextW(void)
{
	__asm jmp fAheadLib_waveOutGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetID(void)
{
	__asm jmp fAheadLib_waveOutGetID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetNumDevs(void)
{
	__asm jmp fAheadLib_waveOutGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetPitch(void)
{
	__asm jmp fAheadLib_waveOutGetPitch;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetPlaybackRate(void)
{
	__asm jmp fAheadLib_waveOutGetPlaybackRate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetPosition(void)
{
	__asm jmp fAheadLib_waveOutGetPosition;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutGetVolume(void)
{
	__asm jmp fAheadLib_waveOutGetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutMessage(void)
{
	__asm jmp fAheadLib_waveOutMessage;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutOpen(void)
{
	__asm jmp fAheadLib_waveOutOpen;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutPause(void)
{
	__asm jmp fAheadLib_waveOutPause;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutPrepareHeader(void)
{
	__asm jmp fAheadLib_waveOutPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutReset(void)
{
	__asm jmp fAheadLib_waveOutReset;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutRestart(void)
{
	__asm jmp fAheadLib_waveOutRestart;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutSetPitch(void)
{
	__asm jmp fAheadLib_waveOutSetPitch;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutSetPlaybackRate(void)
{
	__asm jmp fAheadLib_waveOutSetPlaybackRate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutSetVolume(void)
{
	__asm jmp fAheadLib_waveOutSetVolume;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutUnprepareHeader(void)
{
	__asm jmp fAheadLib_waveOutUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl AheadLib_waveOutWrite(void)
{
	__asm jmp fAheadLib_waveOutWrite;
}

extern "C" __declspec(naked) void __cdecl AheadLib_wid32Message(void)
{
	__asm jmp fAheadLib_wid32Message;
}

extern "C" __declspec(naked) void __cdecl AheadLib_wod32Message(void)
{
	__asm jmp fAheadLib_wod32Message;
}


