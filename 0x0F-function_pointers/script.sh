#     targer     : dependancy
	# 	command


#!/bin/bash
ls
echo "please enter filename"
read fileName

FILE=./Makefile

# remove ".c"
TARGET=${fileName%.c}



# we cant to check if Makefile and fileName exist
if [[ -f "$FILE" && -f "$fileName" ]];
then
	# check if we have the write to access it
	if [ -w $fileName ] 
	then
		echo "${TARGET}: ${fileName}
		\${CC} \${CFLAGS} -c ${fileName}" >> "$FILE"
	else
		echo "------------- u dont have the Right Permission --------"
	fi

else
	echo "***********Makefile or the file u just tape do not exist -------"
fi



