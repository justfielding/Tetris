//
//  Constants.h
//  Tetris
//
//  Created by Fielding Johnston on 3/18/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#ifndef __Tetris__Constants__
#define __Tetris__Constants__

#include <iostream>

// Game Loop Timing
extern const int TICKS_PER_SECOND;
extern const int SKIP_TICKS;
extern const int MAX_FRAMESKIP;
extern const int FRAMES_PER_SECOND;

// Screen Attributes
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern const int SCREEN_BPP;

// Board Attributes

extern const int BLOCK_SIZE;    // Block size in pixels
extern const int BOARD_BLOCK_WIDTH;   // Board width in blocks
extern const int BOARD_BLOCK_HEIGHT;  // Board height in blocks
extern const int BOARD_WIDTH;   // Board width in pixels
extern const int BOARD_HEIGHT;   // Board height in pixels

extern const int BOARD_ORIGIN_X;   // X- origin position the board appears on the screen
extern const int BOARD_ORIGIN_Y;   // Y-origin position the board appears on the screen
extern const int NC_ORIGIN_X;
extern const int NC_ORIGIN_Y;
extern const int HC_ORIGIN_X;
extern const int HC_ORIGIN_Y;
extern const int CONTAINER_WIDTH;
extern const int CONTAINER_HEIGHT;

extern const int LOCK_DELAY_MAX;
extern const int DAS_DELAY_TIME;
extern const int AUTO_REPEAT_RATE;

#endif /* defined(__Tetris__Constants__) */
