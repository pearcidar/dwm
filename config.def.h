
<<<<<<< HEAD
/* Appearance */
static const unsigned int borderpx       = 3;  /* border pixel of windows */
static const unsigned int snap           = 32; /* snap pixel */
static const int swallowfloating         = 0;  /* 1 means swallow floating windows by default */
static const int scalepreview            = 4;  /* Tag preview scaling */
=======
/* appearance */
static const unsigned int borderpx       = 3;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 0;   /* 1 means swallow floating windows by default */
static const int scalepreview            = 4;        /* Tag preview scaling */
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
static const unsigned int gappih         = 5;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 5;  /* vert inner gap between windows */
static const unsigned int gappoh         = 5;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 5;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;  /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
static const int showbar                 = 1;  /* 0 means no bar */
static const int topbar                  = 1;  /* 0 means bottom bar */
static const int bar_height              = 0;  /* 0 means derive from font, >= 1 explicit height */
static const int vertpad                 = 10; /* vertical padding of bar */
static const int sidepad                 = 10; /* horizontal padding of bar */

/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = 'A';
static const char buttonbar[]            = " ";
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */

/* alt-tab configuration */
static const unsigned int tabmodkey        = 0x40; /* (Alt) when this key is held down the alt-tab functionality stays active. Must be the same modifier as used to run alttabstart */
static const unsigned int tabcyclekey      = 0x17; /* (Tab) when this key is hit the menu moves one position forward in client stack. Must be the same key as used to run alttabstart */
static const unsigned int tabposy          = 1;    /* tab position on Y axis, 0 = top, 1 = center, 2 = bottom */
static const unsigned int tabposx          = 1;    /* tab position on X axis, 0 = left, 1 = center, 2 = right */
static const unsigned int maxwtab          = 600;  /* tab menu width */
static const unsigned int maxhtab          = 23;  /* tab menu height */

/* Indicators: see patch/bar_indicators.h for options */
static int tagindicatortype              = INDICATOR_CLIENT_DOTS;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;

static const int quit_empty_window_count = 0;   /* only allow dwm to quit if no (<= count) windows are open */
<<<<<<< HEAD

/* Fonts */
static const char *fonts[]               = { "FantasqueSansM Nerd Font:size=10:style=medium" };
static const char dmenufont[]            = "FantasqueSansM Nerd Font:size=10";

/* Colorschemes (Uncomment the one you like or add to your liking) */

// Tokyo Night
=======
static const char *fonts[]               = { "FantasqueSansM Nerd Font:size=10:style=medium" };
static const char dmenufont[]            = "FantasqueSansM Nerd Font:size=10";

>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
/*
static char black[] =	 "#191724";
static char black2[] = 	 "#1f2335";
static char gray[] =     "#44415a";
static char white[] =    "#c0caf7";
static char blue[] = 	 "#7aa2f7";
static char red[] = 	 "#f7768e";
static char yellow[] = 	 "#e0af78";
static char green[] = 	 "#9ece6a";
static char purple[] =	 "#bb9af7";
static char cyan[] = 	 "#7dcfff";
*/

<<<<<<< HEAD
/* Rose Pine */
=======

/*
static char black[] =	 "#0C012c";
static char black2[] = 	 "#0c012c";
static char gray[] =     "#755282";
static char gray2[] =     "#a07b80";
static char gray3[] =     "#a07b80";
static char gray4[] =     "#0c012c";
static char white[] =    "#e5b0b8";
static char blue[] = 	 "#dd6777";
static char red[] = 	 "#923864";
static char yellow[] = 	 "#AE5477";
static char green[] = 	 "#8e4d77";
static char purple[] =	 "#755282";
static char cyan2[] = 	 "#955f8e";
static char cyan[] = 	 "#955f83";
*/
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
static char black[] =	 "#090618";
static char black2[] = 	 "#1f1f28";
static char gray[] =     "#403c58";
static char gray2[] =     "#56526e";
static char gray3[] =     "#524f67";
static char gray4[] =     "#2a283e";
static char white[] =    "#dcd7ba";
static char blue[] = 	 "#7e9cd8";
static char red[] = 	 "#c34043";
static char yellow[] = 	 "#e0af78";
static char green[] = 	 "#98bb6c";
static char purple[] =	 "#957fb8";
static char cyan2[] = 	 "#7dcfff";
static char cyan[] = 	 "#7aa89f";

<<<<<<< HEAD
/* Transparency */
=======
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6

static const unsigned int baralpha = 0xff;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidNorm]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidSel]       = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
	[SchemeScratchSel]  = { OPAQUE, baralpha, borderalpha },
	[SchemeScratchNorm] = { OPAQUE, baralpha, borderalpha },
};

/* Colors */

static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { yellow,           black,           black,               purple },
	[SchemeSel]          = { black,            yellow,          yellow,               blue },
	[SchemeTitleNorm]    = { cyan,            gray2,           black,               black },
	[SchemeTitleSel]     = { cyan,            gray,           black,               black },
	[SchemeTagsNorm]     = { white,            black,           black,               black },
	[SchemeTagsSel]      = { yellow,            black2,             red,                  red },
	[SchemeHidNorm]      = { red,            gray4,           black,               black },
	[SchemeHidSel]       = { cyan2,             gray3,           black,               black },
	[SchemeUrg]          = { black,           red,              red,                  red },
	[SchemeScratchSel]  =  { black,           blue,             black,               blue },
	[SchemeScratchNorm] =  { black,           red,              black,               green },
};


static const char *layoutmenu_cmd = "layoutmenu.sh";

/* Scratchpads */
static const char *scratchpadcmd[] = {"s", "kitty", "--name", "spterm", NULL};

<<<<<<< HEAD
=======
static const char *scratchpadcmd[] = {"s", "kitty", "--name", "spterm", NULL};
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6

/* Tags */
static char *tagicons[][NUMTAGS] =
{
//  	[DEFAULT_TAGS]        = {"󰨓", "󰨓", "󰨓", "󰨓", "󰨓", "󰨓", "󰨓", "󰨓", "󰨓"},
	[DEFAULT_TAGS]        = { "一", "二", "三", "四", "五", "六", "七", "八", "九" },
//	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};

/* Window Rules */
static const Rule rules[] = {
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class = "Gimp", .tags = 1 << 4, .isterminal = 1, .isfloating = 1)
	RULE(.class = "Firefox", .tags = 1 << 7, .isterminal = 1)
	RULE(.class = "eww", .tags = 1 << 7, .isfloating = 1, .isterminal = 1)
<<<<<<< HEAD
	RULE(.class = "Eww", .isfloating = 1, .isterminal = 0)
=======
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
	RULE(.class = "St", .isterminal = 1)
	RULE(.class = "kitty", .isterminal = 1)
	RULE(.class = "transmission-gtk", .tags = 1 << 7, .isterminal = 1)
	RULE(.class = "fontmatrix", .tags = 1 << 7, .isfloating = 1 )
	RULE(.instance = "spterm", .scratchkey = 's', .isfloating = 1, .isterminal = 1)
};


/* Bar Rules */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                 drawfunc                clickfunc                hoverfunc                name */
//	{ -1,        0,     BAR_ALIGN_LEFT,   width_stbutton,           draw_stbutton,          click_stbutton,          NULL,                    "statusbutton" },
//	{  0,        0,     BAR_ALIGN_LEFT,   width_pwrl_tags,          draw_pwrl_tags,         click_pwrl_tags,         NULL,                    "powerline_tags" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,               draw_tags,              click_tags,              hover_tags,              "tags" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,            draw_systray,           click_systray,           NULL,                    "systray" },
	{ -1,        0,     BAR_ALIGN_RIGHT,   width_ltsymbol,           draw_ltsymbol,          click_ltsymbol,          NULL,                    "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status2d,           draw_status2d,          click_statuscmd,         NULL,                    "status2d" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_awesomebar,         draw_awesomebar,        click_awesomebar,        NULL,                    "awesomebar" },
};


/* Tile Settings */
static const float mfact     = 0.5; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

/* Layouts */
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[T]",      tile },    /* first entry is default */
	{ "[F]",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "[B]",      bstack },
	{ "[G]",      gaplessgrid },
};


/* Key Definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* Helper to spawn shellcommands, use "SHCMD(<command>)" */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */


<<<<<<< HEAD
/* Dmenu Settings */
=======
//dmenu_run -l 15 -fn "FantasqueSansM Nerd Font:pixelsize=14:style=bold italic" -X 1013 -W 350 -Y 451 -sb "#e6c384" -p "󰛔 "


>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-h",  "15",
	"-bw", "3",
        "-W",  "350",
	"-p",  "󰛔 ",
	"-l",  "15",
	"-Y",  "451",
	"-X",  "1013",
	"-fn", "FantasqueSansM Nerd Font:pixelsize=14:style=bold italic",
	"-sb", "#e6c384",
	"-nf", white,
	"-sf", black,
	NULL
};
<<<<<<< HEAD

/* General Program Variables */
=======
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
static const char *termcmd[]  = { "kitty", NULL };
static const char *browsecmd[] = { "firefox", NULL };
static const char *soundcontrolcmd[] = { "pavucontrol", NULL };
static const char *scrotcmd[] = { "scrot", NULL };
static const char *mutecmd[] = { "pactl", "set-sink-mute", "0", "toggle", NULL };
static const char *volupcmd[] = { "pactl", "set-sink-volume", "0", "+5%", NULL };
static const char *voldowncmd[] = { "pactl", "set-sink-volume", "0", "-5%", NULL };

/* This defines the name of the executable that handles the bar (used for signalling purposes) */
#define STATUSBAR "slstatus"


/* Key Bindings */
static const Key keys[] = {
	/* modifier                     key        function                argument */
	{ MODKEY,                       XK_p,          spawn,                  {.v = dmenucmd } },
	{ MODKEY,             		    XK_Return,     spawn,                  {.v = termcmd } },
	{ MODKEY|ShiftMask,             XK_s,          spawn,                  {.v = soundcontrolcmd } },
    { MODKEY|ShiftMask,             XK_p,          spawn,                  {.v = scrotcmd } },
    { MODKEY,                       XK_w,          spawn,                  {.v = browsecmd } },
    { Mod1Mask,                     XK_l,          spawn,                  SHCMD("emacsclient -c -a 'emacs'") },
    { Mod1Mask|ShiftMask,           XK_w,          spawn,                  SHCMD("nitrogen") },

<<<<<<< HEAD
    /* Restart Slstatus */
    { Mod1Mask,                     XK_r,          spawn,                  SHCMD("killall slstatus && slstatus") },

    /* Volume Controls */
	{ MODKEY,                       XK_F2,         spawn,                  {.v = voldowncmd } },
	{ MODKEY,                       XK_F3,         spawn,                  {.v = volupcmd } },
	{ MODKEY|ShiftMask,             XK_F4,         spawn,                  {.v = mutecmd } },
=======
	{ MODKEY|ShiftMask,             XK_s,          spawn,          {.v = soundcontrolcmd } },
        { MODKEY|ShiftMask,             XK_p,          spawn,          {.v = scrotcmd } },
        { MODKEY,                       XK_w,         spawn,          {.v = browsecmd } },
        { Mod1Mask,                     XK_F1,      spawn,          SHCMD("kitty cmus") },
        { Mod1Mask|ShiftMask,           XK_w,      spawn,          SHCMD("nitrogen") },
        { Mod1Mask,                     XK_r,      spawn,          SHCMD("killall slstatus && slstatus") },
        { Mod1Mask,                     XK_l,      spawn,          SHCMD("emacsclient -c -a 'emacs'") },

	{ MODKEY,                       XK_F2,     spawn,          {.v = voldowncmd } },
	{ MODKEY,                       XK_F3,     spawn,          {.v = volupcmd } },
	{ MODKEY|ShiftMask,             XK_F4,      spawn,          {.v = mutecmd } },
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6

    /* Master-Stack Control */
	{ MODKEY,                       XK_b,          togglebar,              {0} },
	{ MODKEY,                       XK_j,          focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_k,          focusstack,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_j,          rotatestack,            {.i = +1 } },
	{ MODKEY|Mod1Mask,              XK_k,          rotatestack,            {.i = -1 } },
	{ MODKEY,                       XK_i,          incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_d,          incnmaster,             {.i = -1 } },

    /* Window Size manipulation in layouts */
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },

    /* Move Floating Windows */
	{ MODKEY,   	                XK_Down,       moveresize,             {.v = "0x 25y 0w 0h" } },
	{ MODKEY,   	                XK_Up,         moveresize,             {.v = "0x -25y 0w 0h" } },
	{ MODKEY,   	                XK_Right,      moveresize,             {.v = "25x 0y 0w 0h" } },
	{ MODKEY,   	                XK_Left,       moveresize,             {.v = "-25x 0y 0w 0h" } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_Down,       moveresize,             {.v = "0x 0y 0w 25h" } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_Up,         moveresize,             {.v = "0x 0y 0w -25h" } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_Right,      moveresize,             {.v = "0x 0y 25w 0h" } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_Left,       moveresize,             {.v = "0x 0y -25w 0h" } },

	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY,                       XK_Return,     zoom,                   {0} },

    /* Vanitygaps Controls */
	{ MODKEY|Mod1Mask,              XK_u,          incrgaps,               {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_u,          incrgaps,               {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_i,          incrigaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_o,          incrogaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_o,          incrogaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_6,          incrihgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_7,          incrivgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_8,          incrohgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_9,          incrovgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_0,          togglegaps,             {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,          defaultgaps,            {0} },

    /* Alt-tab lol */
	{ Mod1Mask,                     XK_Tab,        alttabstart,            {0} },

	{ MODKEY|ControlMask,           XK_z,          showhideclient,         {0} },

    /* Kill Window */
	{ MODKEY|ShiftMask,             XK_q,          killclient,             {0} },

    /* Exit Dwm / Restart Dwm Respectively */
	{ MODKEY|ShiftMask,             XK_e,          quit,                   {0} },
	{ MODKEY|ShiftMask,	            XK_r,          quit,                   {1} },

    /* Not used */
	{ MODKEY|ShiftMask,             XK_F5,         xrdb,                   {.v = NULL } },

    /* Set Tile, Floating and Monacle Layout */
	{ MODKEY,                       XK_t,          setlayout,              {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,          setlayout,              {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,          setlayout,              {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,      setlayout,              {0} },
	{ MODKEY|ShiftMask,             XK_space,      togglefloating,         {0} },

    /* Toggle Scatchpads on and off */
	{ MODKEY,                       XK_grave,      togglescratch,          {.v = scratchpadcmd } },
	{ MODKEY|ControlMask,           XK_grave,      setscratch,             {.v = scratchpadcmd } },
	{ MODKEY|ShiftMask,             XK_grave,      removescratch,          {.v = scratchpadcmd } },

    /* Stick Windows */
	{ MODKEY|ShiftMask|ControlMask, XK_s,          togglesticky,           {0} },

    /* Monitor / Tag manipulation */
	{ MODKEY,                       XK_0,          view,                   {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~0 } },
	{ MODKEY,                       XK_comma,      focusmon,               {.i = -1 } },
	{ MODKEY,                       XK_period,     focusmon,               {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },

    /* Change Borderpx during Runtime */
	{ MODKEY|ControlMask,           XK_minus,      setborderpx,            {.i = -1 } },
<<<<<<< HEAD
	{ MODKEY|ShiftMask|ControlMask, XK_plus,       setborderpx,            {.i = +1 } },
=======
	{ MODKEY|ShiftMask|ControlMask,           XK_plus,       setborderpx,            {.i = +1 } },
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
	{ MODKEY|ControlMask,           XK_numbersign, setborderpx,            {.i = 0 } },

    /* Tags */
	TAGKEYS(                        XK_1,                                  0)
<<<<<<< HEAD
    TAGKEYS(                        XK_2,                                  1)
=======
          TAGKEYS(                        XK_2,                                  1)
>>>>>>> 4c4fdc125c2460860a4e0caaff450feabd70f2b6
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
	TAGKEYS(                        XK_9,                                  8)
};

/* Button Definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkButton,            0,                   Button1,        spawn,          SHCMD("sh -c ~/.files/scripts/xmenu.sh") },
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button1,        spawn,          SHCMD("sh -c ~/.files/reps/dwm/dwm-final/layoutmenu.sh") },
	{ ClkLtSymbol,          0,                   Button3,        layoutmenu,     {0} },
	{ ClkWinTitle,          0,                   Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,                   Button3,        showhideclient, {0} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button1,        sigstatusbar,   {.i = 1 } },
	{ ClkStatusText,        0,                   Button2,        sigstatusbar,   {.i = 2 } },
	{ ClkStatusText,        0,                   Button3,        sigstatusbar,   {.i = 3 } },
	/* placemouse options, choose which feels more natural:
	 *    0 - tiled position is relative to mouse cursor
	 *    1 - tiled postiion is relative to window center
	 *    2 - mouse pointer warps to window center
	 *
	 * The moveorplace uses movemouse or placemouse depending on the floating state
	 * of the selected client. Set up individual keybindings for the two if you want
	 * to control these separately (i.e. to retain the feature to move a tiled window
	 * into a floating position).
	 */
	{ ClkClientWin,         MODKEY,              Button1,        moveorplace,    {.i = 1} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button1,        dragmfact,      {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};

/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signame> [<type> <value>]"` */
static const Signal signals[] = {
	/* signum                    function */
	{ "focusstack",              focusstack },
	{ "setmfact",                setmfact },
	{ "togglebar",               togglebar },
	{ "incnmaster",              incnmaster },
	{ "togglefloating",          togglefloating },
	{ "focusmon",                focusmon },
	{ "rotatestack",             rotatestack },
	{ "setcfact",                setcfact },
	{ "tagmon",                  tagmon },
	{ "zoom",                    zoom },
	{ "incrgaps",                incrgaps },
	{ "incrigaps",               incrigaps },
	{ "incrogaps",               incrogaps },
	{ "incrihgaps",              incrihgaps },
	{ "incrivgaps",              incrivgaps },
	{ "incrohgaps",              incrohgaps },
	{ "incrovgaps",              incrovgaps },
	{ "togglegaps",              togglegaps },
	{ "defaultgaps",             defaultgaps },
	{ "setgaps",                 setgapsex },
	{ "view",                    view },
	{ "viewall",                 viewallex },
	{ "viewex",                  viewex },
	{ "toggleview",              toggleview },
	{ "showhideclient",          showhideclient },
	{ "togglesticky",            togglesticky },
	{ "setborderpx",             setborderpx },
	{ "toggleviewex",            toggleviewex },
	{ "tag",                     tag },
	{ "tagall",                  tagallex },
	{ "tagex",                   tagex },
	{ "toggletag",               toggletag },
	{ "toggletagex",             toggletagex },
	{ "killclient",              killclient },
	{ "xrdb",                    xrdb },
	{ "quit",                    quit },
	{ "setlayout",               setlayout },
	{ "setlayoutex",             setlayoutex },
};

static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
	IPCCOMMAND( focusmon, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( focusstack, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incnmaster, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( killclient, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( quit, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setlayoutsafe, 1, {ARG_TYPE_PTR} ),
	IPCCOMMAND( setmfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( setstatus, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( tag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( tagmon, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( togglebar, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglefloating, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( toggletag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( toggleview, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( view, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( zoom, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setcfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( moveresize, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( rotatestack, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( setborderpx, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( showhideclient, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglesticky, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( incrgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrigaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrogaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrihgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrivgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrohgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrovgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( togglegaps, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( defaultgaps, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setgapsex, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( xrdb, 1, {ARG_TYPE_NONE} ),
};

static char c000000[]                    = "#000000"; // placeholder value
static char normfgcolor[]                = "#bbbbbb";
static char normbgcolor[]                = "#222222";
static char normbordercolor[]            = "#444444";
static char normfloatcolor[]             = "#db8fd9";
static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#005577";
static char selbordercolor[]             = "#005577";
static char selfloatcolor[]              = "#005577";
static char titlenormfgcolor[]           = "#bbbbbb";
static char titlenormbgcolor[]           = "#222222";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";
static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#005577";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";
static char tagsnormfgcolor[]            = "#bbbbbb";
static char tagsnormbgcolor[]            = "#222222";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";
static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#005577";
static char tagsselbordercolor[]         = "#005577";
static char tagsselfloatcolor[]          = "#005577";
static char hidnormfgcolor[]             = "#005577";
static char hidselfgcolor[]              = "#227799";
static char hidnormbgcolor[]             = "#222222";
static char hidselbgcolor[]              = "#222222";
static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#222222";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";
static char scratchselfgcolor[]          = "#FFF7D4";
static char scratchselbgcolor[]          = "#77547E";
static char scratchselbordercolor[]      = "#894B9F";
static char scratchselfloatcolor[]       = "#894B9F";
static char scratchnormfgcolor[]         = "#FFF7D4";
static char scratchnormbgcolor[]         = "#664C67";
static char scratchnormbordercolor[]     = "#77547E";
static char scratchnormfloatcolor[]      = "#77547E";
