int
width_pwrl_tags(Bar *bar, BarArg *a)
{
	int w, i;
	int plw = drw->fonts->h / 2 + 1;
	Client *c;
	unsigned int occ = 0;
	for (c = bar->mon->clients; c; c = c->next)
		occ |= c->tags == 255 ? 0 : c->tags;

	for (w = 0, i = 0; i < NUMTAGS; i++) {
		if (!(occ & 1 << i || bar->mon->tagset[bar->mon->seltags] & 1 << i))
			continue;
		w += TEXTW(tagicon(bar->mon, i)) + plw;
	}
	return w + lrpad;
}

int
draw_pwrl_tags(Bar *bar, BarArg *a)
{
	int x, w;
	int invert;
	int plw = drw->fonts->h / 2 + 1;
	unsigned int i, occ = 0, urg = 0;
	char *icon;
	Client *c;
	Clr *prevscheme, *nxtscheme;

	for (c = bar->mon->clients; c; c = c->next) {
		occ |= c->tags == 255 ? 0 : c->tags;
		if (c->isurgent)
			urg |= c->tags;
	}
	x = a->x;
	prevscheme = scheme[SchemeNorm];
	for (i = 0; i < NUMTAGS; i++) {
		/* do not draw vacant tags */
		if (!(occ & 1 << i || bar->mon->tagset[bar->mon->seltags] & 1 << i))
			continue;

		icon = tagicon(bar->mon, i);
		invert = 0;
		w = TEXTW(icon);
		if (urg & 1 << i) {
			drw_settrans(drw, prevscheme, (nxtscheme = scheme[bar->mon->tagset[bar->mon->seltags] & 1 << i ? SchemeSel : SchemeUrg]));
		} else {
			drw_settrans(drw, prevscheme, (nxtscheme = scheme[bar->mon->tagset[bar->mon->seltags] & 1 << i ? SchemeSel : SchemeNorm]));
		}
		drw_arrow(drw, x, a->y, plw, a->h, 1, 0);
		x += plw;
		drw_setscheme(drw, nxtscheme);
		drw_text(drw, x, a->y, w, a->h, lrpad / 2, icon, invert, False);
		drawindicator(bar->mon, NULL, occ, x, a->y, w, a->h, i, -1, invert, tagindicatortype);
		x += w;
		prevscheme = nxtscheme;
	}
	nxtscheme = scheme[SchemeNorm];

	drw_settrans(drw, prevscheme, nxtscheme);
	drw_arrow(drw, x, a->y, plw, a->h, 1, 0);
	return 1;
}

int
click_pwrl_tags(Bar *bar, Arg *arg, BarArg *a)
{
	int i = 0, x = lrpad / 2;
	int plw = drw->fonts->h / 2 + 1;
	Client *c;
	unsigned int occ = 0;
	for (c = bar->mon->clients; c; c = c->next)
		occ |= c->tags == 255 ? 0 : c->tags;

	do {
		if (!(occ & 1 << i || bar->mon->tagset[bar->mon->seltags] & 1 << i))
			continue;
		x += TEXTW(tagicon(bar->mon, i)) + plw;
	} while (a->x >= x && ++i < NUMTAGS);
	if (i < NUMTAGS) {
		arg->ui = 1 << i;
	}
	return ClkTagBar;
}

