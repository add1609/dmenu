/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;

static const char *fonts[] = {
	"monospace:size=12",
	"JoyPixels:pixelsize=12:antialias=true:autohint=true"
};
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt = NULL;


static const char *colors[SchemeLast][2] = {
	[SchemeNorm]	= {"#bbbbbb",	"#222222"},
	[SchemeSel]	= {"#eeeeee",	"#005577"},
	[SchemeOut]	= {"#000000",	"#00ffff"},
};
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm]	= {fgalpha,	bgalpha},
	[SchemeSel]	= {fgalpha,	bgalpha},
	[SchemeOut]	= {fgalpha,	bgalpha},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

