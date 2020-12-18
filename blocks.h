// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"  ", "uname -r", 60, 0},

    {"  ",
     "df -lh | grep \"/dev/nvme\" | awk '{print $3 \"/\" $2 \" - \" $5 \" "
     "used\"}'",
     60, 0},

    {"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},

    {"  ", "iw wlp2s0 info | grep ssid | cut -d ' ' -f 2", 15, 1},

    {" ", "/home/peter/.local/scripts/battery", 5, 0},

    {"  ", "xbacklight | awk -F '.' '{ print $1 }'", 0, 11},

    {"  ", "pulsemixer --get-volume | awk '{print $1}'", 0, 10},

    {"  ", "sensors | awk '/crit/{print $2}'", 5, 0},

    {"  ", "date '+%d-%m %T'", 1, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
