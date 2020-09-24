static const char *colorname[] = {
	"#0D0D0E",
	"#635C58",
	"#9F4E3E",
	"#A79162",
	"#D6BC69",
	"#7F7785",
	"#A49F9D",
	"#e7dac9",

	"#a1988c",
	"#635C58",
	"#9F4E3E",
	"#A79162",
	"#D6BC69",
	"#7F7785",
	"#A49F9D",
	"#e7dac9",
	[255] = 0,
	/* more colors can be added after 255 to use with DefaultXX */
	"#e7dac9", /* 256 -> cursor */
	"#0D0D0E", /* 257 -> rev cursor*/
	"#0D0D0E", /* 258 -> bg */
	"#e7dac9", /* 259 -> fg */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
