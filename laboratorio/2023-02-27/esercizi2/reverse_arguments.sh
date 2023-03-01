#!/usr/bin/env bash

# nargs=$#
# declare -a to_print
# # echo "Number of arguments: $nargs"
# i=$(( $nargs ))
# while [[ $1 != "" ]]; do
#     # echo "Argument $i: ${!i}"
#     to_print[$i]=$1
#     shift
#     (( i-- ))
# done
# for i in "${to_print[@]}"; do
#     echo $i
# done

echo $@ |tr ' ' '\n'|tac|tr '\n' ' '



# while [ $i -gt 0 ]; do
#     # echo "Argument $i: ${!i}"
#     echo "${!i}";
#     (( i-- ))
# done
