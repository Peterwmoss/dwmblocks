// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"📆", "date '+%a %d-%m-%y %T'", 60, 0},

    {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},

    {"⌨", "setxkbmap -query | awk '/layout/{print $2}'", 120, 0},

    {"🌐", "hostname -i | sed 's/ *$//g'", 0, 1},

    {"🔊", "pamixer --get-volume-human | tr -d '%'", 0, 10},

    {"🌡", "sensors | awk '/^temp1:/{print $2}'", 15, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = '|';
