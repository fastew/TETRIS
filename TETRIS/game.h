#include "main.h"
#define left 75 
#define right 77 
#define up 72 
#define down 80 
#define space 32 
#define main_x 11
#define main_y 23
#define active_block -2 
#define ceilling -1     
#define empty 0         
#define wall 1
#define inactive_block 2 
#define mainn_x 3 
#define mainn_y 1 

int block[7][4][4][4];
void title();
void drawmap();
void resetmap();
void newblock();
int won[main_y][main_x];
int bon[main_y][main_x];
