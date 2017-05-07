#!/bin/bash
generate(){
echo -e '$d\nw\nq'| ed ~/Library/Preferences/'DOSBox 0.74 Preferences'
echo -e '$d\nw\nq'| ed ~/Library/Preferences/'DOSBox 0.74 Preferences'
cd ..
cd ..
cd ..
echo "mount C $(pwd)" >> ~/Library/Preferences/'DOSBox 0.74 Preferences'
echo 'C:' >> ~/Library/Preferences/'DOSBox 0.74 Preferences'
cd AutoDOSBox.app/Contents/Resources
open $(pwd)/DOSBox.app
}

gen_file(){
	open $(pwd)/DOSBox.app
	sleep 1
	killall DOSBox
	generate
}

if [ ! -f ~/Library/Preferences/'DOSBox 0.74 Preferences' ]; then
	gen_file
	generate
	exit
else
	generate
	exit
fi
exit