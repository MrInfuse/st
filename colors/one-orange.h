static const char *colorname[] = {
	"#282828", /* hard contrast: #1d2021 / soft contrast: #32302f */
	"#cc241d",
	"#98971a",
	"#d79921",
	"#458588",
	"#b16286",
	"#689d6a",
	"#a89984",
	"#928374",
	"#fb4934",
	"#b8bb26",
	"#fabd2f",
	"#83a598",
	"#d3869b",
	"#8ec07c",
	"#ebdbb2",
	[255] = 0,
	/* more colors can be added after 255 to use with DefaultXX */
	"#ffffff", /* 256 -> cursor */ // Originally it was #add8e6
	"#555555", /* 257 -> rev cursor*/
	"#0c0c0c", /* 258 -> bg */  // Originally it was #282828 (default gruvbox background)
	"#ebdbb2", /* 259 -> fg */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
