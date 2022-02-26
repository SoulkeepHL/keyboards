#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00,                K04, \
	          K12, K13,      \
	     K21, K22, K23, K24, \
	     K31, K32, K33, K34, \
	     K41, K42, K43, K44, \
	K50, K51, K52, K53, K54, \
	     K61,           K64  \
) { \
	{ K00, KC_NO, KC_NO, KC_NO, K04 }, \
	{ KC_NO, KC_NO, K12,   K13,   KC_NO }, \
	{ KC_NO, K21,   K22,   K23,   K24 }, \
	{ KC_NO, K31,   K32,   K33,   K34 }, \
	{ KC_NO, K41,   K42,   K43,   K44 }, \
	{ K50,   K51,   K52,   K53,   K54 }, \
	{ KC_NO, K61,   KC_NO, KC_NO, K64 }  \
}

#endif
