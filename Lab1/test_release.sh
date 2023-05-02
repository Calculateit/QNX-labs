#!/bin/sh
right_result="Daragan Dmitrii I993"

result=$(./main_release)
if [[ $result = $right_result ]]
then
	echo "The program has successfully completed!"
else
	echo "The program has error. Output: $result"
fi