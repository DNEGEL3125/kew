#ifndef PLAYER_H
#define PLAYER_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "albumart.h"
#include "directorytree.h"
#include "playlist.h"
#include "songloader.h"
#include "sound.h"
#include "term.h"
#include "utils.h"
#include "visuals.h"

extern int mainColor;
extern int artistColor;
extern int enqueuedColor;
extern int titleColor;
extern const char VERSION[];
extern bool coverEnabled;
extern bool uiEnabled;
extern bool coverAnsi;
extern bool visualizerEnabled;
extern bool useThemeColors;
extern bool hasPrintedPaused;
extern bool quitAfterStopping;
extern bool nerdFontsEnabled;
extern bool hideLogo;
extern bool hideHelp;
extern int numProgressBars;
extern int chosenSong;
extern bool resetPlaylistDisplay;
extern int visualizerHeight;
extern TagSettings metadata;
extern bool fastForwarding;
extern bool rewinding;
extern double elapsedSeconds;
extern double pauseSeconds;
extern double totalPauseSeconds;
extern double seekAccumulatedSeconds;
extern bool allowChooseSongs;
extern int chosenLibRow;
extern int chosenRow;
extern int chosenNodeId;
extern bool useProfileColors;

bool hasNerdFonts();

void createLibrary(AppSettings *settings);

int printPlayer(SongData *songdata, double elapsedSeconds, AppSettings *settings);

void flipNextPage();

void flipPrevPage();

void showHelp(void);

int printAbout(SongData *songdata);

FileSystemEntry *getCurrentLibEntry();

FileSystemEntry *getChosenDir();

FileSystemEntry *getLibrary();

void scrollNext(void);

void scrollPrev(void);

void setCurrentAsChosenDir();

void toggleShowKeyBindings(void);

void toggleShowLibrary();

void toggleShowPlaylist(void);

void showTrack();

void setTextColorRGB2(int r, int g, int b);

void freeMainDirectoryTree();

#endif
