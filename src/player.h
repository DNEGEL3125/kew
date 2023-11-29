#ifndef PLAYER_H
#define PLAYER_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "albumart.h"
#include "cutils.h"
#include "term.h"
#include "visuals.h"
#include "playlist.h"
#include "songloader.h"
#include "soundgapless.h"

extern const char VERSION[];
extern bool coverEnabled;
extern bool uiEnabled;
extern bool coverAnsi;
extern bool printPlaylist;
extern bool printKeyBindings;
extern bool visualizerEnabled;
extern bool useThemeColors;
extern bool hasPrintedPaused;
extern int numProgressBars;
extern int elapsed;
extern int chosenSong;
extern bool resetPlaylistDisplay;
extern int visualizerHeight;
extern volatile bool refresh;
extern TagSettings metadata;
extern bool fastForwarding;
extern bool rewinding;
extern double elapsedSeconds;
extern double pauseSeconds;
extern double totalPauseSeconds;
extern double seekAccumulatedSeconds;
extern double duration;

int printPlayer(SongData *songdata, double elapsedSeconds, PlayList *playlist);

void showVersion(void);

int printAbout(void);

void showHelp(void);

void scrollNext(void);

void scrollPrev(void);

void toggleShowKeyBindings(void);

void toggleShowPlaylist(void);

void setTextColorRGB2(int r, int g, int b);

#endif