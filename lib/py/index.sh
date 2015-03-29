#!/bin/sh

touch $1
echo -e "#!/usr/bin/env python\n# -*- coding: utf-8 -*-" > $1
chmod 755 $1
