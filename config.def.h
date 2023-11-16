/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;
static int centered = 1;
static int min_width = 600;

/* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"RobotoMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cecdc3", "#100f0f" },
	[SchemeSel] = { "#cecdc3", "#205ea6" },
	[SchemeOut] = { "#000000", "#66800b" },
  [SchemeMid] = { "#575653", "#100f0f" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 4;
static unsigned int columns    = 2;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 2;
static unsigned int min_lineheight = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
