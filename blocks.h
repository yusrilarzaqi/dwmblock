//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/



	{" ", "$HOME/dwmblocks/script/wlan.sh",	1,	0},
	{"", "/home/yusril/dwmblocks/script/brightness.sh", 1, 0},
	{"", "/home/yusril/dwmblocks/script/temp.sh", 1, 0},
	{" ", "/home/yusril/dwmblocks/script/volume", 1, 0},
	{" ", "/home/yusril/dwmblocks/script/battery.sh", 1, 0},
	{" ", "/home/yusril/dwmblocks/script/script.sh", 1, 0},
	//{"", "/home/yusril/dwmblocks/script/date.sh", 1, 0},
	{"", "/home/yusril/dwmblocks/script/date.sh", 1, 0},








//	{"", "date '+%a %m %G %I:%M%p:%S'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
