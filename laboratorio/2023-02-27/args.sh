#!/usr/bin/env bash
nargs=$#
while [[ $1 != "" ]]; do
	echo "ARG=$1"
	shift
done
