void
setborderpx(const Arg *arg)
{
	Client *c;
	Monitor *m = selmon;
	Bar *bar;
	int prev_borderpx = m->borderpx;
	m->borderpx = arg->i
		? MAX(m->borderpx + arg->i, 0)
		: m->borderpx == borderpx
		? 0
		: borderpx;
	int delta = 2 * (m->borderpx - prev_borderpx);

	for (bar = m->bar; bar; bar = bar->next) {
		bar->bh = bar->bh - 2 * bar->borderpx + 2 * m->borderpx;
		bar->borderpx = m->borderpx;
	}
	updatebarpos(m);
	for (bar = m->bar; bar; bar = bar->next)
		XMoveResizeWindow(dpy, bar->win, bar->bx, bar->by, bar->bw, bar->bh);

	for (c = m->clients; c; c = c->next) {
		c->bw = m->borderpx;
		if (HIDDEN(c))
			continue;
		if (!c->isfloating && m->lt[m->sellt]->arrange)
			continue;

		resizeclient(c, c->x, c->y, c->w - delta, c->h - delta);
	}
	arrange(m);
}
