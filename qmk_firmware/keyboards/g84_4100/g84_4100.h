#pragma once

#include "quantum.h"

void turn_off_led(pin_t pin);
void turn_on_led(pin_t pin);

#define LAYOUT(                                                                                     \
  k97, k96, k95, k94, k93, k92, k91, k90, k00, k01, k02, k04, k05, k03, k06,                        \
      k87, k86, k85, k84, k83, k82, k81, k80, k10, k11, k12, k13,  k14, k16,                        \
  k77, k76, k75, k74, k73, k72, k71, k70, k20, k21, k22, k23, k24, k34, k26,                        \
   k67, k66, k65, k64, k63, k62, k61, k60, k30, k31, k32, k33,   k35,   k36,                        \
  kB7,    k56, k55, k54, k53, k52, k51, k50, k40, k41, k42,  kA2,  k27, k46,                        \
  kC7, kD7, kE7, kA7, k57,   k47,    kB2, kF7, K45, k44, k43, k37, k17, k07                         \
) {                                                                                                 \
    { k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07 },                                       \
    { k10,   k11,   k12,   k13,   k14,   KC_NO, k16,   k17 },                                       \
    { k20,   k21,   k22,   k23,   k24,   KC_NO, k26,   k27 },                                       \
    { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37 },                                       \
    { k40,   k41,   k42,   k43,   k44,   K45,   k46,   k47 },                                       \
    { k50,   k51,   k52,   k53,   k54,   k55,   k56,   k57 },                                       \
    { k60,   k61,   k62,   k63,   k64,   k65,   k66,   k67 },                                       \
    { k70,   k71,   k72,   k73,   k74,   k75,   k76,   k77 },                                       \
    { k80,   k81,   k82,   k83,   k84,   k85,   k86,   k87 },                                       \
    { k90,   k91,   k92,   k93,   k94,   k95,   k96,   k97 },                                       \
    { KC_NO, KC_NO, kA2,   KC_NO, KC_NO, KC_NO, KC_NO, kA7 },                                       \
    { KC_NO, KC_NO, kB2,   KC_NO, KC_NO, KC_NO, KC_NO, kB7 },                                       \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, kC7 },                                       \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, kD7 },                                       \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, kE7 },                                       \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, kF7 }                                        \
}
