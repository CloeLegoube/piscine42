#!/bin/sh
find -E . -regex ".*[.]sh" | rev | cut -d / -f1 | cut -d . -f2- | rev
