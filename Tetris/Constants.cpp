//
//  Constants.cpp
//  Tetris
//
//  Created by Fielding Johnston on 3/18/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#include "Constants.h"

// Screen Attributes
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 768;
const int SCREEN_BPP = 32;
const int FRAMES_PER_SECOND = 20;

// Board Attributes

const int BLOCK_SIZE = 16;    // Block size in pixels
const int BOARD_BLOCK_WIDTH = 10;   // Board width in blocks
const int BOARD_BLOCK_HEIGHT = 20;  // Board height in blocks
const int BOARD_WIDTH = BOARD_BLOCK_WIDTH * BLOCK_SIZE;   // Board width in pixels
const int BOARD_HEIGHT = BOARD_BLOCK_HEIGHT * BLOCK_SIZE;   // Board height in pixels

const int BOARD_ORIGIN_X = 560;   // X-origin position the board appears on the screen
const int BOARD_ORIGIN_Y = 224;   // Y-origin position the board appears on the screen

const int NC_ORIGIN_X = BOARD_ORIGIN_X + BOARD_WIDTH + (BLOCK_SIZE * 2);    // X-origin for the next container
const int NC_ORIGIN_Y =  BOARD_ORIGIN_Y + (BLOCK_SIZE * 2);   // Y-origin for the next container