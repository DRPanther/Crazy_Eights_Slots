Crazy Eights Slot Machine<br>
(C)2020 Dan Richter(RCS)<p>
  
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/875ad877e7ed400080683c3dc448b271)](https://app.codacy.com/manual/DRPanther/Crazy_Eights_Slots?utm_source=github.com&utm_medium=referral&utm_content=DRPanther/Crazy_Eights_Slots&utm_campaign=Badge_Grade_Dashboard)
[![Build Status](https://travis-ci.com/DRPanther/Crazy_Eights_Slots.svg?branch=master)](https://travis-ci.com/DRPanther/Crazy_Eights_Slots)
[![Build status](https://ci.appveyor.com/api/projects/status/jdv40b3bfh7mwwna?svg=true)](https://ci.appveyor.com/project/DRPanther/crazy-eights-slots)

Dan Richter<br>
aka Black Panther<br>
<dan@castlerockbbs.com><br>
<telnet://bbs.castlerockbbs.com><br>
<http://www.castlerockbbs.com><br>
<https://github.com/DRPanther><br>

-=-=-=-=-=-=-=-=-=-=-=-=-

Crazy Eights Slot Machine is a simple slot machine game that I wrote. It
is a basic style slot machine, with some components that I decided to add
on, such as a top player report, adding commas to the numbers to make them
more readable, etc. In all honesty, I started working on this, to take my
mind of off other projects that I should be working on. :)

-=-=-=-=-=-=-=-=-=-=-=-=-

Installation is really easy. In your script/batch file, copy the dorinfo1.def
file into the directory that you installed this program to. It will read the 
information from the dropfile.

For example:

#!/bin/bash<br>
cd ~/doors/slots<br>
cp ~/mystic/temp%1/dorinfo1.def ~/doors/slots<br>
./slotmachine<p>

That's it! If you would like a dos/windows example:

c:<br>
cd \doors\slots<br>
copy c:\mystic\temp%1\dorinfo1.def c:\doors\slots\<br>
slotmachine<p>

Simple! :)

Also, In Mystic, or whichever BBS program you use, when you call the door, 
make sure you use the command of: 

./slots.sh %3  //this passes the node number to the script file.

Or

slots.bat %3

With this, the script/batch file will know which directory to look in for the
drop files. 

-=-=-=-=-=-=-=-=-=-=-=-=-

File included:

slotmachine (linux) or slotmachine.exe (Windows)<br>
install.txt - This file. :)<br>
slots.ans<br>
slotin.ans<br>
file_id.diz<p>

Files created by the program:

player.dat - Players info<br>
slotplyr.idx - Players Index file<br>
slotplyr.txt - Top Players score file<br>
makefile - Used to compile the source code<p>

Source code:

main.c - Main program code<br>
numbers.h - Header file<br>
OpenDoor.h - OpenDoors header file<br>
libODoors.a - OpenDoors library file<p>

-=-=-=-=-=-=-=-=-=-=-=-=-

If you wish to copile your own version of this, feel free to use the makefile
included. It uses gcc, and works fine here on both Debian and Manjaro systems.

Extract the source code into it's own directory, and just run 'make'. You can
also run 'make clean', and it will remove all the object files and binaries
from the directory.

-=-=-=-=-=-=-=-=-=-=-=-=-

This program is being releases as open source, using the GPL2.0 license. Feel
free to do what you will with it. The only thing I ask, is if you do make
changes to it, please let me know by sending me a copy of the modified source,
or push an commit to the repo on github. Call it my curiosity to see what
others think should be changed to added to any upcoming releases.
