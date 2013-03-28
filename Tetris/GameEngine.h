//
//  GameEngine.h
//  Tetris
//
//  Created by Fielding Johnston on 3/25/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#ifndef __Tetris__GameEngine__
#define __Tetris__GameEngine__

#include "SDL.h"
#include <vector>

class GameState;

class GameEngine
{
public:
  
  void Init(const char* title, int width=640, int height=480, int bpp=0, bool fullscreen=false, bool noframe=true);
  void Cleanup();
  
  void ChangeState( GameState* state );
  void PushState( GameState* state );
  void PopState();
  void PopStateThenChangeState( GameState* state );
  
  void HandleEvents();
  void Update();
  void Draw();
  
  bool Running() { return running; }
  void Quit() { running = false; }
  
  SDL_Surface *load_image( std::string filename );
  void apply_surface( int x, int y, SDL_Surface *source, SDL_Surface *destination, SDL_Rect *clip = NULL );
  
  SDL_Surface* screen;
  
private:
  // state stack
  std::vector<GameState*> states;
  
  bool running;
  bool fullscreen;
};


#endif /* defined(__Tetris__GameEngine__) */