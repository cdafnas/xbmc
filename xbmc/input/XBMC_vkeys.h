/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2009 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifndef XBMC_vkeys_h
#define XBMC_vkeys_h

// The XBMC_vkey identifies a key that is mapped to an action or function.
// The keysym.sym generated by SDL_KEYDOWN is mapped to a vkey and the vkey
// is used to lookup an action in the global mapping table.
// The vkey values are the ASCII code of the character where this is possible.
// Non-printing keypresses get a value in the range 0x80 - 0xFF.
// Note that the vkey is a byte value so it cannot be greater than 0xFF.

typedef enum {
  XBMCVK_BACK           = 0x08,
  XBMCVK_TAB            = 0x09,
  XBMCVK_RETURN         = 0x0D,
  XBMCVK_ESCAPE         = 0x1B,

  XBMCVK_SPACE          = 0x20,
  XBMCVK_EXCLAIM        = 0x21,
  XBMCVK_QUOTEDBL       = 0x22,
  XBMCVK_HASH           = 0x23,
  XBMCVK_DOLLAR         = 0x24,
  XBMCVK_PERCENT        = 0x25,
  XBMCVK_AMPERSAND      = 0x26,
  XBMCVK_QUOTE          = 0x27,
  XBMCVK_LEFTPAREN      = 0x28,
  XBMCVK_RIGHTPAREN     = 0x29,
  XBMCVK_ASTERISK       = 0x2A,
  XBMCVK_PLUS           = 0x2B,
  XBMCVK_COMMA          = 0x2C,
  XBMCVK_MINUS          = 0x2D,
  XBMCVK_PERIOD         = 0x2E,
  XBMCVK_SLASH          = 0x2F,

  XBMCVK_0              = 0x30,
  XBMCVK_1              = 0x31,
  XBMCVK_2              = 0x32,
  XBMCVK_3              = 0x33,
  XBMCVK_4              = 0x34,
  XBMCVK_5              = 0x35,
  XBMCVK_6              = 0x36,
  XBMCVK_7              = 0x37,
  XBMCVK_8              = 0x38,
  XBMCVK_9              = 0x39,

  XBMCVK_COLON          = 0x3A,
  XBMCVK_SEMICOLON      = 0x3B,
  XBMCVK_LESS           = 0x3C,
  XBMCVK_EQUALS         = 0x3D,
  XBMCVK_GREATER        = 0x3E,
  XBMCVK_QUESTION       = 0x3F,
  XBMCVK_AT             = 0x40,

  XBMCVK_A              = 0x41,
  XBMCVK_B              = 0x42,
  XBMCVK_C              = 0x43,
  XBMCVK_D              = 0x44,
  XBMCVK_E              = 0x45,
  XBMCVK_F              = 0x46,
  XBMCVK_G              = 0x47,
  XBMCVK_H              = 0x48,
  XBMCVK_I              = 0x49,
  XBMCVK_J              = 0x4A,
  XBMCVK_K              = 0x4B,
  XBMCVK_L              = 0x4C,
  XBMCVK_M              = 0x4D,
  XBMCVK_N              = 0x4E,
  XBMCVK_O              = 0x4F,
  XBMCVK_P              = 0x50,
  XBMCVK_Q              = 0x51,
  XBMCVK_R              = 0x52,
  XBMCVK_S              = 0x53,
  XBMCVK_T              = 0x54,
  XBMCVK_U              = 0x55,
  XBMCVK_V              = 0x56,
  XBMCVK_W              = 0x57,
  XBMCVK_X              = 0x58,
  XBMCVK_Y              = 0x59,
  XBMCVK_Z              = 0x5A,

  XBMCVK_LEFTBRACKET    = 0x5B,
  XBMCVK_BACKSLASH      = 0x5C,
  XBMCVK_RIGHTBRACKET   = 0x5D,
  XBMCVK_CARET          = 0x5E,
  XBMCVK_UNDERSCORE     = 0x5F,
  XBMCVK_BACKQUOTE      = 0x60,

// Lowercase letters 0x61 - 0x7a have the same vkey as uppercase, so
// use this block for the numpad keys
  XBMCVK_NUMPADDIVIDE   = 0x61,
  XBMCVK_NUMPADTIMES    = 0x62,
  XBMCVK_NUMPADMINUS    = 0x63,
  XBMCVK_NUMPADPLUS     = 0x64,
  XBMCVK_NUMPADENTER    = 0x65,
  XBMCVK_NUMPADPERIOD   = 0x66,
  XBMCVK_NUMPAD0        = 0x70,
  XBMCVK_NUMPAD1        = 0x71,
  XBMCVK_NUMPAD2        = 0x72,
  XBMCVK_NUMPAD3        = 0x73,
  XBMCVK_NUMPAD4        = 0x74,
  XBMCVK_NUMPAD5        = 0x75,
  XBMCVK_NUMPAD6        = 0x76,
  XBMCVK_NUMPAD7        = 0x77,
  XBMCVK_NUMPAD8        = 0x78,
  XBMCVK_NUMPAD9        = 0x79,

  XBMCVK_LEFTBRACE      = 0x7B,
  XBMCVK_PIPE           = 0x7C,
  XBMCVK_RIGHTBRACE     = 0x7D,
  XBMCVK_TILDE          = 0x7E,

// Non-printing characters

  XBMCVK_UP             = 0x80,
  XBMCVK_DOWN           = 0x81,
  XBMCVK_LEFT           = 0x82,
  XBMCVK_RIGHT          = 0x83,
  XBMCVK_PAGEUP         = 0x84,
  XBMCVK_PAGEDOWN       = 0x85,
  XBMCVK_INSERT         = 0x86,
  XBMCVK_DELETE         = 0x87,
  XBMCVK_HOME           = 0x88,
  XBMCVK_END            = 0x89,

  XBMCVK_F1             = 0x90,
  XBMCVK_F2             = 0x91,
  XBMCVK_F3             = 0x92,
  XBMCVK_F4             = 0x93,
  XBMCVK_F5             = 0x94,
  XBMCVK_F6             = 0x95,
  XBMCVK_F7             = 0x96,
  XBMCVK_F8             = 0x97,
  XBMCVK_F9             = 0x98,
  XBMCVK_F10            = 0x99,
  XBMCVK_F11            = 0x9A,
  XBMCVK_F12            = 0x9B,
  XBMCVK_F13            = 0x9C,
  XBMCVK_F14            = 0x9D,
  XBMCVK_F15            = 0x9E,
  XBMCVK_F16            = 0x9F,
  XBMCVK_F17            = 0xA0,
  XBMCVK_F18            = 0xA1,
  XBMCVK_F19            = 0xA2,
  XBMCVK_F20            = 0xA3,
  XBMCVK_F21            = 0xA4,
  XBMCVK_F22            = 0xA5,
  XBMCVK_F23            = 0xA6,
  XBMCVK_F24            = 0xA7,

  XBMCVK_BROWSER_BACK        = 0xB0,
  XBMCVK_BROWSER_FORWARD     = 0xB1,
  XBMCVK_BROWSER_REFRESH     = 0xB2,
  XBMCVK_BROWSER_STOP        = 0xB3,
  XBMCVK_BROWSER_SEARCH      = 0xB4,
  XBMCVK_BROWSER_FAVORITES   = 0xB5,
  XBMCVK_BROWSER_HOME        = 0xB6,
  XBMCVK_VOLUME_MUTE         = 0xB7,
  XBMCVK_VOLUME_DOWN         = 0xB8,
  XBMCVK_VOLUME_UP           = 0xB9,
  XBMCVK_MEDIA_NEXT_TRACK    = 0xBA,
  XBMCVK_MEDIA_PREV_TRACK    = 0xBB,
  XBMCVK_MEDIA_STOP          = 0xBC,
  XBMCVK_MEDIA_PLAY_PAUSE    = 0xBD,
  XBMCVK_LAUNCH_MAIL         = 0xBE,
  XBMCVK_LAUNCH_MEDIA_SELECT = 0xBF,
  XBMCVK_LAUNCH_APP1         = 0xC0,
  XBMCVK_LAUNCH_APP2         = 0xC1,
  XBMCVK_LAUNCH_FILE_BROWSER = 0xC2,
  XBMCVK_LAUNCH_MEDIA_CENTER = 0xC3,

  XBMCVK_LCONTROL       = 0xD0,
  XBMCVK_RCONTROL       = 0xD1,
  XBMCVK_LSHIFT         = 0xD2,
  XBMCVK_RSHIFT         = 0xD3,
  XBMCVK_LMENU          = 0xD4,
  XBMCVK_RMENU          = 0xD5,
  XBMCVK_LWIN           = 0xD6,
  XBMCVK_RWIN           = 0xD7,
  XBMCVK_MENU           = 0xD8,
  XBMCVK_CAPSLOCK       = 0xD9,
  XBMCVK_NUMLOCK        = 0xDA,

  XBMCVK_PRINTSCREEN    = 0xDB,
  XBMCVK_SCROLLLOCK     = 0xDC,
  XBMCVK_PAUSE          = 0XDD,

  XBMCVK_LAST           = 0xFF
} XBMCVKey;

// These should be in winuser.h. Not sure why they have been defined here
#ifndef VK_0
#define VK_0	'0'
#define VK_1	'1'
#define VK_2	'2'
#define VK_3	'3'
#define VK_4	'4'
#define VK_5	'5'
#define VK_6	'6'
#define VK_7	'7'
#define VK_8	'8'
#define VK_9	'9'
#define VK_A	'A'
#define VK_B	'B'
#define VK_C	'C'
#define VK_D	'D'
#define VK_E	'E'
#define VK_F	'F'
#define VK_G	'G'
#define VK_H	'H'
#define VK_I	'I'
#define VK_J	'J'
#define VK_K	'K'
#define VK_L	'L'
#define VK_M	'M'
#define VK_N	'N'
#define VK_O	'O'
#define VK_P	'P'
#define VK_Q	'Q'
#define VK_R	'R'
#define VK_S	'S'
#define VK_T	'T'
#define VK_U	'U'
#define VK_V	'V'
#define VK_W	'W'
#define VK_X	'X'
#define VK_Y	'Y'
#define VK_Z	'Z'
#endif /* VK_0 */

/* These keys haven't been defined, but were experimentally determined */
#ifndef VK_SEMICOLON
#define VK_SEMICOLON	0xBA
#define VK_EQUALS	0xBB
#define VK_COMMA	0xBC
#define VK_MINUS	0xBD
#define VK_PERIOD	0xBE
#define VK_SLASH	0xBF
#define VK_GRAVE	0xC0
#define VK_LBRACKET	0xDB
#define VK_BACKSLASH	0xDC
#define VK_RBRACKET	0xDD
#define VK_APOSTROPHE	0xDE
#define VK_BACKTICK	0xDF
#define VK_OEM_102	0xE2
#endif

#endif // XBMC_vkeys_h
