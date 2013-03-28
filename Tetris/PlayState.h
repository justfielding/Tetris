//
//  PlayState.h
//  Tetris
//
//  Created by Fielding Johnston on 3/25/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#ifndef __Tetris__PlayState__
#define __Tetris__PlayState__

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>

#include "GameEngine.h"
#include "GameState.h"
#include "MenuState.h"
#include "PauseState.h"
#include "GameOverState.h"
#include "Constants.h"
#include "Board.h"
#include "Bag.h"
#include "Timer.h"
#include "Block.h"
#include "Tetrimino.h"

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

class PlayState : public GameState
{
public:
  void Init( GameEngine* game );
  void Cleanup();
  
  void Pause();
  void Resume();
  
  void HandleEvents(GameEngine* game);
  void Update(GameEngine* game);
  void Draw(GameEngine* game);
  
  static PlayState* Instance() {
    return &playstate;
  }
  
protected:
  PlayState() { }
  
private:
  // Objects/Object Pointers
  static PlayState playstate;
  
  Board* myBoard;
  
  Bag* bag;
  
  Tetrimino* aTetrimino;
  Tetrimino* nTetrimino;
  Tetrimino* hTetrimino;
  Tetrimino* bTetrimino;
  Tetrimino* gTetrimino;
  
  std::deque<int> queue; // used as Tetrimino queue
  
  Timer globalTimer;
  Timer playTimer;
  Timer fps;
  Timer update;
  
  SDL_Event event;
  
  // Surfaces
  SDL_Surface *background = NULL;
  SDL_Surface *boardSurface = NULL;
  SDL_Surface *boardTile = NULL;
  SDL_Surface *boardOutline = NULL;
  
  // Surfaces for block images
  SDL_Surface *cyanBlock = NULL;
  SDL_Surface *blueBlock = NULL;
  SDL_Surface *orangeBlock = NULL;
  SDL_Surface *yellowBlock = NULL;
  SDL_Surface *greenBlock = NULL;
  SDL_Surface *purpleBlock = NULL;
  SDL_Surface *redBlock = NULL;
  SDL_Surface *ghostBlock = NULL;
  
  // Message Surfaces

  
  // default font, font fg color and font bg color
  TTF_Font *font = NULL;
  SDL_Color fontFgColor = { 0, 0, 0 };
  SDL_Color fontBgColor = { 255, 255, 255 };

  
  // Enum
  
  enum GameState { Menu, Playing, GameOver, Paused };
  char *gameStateNames[4] = { "Menu", "Playing", "GameOver", "Paused" };
  enum type_t { active, fixed, next, held, ghost };

  // Variables
  bool justStarted = false;
  bool holdUsed = false;
  int frame = 0;
  int start_time = 0;
  int end_time = 0;
  int force_time = 1000;
  int linesCleared = 0;
  int score = 0;
  
  
  // Functions
  
  // Functions: Rendering
  void displayText(GameEngine* game, string text, Sint16 x, Sint16 y, Uint8 fgR, Uint8 fgG, Uint8 fgB, Uint8 bgR, Uint8 bgG, Uint8 bgB);
  void displayTimer(GameEngine* game, int time, int x, int y);
  void drawActiveTetrimino(GameEngine* game);
  void drawBlock(GameEngine* game, Block block, int type, int xOffset = 0, int yOffset = 0 );
  void drawBoard(GameEngine* game);
  void drawGhostTetrimino(GameEngine* game);
  void drawHeldTetrimino(GameEngine* game);
  void drawInterface(GameEngine* game);
  void drawNextContainer(GameEngine* game);
  void drawNextTetrimino(GameEngine* game, int whichTetrimino);
  void drawTetriminoQueue(GameEngine* game);
  bool loadAssets( GameEngine* game );
  
  // Functions: Input
  void interfaceInput(GameEngine* game);
  void movementInput();
  
  // Functions: Logic
  int checkLines();
  void deleteLine( int y );
  void dropLines( int y );
  void fillQueue();
  void holdTetrimino();
  bool isGameOver();
  bool lineIsFull( int y );
  void nextTetrimino();
  void storeTetrimino();
  
};

#endif /* defined(__Tetris__PlayState__) */