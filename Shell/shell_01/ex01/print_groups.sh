#!/bin/sh

groups $FT_USER | sed -z 's/ /,/g' | tr -d '\n'