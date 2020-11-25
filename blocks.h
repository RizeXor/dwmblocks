//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        "date '+%b %d %a %I:%M %p'",					                    10,		0},
	{"Mem:",    "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	        30,		0},
	{"Cpu:",    "/home/rize/git/dwmblocks/scripts/cpu.sh",	                        5,		0},
	{"",        "python3 /home/rize/git/dwmblocks/scripts/battery.py",		        5,		0},
	{"",        "pamixer --get-volume",					                            3,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
