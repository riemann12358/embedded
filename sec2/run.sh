function runc() {
	alias k=kill -INT
	cnt=0
	filename=$1
	gar=$(ls "$filename".c)
	if [ $? -ne 0 ]; then
		echo "there is no file with this name."
	else
		echo "$filename.c"
		lastTime=$(stat -c %Z $filename.c)
		while true
		do
			curTime=$(stat -c %Z $filename.c)
			while [ $curTime -ne $lastTime ] || [ $cnt=0 ]; do
				clear
				curTime=$(stat -c %Z $filename.c)
				echo "running"
				gcc -o "$filename" "$filename".c
				./$filename 
				p=$!
				echo program end with $? -------
				read
				lastTime=$curTime
				((cnt = cnt + 1))
			done
		done

	fi

 }
