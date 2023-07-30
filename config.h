/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = { "FiraCode Nerd Font:size=15", "Font Awesome 6 Free:size=15" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char nord_dark1[]         = "#2e3440";
static const char nord_dark2[]         = "#3b4252";
static const char nord_light1[]        = "#5e81ac";
static const char nord_light2[]        = "#81a1c1";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord_dark1, nord_light1},
	[SchemeSel] = { nord_light1, nord_dark1},
	[SchemeOut] = { "#000000", nord_light2},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
