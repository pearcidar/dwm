void
attachx(Client *c)
{
	Client *at;

	if (c->idx > 0) { /* then the client has a designated position in the client list */
		for (at = c->mon->clients; at; at = at->next) {
			if (c->idx < at->idx) {
				c->next = at;
				c->mon->clients = c;
				return;
			} else if (at->idx <= c->idx && (!at->next || c->idx <= at->next->idx)) {
				c->next = at->next;
				at->next = c;
				return;
			}
		}
	}

	if (!(c->mon->sel == NULL || c->mon->sel == c->mon->clients || c->mon->sel->isfloating)) {
		for (at = c->mon->clients; at->next != c->mon->sel; at = at->next);
		c->next = at->next;
		at->next = c;
		return;
	}
	attach(c); // master (default)
}

