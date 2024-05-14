#!/bin/sh

# Not used by default, install xmenu and set it up if you want to

cat <<EOF | xmenu
[]= Tiled Layout	0
><> Floating Layout	1
[M] Monocle Layout	2
[=] Grid Layout		3
EOF

