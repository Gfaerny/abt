#pragma once

#include <cstdint>
#include <exception>
#include <print>
#include <sys/ioctl.h>
#include <unistd.h>
#include <filesystem>


#define PRINT_SPACE std::printf("");
#define PRINT_ABT std::printf("ABT");

#define ANSI_COLOR_RED_CODE     "\x1b[31m"
#define ANSI_COLOR_GREEN_CODE   "\x1b[32m"
#define ANSI_COLOR_YELLOW_CODE  "\x1b[33m"
#define ANSI_COLOR_BLUE_CODE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA_CODE "\x1b[35m"
#define ANSI_COLOR_CYAN_CODE    "\x1b[36m"
#define ANSI_COLOR_RESET_CODE   "\x1b[0m"

uint8_t get_terminal_row();
uint8_t get_terminal_column();
void main_ui_print(uint8_t terminal_column_size, uint8_t terminal_row_size);

