/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#a3be8c",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
