#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<Windows.h>

#define ROW 3
#define COL 3

void InitBoard(char board[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
void PlayerMove(char board[][COL], int row, int col);
void CmptMove(char board[][COL], int row, int col);
char IsWin(char board[][COL], int row, int col);
int IsFull(char board[][COL], int row, int col);


#endif