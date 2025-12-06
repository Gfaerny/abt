#include "../include/ui.h"
#include <cstdio>

struct winsize winsize_obj;

uint8_t get_terminal_column() 
{
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &winsize_obj);
  return winsize_obj.ws_col;
}

uint8_t get_terminal_row() 
{
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &winsize_obj);
  return winsize_obj.ws_row;
}

void main_ui_print(uint8_t terminal_column_size, uint8_t terminal_row_size) 
{


  /*first column */
  for (uint8_t i = 0; i < (terminal_column_size / 2); ++i) 
  {
    PRINT_SPACE
  }

  PRINT_ABT
  
  for (uint8_t i = 0; i < (terminal_column_size / 2); ++i) 
  {
    PRINT_SPACE
  }


  
}
