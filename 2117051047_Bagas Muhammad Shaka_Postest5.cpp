#include <ncurses.h>
using namespace std;

int main(){
	int npm;
	char nama[521];
	
	initscr();
	scanw("%520[^\n]", nama);
	scanw("%d", &npm);
	
	printw("\n");
	
    printw("Nama :%s \n", nama);
	printw("Npm  :%d \n", npm);
	
	refresh();
	
	getch();
	
	endwin();	
}
