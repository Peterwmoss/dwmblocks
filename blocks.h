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

    {"  ", "checkupdates | wc -l", 60, 0},

    {" ⌨ ", "/home/peter/.local/scripts/kbd && setxkbmap -query | awk '/layout/{print $2}'", 60, 0},

    {"  ", "ip address show $(ip link show | awk '/ (w|e).* state UP/{print $2}' | sed -e 's/://') | awk '/inet /{print $2}' | sed -e 's/\\/.*//'", 5, 0},

    {" 墳 ", "pamixer --get-volume-human | tr -d '%'", 60, 10},

    {" ", "/home/peter/.local/scripts/battery", 5, 0},

    {"  ", "sensors | awk '/^Package/{print $4}'", 5, 0},

    {"  ", "date '+%d-%m %H:%M'", 1, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
