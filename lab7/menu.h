#ifndef __MENU_H__
#define __MENU_H__


int MenuConfig(char* cmd, char* desc, int (*handler)(int argc, char* argv[]));


int ExecuteMenu();

#endif
