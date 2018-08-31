#ifndef CAFE_PADSCORE_ENUM_H
#define CAFE_PADSCORE_ENUM_H

#include <common/enum_start.h>

ENUM_NAMESPACE_BEG(cafe)
ENUM_NAMESPACE_BEG(padscore)

ENUM_BEG(KPADReadError, int32_t)
   ENUM_VALUE(OK,                      0)
   ENUM_VALUE(NoController,            -2)
ENUM_END(KPADReadError)

ENUM_BEG(WPADBatteryLevel, uint8_t)
   ENUM_VALUE(Min,                     0x0000)
   ENUM_VALUE(Low,                     0x0001)
   ENUM_VALUE(Medium,                  0x0002)
   ENUM_VALUE(High,                    0x0003)
   ENUM_VALUE(Max,                     0x0004)
ENUM_END(WPADBatteryLevel)

ENUM_BEG(WPADButton, uint32_t)
   ENUM_VALUE(Left,                    0x0001)
   ENUM_VALUE(Right,                   0x0002)
   ENUM_VALUE(Down,                    0x0004)
   ENUM_VALUE(Up,                      0x0008)
   ENUM_VALUE(Plus,                    0x0010)
   ENUM_VALUE(Btn2,                    0x0100)
   ENUM_VALUE(Btn1,                    0x0200)
   ENUM_VALUE(B,                       0x0400)
   ENUM_VALUE(A,                       0x0800)
   ENUM_VALUE(Minus,                   0x1000)
   ENUM_VALUE(Z,                       0x2000)
   ENUM_VALUE(C,                       0x4000)
   ENUM_VALUE(Home,                    0x8000)
ENUM_END(WPADButton)

ENUM_BEG(WPADClassicButton, uint32_t)
   ENUM_VALUE(Up,                      0x0001)
   ENUM_VALUE(Left,                    0x0002)
   ENUM_VALUE(ZR,                      0x0004)
   ENUM_VALUE(X,                       0x0008)
   ENUM_VALUE(A,                       0x0010)
   ENUM_VALUE(Y,                       0x0020)
   ENUM_VALUE(B,                       0x0040)
   ENUM_VALUE(ZL,                      0x0080)
   ENUM_VALUE(R,                       0x0200)
   ENUM_VALUE(Plus,                    0x0400)
   ENUM_VALUE(Home,                    0x0800)
   ENUM_VALUE(Minus,                   0x1000)
   ENUM_VALUE(L,                       0x2000)
   ENUM_VALUE(Down,                    0x4000)
   ENUM_VALUE(Right,                   0x8000)
ENUM_END(WPADClassicButton)

ENUM_BEG(WPADChan, uint32_t)
   ENUM_VALUE(Chan0,                   0)
   ENUM_VALUE(Chan1,                   1)
   ENUM_VALUE(Chan2,                   2)
   ENUM_VALUE(Chan3,                   3)
   ENUM_VALUE(NumChans,                4)
ENUM_END(WPADChan)

ENUM_BEG(WPADDataFormat, uint8_t)
   ENUM_VALUE(ProController,           22)
ENUM_END(WPADDataFormat)

ENUM_BEG(WPADExtensionType, uint8_t)
   ENUM_VALUE(Core,                    0)
   ENUM_VALUE(Nunchuk,                 1)
   ENUM_VALUE(Classic,                 2)
   ENUM_VALUE(MotionPlus,              5)
   ENUM_VALUE(MotionPlusNunchuk,       6)
   ENUM_VALUE(MotionPlusClassic,       7)
   ENUM_VALUE(ProController,           31)
   ENUM_VALUE(NoController,            253)
ENUM_END(WPADExtensionType)

ENUM_BEG(WPADError, int32_t)
   ENUM_VALUE(OK,                      0)
   ENUM_VALUE(NoController,            -1)
ENUM_END(WPADError)

ENUM_BEG(WPADLibraryStatus, uint32_t)
   ENUM_VALUE(Uninitialised,           0)
   ENUM_VALUE(Initialised,             1)
ENUM_END(WPADLibraryStatus)

ENUM_BEG(WPADMotorCommand, uint32_t)
   ENUM_VALUE(Stop,                    0)
   ENUM_VALUE(Rumble,                  1)
ENUM_END(WPADMotorCommand)

ENUM_BEG(WPADProButton, uint32_t)
   ENUM_VALUE(Up,                      0x00000001)
   ENUM_VALUE(Left,                    0x00000002)
   ENUM_VALUE(ZR,                      0x00000004)
   ENUM_VALUE(X,                       0x00000008)
   ENUM_VALUE(A,                       0x00000010)
   ENUM_VALUE(Y,                       0x00000020)
   ENUM_VALUE(B,                       0x00000040)
   ENUM_VALUE(ZL,                      0x00000080)
   ENUM_VALUE(R,                       0x00000200)
   ENUM_VALUE(Plus,                    0x00000400)
   ENUM_VALUE(Home,                    0x00000800)
   ENUM_VALUE(Minus,                   0x00001000)
   ENUM_VALUE(L,                       0x00002000)
   ENUM_VALUE(Down,                    0x00004000)
   ENUM_VALUE(Right,                   0x00008000)
   ENUM_VALUE(StickR,                  0x00010000)
   ENUM_VALUE(StickL,                  0x00020000)
   ENUM_VALUE(StickLUp,                0x00200000)
   ENUM_VALUE(StickLDown,              0x00100000)
   ENUM_VALUE(StickLLeft,              0x00040000)
   ENUM_VALUE(StickLRight,             0x00080000)
   ENUM_VALUE(StickRUp,                0x02000000)
   ENUM_VALUE(StickRDown,              0x01000000)
   ENUM_VALUE(StickRLeft,              0x00400000)
   ENUM_VALUE(StickRRight,             0x00800000)
ENUM_END(WPADProButton)

ENUM_NAMESPACE_END(padscore)
ENUM_NAMESPACE_END(cafe)

#include <common/enum_end.h>

#endif // ifdef CAFE_PADSCORE_ENUM_H
