# CHANGELOG

### 3.0.3

- Fixed buffer redraw issue with cover images on ghostty.

- Last Row is shown in the same place across all views.

- The library text no longer shifts one char to the left sometimes when starting songs.

- Fixed minor bug related to scrolling in library.

- Fixed bug related to covers in ascii, on narrow terminal sizes it wouldn't print correctly.

- Minor UI improvements, style adjustments and cleaning up.

- Added play and stop icon, and replaced some nerdfont characters with unicode equivalents.

- Disabled desktop notifications on macOS. The macOS desktop notifications didn't really gel well with the app, and the method used was unsafe in the long run. A better way to do it is by using objective-c, which I want to avoid using.

### 3.0.2

- You can now enqueue and play all your music (shuffled) in library view, by pressing MUSIC LIBRARY at the top.

- Removed dependency on Libnotify because its' blocking in nature, and some users were experiencing freezes. Instead dbus is used directly if available and used with timeouts. Reported by @sina-salahshour.

- Fixed bug introduced in 3.0.1 where songs whose titles start with a number would be sorted wrong.

- Fixed music library folders containing spaces weren't being accepted. Found by @PoutineSyropErable.

- Fixed bug where after finishing playing a playlist and then choosing a song in it, the next song would play twice.

- Fixed kew all not being randomized properly. Found by @j-lakeman.

- Fixed useConfigColors setting not being remembered. Found by @j-lakeman.

- Added AUTHORS.md, DEVELOPERS.md and CHANGELOG.md files.

- Dependencies Removed: Libnotify.

### 3.0.1

- Uses safer string functions.

- Fixed bug where scrolling in the library would overshoot its place when it was scrolling through directories with lots of files.

- Fixed mpris/dbus bug where some widgets weren't able to pause/play.

- Fixed crash when playing very short samples in sequence. Found by @hampa.

- Fixed order of songs in library was wrong in some cases. Found by @vincentcomfy.

- Fixed bug related to switching songs while paused.

- Fixed bug with being unable to rewind tracks to the start. Found by @INIROBO.

- Seek while paused is now disabled. Problems found by @INIROBO.

### 3.0.0

This release comes with bigger changes than usual. If you have installed kew manually, you need to now install taglib, ogglib and, if you want, faad2 (for aac/m4a support) for this version (see the readme for instructions for your OS).

- kew now works on macOS. The default terminal doesn't support colors and sixels fully, so installing a more modern terminal like kitty or wezterm is recommended.

- Removed dependencies: FFmpeg, FreeImage.

- Added Dependencies: Faad2, TagLib, Libogg.

- These changes make kew lighter weight and makes it faster to install on macOS through brew.

- Faad2 (which provides AAC decoding) is optional. By default, the build system will automatically detect if faad2 is available and include it if found.

- More optimized and faster binary. Thank you @zamazan4ik for ideas.

- Better support of Unicode strings.

- Case-insensitive search for unicode strings. Thank you @valesnikov.

- Fixed makefile and other things for building on all arches in Debian. Thank you so much @werdahias.

- More efficient handling of input.

- Added support for .m3u8 files. Thank you @mendhak for the suggestion.

- Fixed bug where switching songs quickly, the cover in the desktop notification would remain the same.

- Fixed issue with searching for nothing being broken. Thank you @Markmark1!

Thank you so much @xplshn, @Vafone and @Markmark1 for help with testing.

### 3.0.0-rc1

This release comes with bigger changes than usual. If you have installed kew manually, you need to now install taglib, ogglib and, if you want, faad2 (for aac/m4a support) for this version (see the readme for instructions for your OS).

- kew now works on macOS. The default terminal doesn't support colors and sixels fully, so installing a more modern terminal like kitty or wezterm is recommended.

- Removed dependencies: FFmpeg, FreeImage

- Added Dependencies: Faad2, TagLib, Ogglib

- These changes makes kew lighter weight and makes it faster to install on macOS through brew.

- Faad2 (which provides AAC decoding) is optional! By default, the build system will automatically detect if faad2 is available and include it if found. Disable with make USE_FAAD=0.

- More optimized and faster binary. Thank you @zamazan4ik for ideas.

- Better support of Unicode strings.

- Fixed makefile and other things for building on all arches in Debian. Thank you @werdahias.

- More efficient handling of input.

- Added support for .m3u8 files. Thank you @mendhak for the suggestion.

- Fixed bug where switching songs quickly, the cover in the desktop notification would remain the same.

Thank you @xplshn and @Markmark1 for help with testing.

Big thanks to everyone who helps report bugs!

### 2.8.2


- Fixed issue with building when libnotify is not installed.

- Fixed build issue on FreeBSD.


### 2.8.1

New in this version:

- Much nicer way to set the music library path on first use.

- Checks at startup if the music library's modified time has changed when using cached library. If it has, update the library. Thanks @yurivict for the suggestion.

- Improved search: kew now also shows the album name (directory name) of search results, for clarity.

- You can now use TAB to cycle through the different views.

- There's now a standalone executable AppImage for musl x86_64 systems. Thank you to @xplshn and @Samueru-sama for help with this.

Bugfixes and other:

- Added missing include file. Thank you @yurivict.

- Don't repeat the song notification when enqueuing songs. A small but annoying bug that slipped into the last release.

- Fixed issue where kew sometimes couldn't find the cover image in the folder.

- Better handling of songs that cannot be initialized.

- Removed support for .mp4 files so as to not add a bunch of video folders to the music library. Thanks @yurivict for the suggestion.

- Made the makefile compatible with Void Linux. Thank you @itsdeadguy.

- Cursor was not reappearing in some cases on FreeBSD after program exited. Thank you @yurivict.

- Fixed slow loading UI on some machines, because of blocking desktop notification. Thanks @vdawg-git for reporting this.

Thank you to @vdawg-git for helping me test and debug!

Thank you also to @ZhongRuoyu!

### 2.8

New Features:

- Much nicer way to set the music library path on first use.

- Checks at startup if the music library's modified time has changed when using cached library. If it has, update the library. Thanks @yurivict for the suggestion.

- Improved search: kew now also shows the album name (directory name) of search results, for clarity.

- You can now use TAB to cycle through the different views.

- There's now a standalone executable AppImage for musl x86_64 systems. Thank you to @xplshn and @Samueru-sama for help with this.

Bugfixes and other:

- Don't repeat the song notification when enqueuing songs. A small but annoying bug that slipped into the last release.

- Fixed issue where kew sometimes couldn't find the cover image in the folder.

- Better handling of songs that cannot be initialized.

- Removed support for .mp4 files so as to not add a bunch of video folders to the music library. Thanks @yurivict for the suggestion.

- Made the makefile compatible with Void Linux. Thank you @itsdeadguy.

- Cursor was not reappearing in some cases on FreeBSD after program exited. Thank you @yurivict.

- Fixed slow loading UI on some machines, because of blocking desktop notification. Thanks @vdawg-git for reporting this.

Thank you to @vdawg-git for helping me test and debug!

### 2.7.2

- You can now remove the currently playing song from the playlist. Thank you @yurivict for the suggestion. You can then press space bar to play the next song in the list.

- Scrolling now stops immediately after the key is released.

- Better reset of the terminal at program exit.

- MPRIS widgets are now updated when switching songs while paused.

- When pressing update library ("u"), it now remembers which files are enqueued.

- No more ugly scroll back buffer in the terminal.

Btw, there is a bug in the KDE Media Player Widget which locks up plasmashell when certain songs   play (in any music player). If you are having that problem, I suggest not using that widget until you have plasmashell version 6.20 or later. Bug description: https://bugs.kde.org/show_bug.cgi?id=491946.

### 2.7.1

- Added missing #ifdef for libnotify. This fixes #157.

### 2.7

This release adds:
	- Complete and corrected MPRIS implementation and support of playerCtl, except for opening Uris through mpris.
	- Libnotify as a new optional dependency.
	- Fixes to many minor issues that have cropped up.

- Proper MPRIS and PlayerCtl support. Set volume, stop, seek and others now work as expected. You can also switch tracks while stopped or paused now. Everything should work except openUri and repeat playlist which are not available for now.

- New (optional) dependency: Libnotify. In practice, adding libnotify as a dependency means browsing through music will no longer make desktop notifications pile up, instead the one visible will update itself. Thank you, @kazemaksOG, this looks much better. kew uses libnotify only if you have it installed, so it should if possible be an optional thing during installation.

- Allows binding of other keys for the different ui views that you get with F2-F6.

- Removed the option to toggle covers on and off by pressing 'c'. This led to confusion.

- Removed build warning on systems with ffmpeg 4.4 installed.

- Only run one instance of kew at a time, thanks @werdahias for the suggestion.

- If you exit the kew with 0% volume, when you open it next time, volume will be at 10%. To avoid confusion.

- Handle SIGHUP not only SIGINT.

- Prints error message instead of crashing on Fedora (thanks @spambroo) when playing unsupported .m4a files. This problem is related to ffmpeg free/non-free versions. You need the non-free version.

- Fixed issue where special characters in the song title could cause mpris widgets to not work correctly.

### 2.6

- New command: "kew albums", similar to "kew all" but it queues one album randomly after the other. Thank you @the-boar for the suggestion.

- Fixed bug where sometimes kew couldn't find a suitable name for a playlist file (created by pressing x).

- Made it so that seeking jumps in more reasonable smaller increments when not in song view. Previously it could jump 30 seconds at a time.

- Rolled back code related to symlinked directories, it didn't work with freebsd, possibly others.

### 2.5.1

- Fixed bug where desktop notifications could stall the app if notify-send wasn't installed. Thank you @Visual-Dawg for reporting this and all the help testing!

- Search: Removed duplicate search result name variable. This means search results will now have a very low memory footprint.

- Symlinked directories should work better now. Works best if the symlink and the destination directory has the same name.

### 2.5

- Fuzzy search! Press F5 to search your library.

- You can now quit with Esc. Handy when you are in search view, because pressing 'q' will just add that letter to the search string.

- Fixed issue where after completing a playthrough of a playlist and then starting over, only the first song would be played.

- Fine tuning of the spectrum visualizer. Still not perfect but I think this one is better. I might be wrong though.

- Fixed issue where debian package tracker wasn't detecting LDFLAGS in the makefile.

- Made scrolling quicker.

### 2.4.4

- Fixed no sound playing when playing a flac or mp3 song twice, then enqueuing another.

- Don't save every change to the playlist when running the special playlist with 'kew .', only add the songs added by pressing '.'.

- Removed compiler warning and a few other minor fixes.

### 2.4.3

- Fixed covers not being perfectly square on some terminals.

- Fixed playlist selector could get 'stuck' after playing a long list.

- Code refactoring and minor improvements to playlist view.

- Moved the files kewrc and kewlibrary config files from XDG_CONFIG_HOME into XDG_CONFIG_HOME/kew/, typically ~/.config/kew.

### 2.4.2

- Fixed a few issues related to reading and writing the library.

### 2.4.1

- Improved album cover color mode. Press 'i' to try this.

- To accelerate startup times, there is now a library cache. This feature is optional and can be enabled in the settings file (kewrc). If the library loading process is slow, you'll be prompted to consider using the cache.

- You can now press 'u' to update the library in case you've added or removed songs.

- Faster "kew all". It now bases its playlist on the library instead of scanning everything a second time.

- Fixed when running the special playlist with "kew .", the app sometimes became unresponsive when adding / deleting.

- Code refactoring and cleanup.

### 2.4

- Much faster song loading/skipping.

- New settings: configurable colors. These are configured in the kewrc file (in ~/.config/ or wherever your config files are) with instructions there.

- New setting: hidehelp. Hides the help text on library view and playlist view.

- New setting: hidelogo. Prints the artist name as well as the song title at the top instead of a logo.

- Fixed an issue with shuffle that could lead to a crash.

- Fixed an issue where it could crash at the end of the playlist.

- Fixed an issue where in some types of music libraries you couldn't scroll all the way to the bottom.

- Fixed notifications not notifying on songs with spaces in cover art url.

- Fixed sometimes not being able to switch song.

- Further adjustments to the visualizer.

- .aac and .mp4 file support.

- New option: -q. Quits right after playing the playlist (same as --quitonstop).

- Improved help text.

### 2.3.1

- The visualizer now (finally!) works like it's supposed to for all formats.

- Proper clean up and restore cursor when using CTRL-C to quit the app.

- Don't refresh track view twice when skipping to the previous song.

### 2.3

- Notifications of currently playing song through notify-send. New setting: allowNotifications. Set to 0 to disable notifications.

- Fixed an issue that could lead to a crash when switching songs.

- Fixed an issue with switching opus songs that could lead to a crash.

- Plus other bug fixes.

### 2.2.1

- Fixed issue related to enqueuing/dequeuing the next song.

- Some adapting for FreeBSD.

### 2.2.1

- Fixed issue related to enqueuing/dequeuing the next song.

- Some adapting for FreeBSD.

### 2.2

- This update mostly contains improvements to stability.

- M4a file decoding is no longer done by calling ffmpeg externally, it's (finally) done like the other file formats. This should make kew more stable, responsive and it should consume less memory when playing m4a files.

- kew now starts the first time with your system volume as the volume, after that it remembers the last volume it exited with and uses that.

- kew now picks up and starts using the cover color without the user having to first go to track view.

### 2.1.1

- Fixed a few issues related to passing cover art url and length to mpris. Should now display cover and progress correctly in widgets on gnome/wayland.

### 2.0.4

- You can now add "-e" or "--exact" in your searches to return an exact (not case sensitive) match. This can be helpful when two albums have a similar name, and you want to specify you want one or the other.

  Example: kew -e basement popstar.

- Fixed issue where pressing del on the playlist changed view to track view.

### 2.0.3

- Fixed issue where sometimes the last of enqueued songs where being played instead of the first,

- F4 is bound to show track view, and shown on the last row, so that the track view isn't hidden from new users.

### 2.0.1

- New view: Library. Shows the contents of the music library. From there you can add songs to the playlist.

- Delete items from the playlist by pressing Del.

- You can flip through pages of the library or playlist by pressing Page Up and Page Down.

- Starting kew with no arguments now takes you to the library.

- After the playlist finishes playing, the library is shown, instead of the app exiting.

- To run kew with all songs shuffled like you could before, just type "kew all" in the terminal.

- Running kew  with the argument --quitonstop, enables the old behavior of exiting when finished.

- Removed the playlist duration counter. It caused problems when coupled with the new features of being able to remove and add songs while audio is playing.

- New ascii logo! This one takes up much less space.

- kew now shows which song is playing on top of the library and playlist views.

- Volume is now set at 50% at the start.

- Also many bug fixes.

### 1.11

- Now shows volume percentage.

- Fixed bug where on a small window size, the nerdfonts for seeking, repeat and shuffle when all three enabled could mess up the visualizer.

### 1.10

- Improved config file, with more information on how to make key bindings with special keys for instance.

- Changing the volume is now for just kew, not the master volume of your system.

- Switching songs now unpauses the player.

- Fixed issue of potential crash when uninitializing decoders.

### 1.9

- Fixed a potential dead-lock situation.

- Fixed one instance of wrong metadata/cover being displayed for a song on rare occasions.

- Fixed an issue that could lead to a crash when switching songs.

- Fixed issue of potential crash when closing audio file.

- Fixed playlist showing the previous track as the current one.

- Much improved memory allocation handling in visualizer.

- Playlist builder now ignores hidden directories.

### 1.8.1

- Fixed bugs relating to showing the playlist and seeking.

- Fixed bug where trying to seek on ogg files led to strange behavior. Now seeking in ogg is entirely disabled.

- Fixed bug where kew for no reason stopped playing audio but kept counting elapsed seconds.

- More colorful visualizer bars when using album cover colors.

### 1.8

- Visualizer bars now grow and decrease smoothly (if your terminal supports unicode).

### 1.7.4

- Kew is now interactive when paused.

- Fixed issue with crashing after a few plays with repeat enabled.

- Deletes cover images from cache after playing the file.

### 1.7.3

- Fixed issue with crash after seeking to the end of songs a few times. A lot was changed in 1.6.0 and 1.7.0 which led to some instability.

### 1.7.2

- Introduced Nerd Font glyphs for things like pause, repeat, fast forward and so on.

- More fixes.

### 1.7.1

- Fixes a few issues in 1.7.0

### 1.7.0

- Added decoders for ogg vorbis and opus. Seeking on ogg files doesn't yet work however.

### 1.6.0

- Now uses miniaudio's built-in decoders for mp3, flac and wav.

### 1.5.2

- Fix for unplayable songs.

### 1.5.1

- Misc issues with input handling resolved.

- Faster seeking.

### 1.5

- Name changed to kew to resolve a name conflict.

- Fixed bug with elapsed seconds being counted wrong if pausing multiple times.

- Fixed bug with segfault on exit.

### 1.4

- Seeking is now possible, with A and D.

- Config file now resides in your XDG_CONFIG_HOME, possibly ~/.config/kewrc. You can delete the one in your home folder after starting this version of cue once.

- Most key bindings are now configurable.

- Singing more visible in the visualizer.

- Better looking visualizer with smoother gradient.

- Misc fixes.

- You can no longer press A to add to kew.m3u. instead use period.

### 1.3

- Now skips drm'd files more gracefully.

- Improvements to thread safety and background process handling.

- Misc bug fixes.

- Using album colors is now the default again.

### 1.2

- It's now possible to scroll through the songs in the playlist menu.

- Unfortunately this means a few key binding changes. Adjusting volume has been changed to +, -, instead up and down arrow is used for scrolling in the playlist menu.

- h,l is now prev and next track (previously j and k). Now j,k is used for scrolling in the playlist menu.

- Added a better check that metadata is correct before printing it, hopefully this fixes an occasional but annoying bug where the wrong metadata was sometimes displayed.

- Using profile/theme colors is now the default choice for colors.

### 1.1

- Everything is now centered around the cover and left-aligned within that space.

- Better visibility for text on white backgrounds. If colors are still too bright you can always press "i" and use the terminal colors, for now.

- Playlist is now F2 and key bindings is F3 to help users who are using the terminator terminal and other terminals who might have help on the F1 key.

- Now looks better in cases where there is no metadata and/or when there is no cover.

- The window refreshes faster after resize.

### 1.0.9

- More colorful. It should be rarer for the color derived from the album cover to be gray/white

- Press I to toggle using colors from the album cover or using colors from your terminal color scheme.

- Smoother color transition on visualizer.

### 1.0.8

#### Features:

- New Setting: useProfileColors. If set to 1 will match cue with your terminal profile colors instead of the album cover which remains the default.

- It is now possible to switch songs a little quicker.

- It's now faster (instant) to switch to playlist and key bindings views.

#### Bug Fixes:

- Skip to numbered song wasn't clearing the number array correctly.

- Rapid typing of a song number wasn't being read correctly..
### 1.0.7

- Fixed a bug where mpris stuff wasn't being cleaned up correctly.

- More efficient printing to screen.

- Better (refactored) cleanup.

### 1.0.6

- Fixed a bug where mpris stuff wasn't being cleaned up correctly

### 1.0.5

- Added a slow decay to the bars and made some other changes that should make the visualizer appear better, but this is all still experimental.

- Some more VIM key bindings:
	 100G or 100g or 100+ENTER -> go to song 100
	 gg -> go to first song
	 G -> go to last song

### 1.0.4

- Added man pages.

- Added a few VIM key bindings (h,j,k,l) to use instead of arrow keys.

- Shuffle now behaves like in other players, and works with MPRIS. Previously the list would be reordered, instead of the song just jumping from place to place, in the same list. Starting cue with 'cue shuffle <text>' still works the old way.

- Now prints a R or S on the last line when repeat or shuffle is enabled.

### 1.0.3

- cue should now cleanly skip files it cannot play. Previously this caused instability to the app and made it become unresponsive.

- Fixed a bug where the app sometimes became unresponsive, in relation to pausing/unpausing and pressing buttons while paused.

### 1.0.2:

- Added support for MPRIS, which is the protocol used on Linux systems for controlling media players.

- Added --nocover option.

- Added --noui option. When it's used cue doesn't print anything to screen.

- Now you can press K to see key bindings.

- Fixed issue with long files being cut off.

- Hiding cover and changing other settings, now clears the screen first.

- Fixed installscript for opensuse.

- Feature or bug? You can no longer raise the volume above 100%

- New dependency: glib2. this was already required because chafa requires it, but it is now a direct dependency of cue.
