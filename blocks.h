// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"  ", "uname -r", 60, 0},

    {"  ",
     "df -lh | grep \"/dev/nvme\" | awk '{print $3 \"/\" $2 \" - \" $5 \" "
     "used\"}'",
     60, 0},

    {"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},

    {" ⌨ ", "setxkbmap -query | awk '/layout/{print $2}'", 120, 0},

    {"  ", "ip address show | grep 'inet ' | grep 'inet .[^2][^7]' | awk '{print $2}' | sed 's/\\/24//g'", 15, 1},

    {" 🔊 ", "pamixer --get-volume-human | tr -d '%'", 0, 10},

    {" ", "/home/peter/.local/scripts/battery", 30, 0},

    {"  ", "sensors | awk '/^Package/{print $4}'", 5, 0},

    {"  ", "date '+%d-%m %T'", 1, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
