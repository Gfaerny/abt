#include "../include/ui.h"
#include "../include/read_file.h"
#include <cstdio>
#include <filesystem>
#include <fstream>


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

  if(std::filesystem::exists(".abt"))
  {
    std::ofstream ofstream_obj;
    ofstream_obj.open(".abt");
    if(!ofstream_obj.is_open())
    {
      std::printf("abt massage [error] : abt find .abt file in this directory but it can't be opened. \n");
      return ;
    }
  }

  /*first column */
  for (uint8_t i = 0; i < ((terminal_column_size / 2) - 2); ++i) 
  {
    PRINT_SPACE
  }

  PRINT_ABT
  
  for (uint8_t i = 0; i < ((terminal_column_size / 2) - 2); ++i) 
  {
    PRINT_SPACE
  }

/// there we have to open abt file 

  if(abtfile_exists)
  {
    if(abtfile_section_des_exist)
    {
//  print the ui for it
    }
    if(abtfile_section_lastg_exist)
    {
//  print the ui for it
    }
  }
  
}
