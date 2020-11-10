
== DEVELOPING ON LINUX, MSYS, MINGW, CYGWIN, ETC. ==

Just install SDL 1.2.x's development libraries and the GCC/G++ compilers,
then type "make" from within a copy of this repo.

== SETTING UP THE DEVELOPMENT ENVIRONMENT ON WINDOWS 10 ==

These instructions will walk you through setting up Visual Studio 2003
on your modern PC, with download links.

Visual Studio 2003
Disc 1: https://archive.org/details/MSDN_Visual_Studio_NET_2003_Enterprise_Architect_Disc_1_Disc_2082_May_2003_X09-5
Disc 2: https://archive.org/details/MSDN_Visual_Studio_NET_2003_Enterprise_Architect_Disc_2_Disc_2083_May_2003_X09-5
Prereqs Disc: https://archive.org/details/MSDN_Visual_Studio_NET_2003_Prerequisites_Disc_2072_May_2003_X09-51482

VirtualCloneDrive
https://www.redfox.bz/download/SetupVirtualCloneDrive.exe

Set up VirtualCloneDrive.

Mount Disc 1 and start Setup.exe. Perform the first two tasks, but not beyond.
VirtualCloneDrive is required because the installer DOES NOT WORK PROPERLY IF
YOU HAVE DISC 1 AND 2 IN SEPERATE VIRTUAL OR PHYSICAL OPTICAL DRIVES.

You MUST swap from 1 to 2, at least on modern Windows.
I admit have not tested any earlier versions than 10.

Near or after the end of the setup, you may get a "This app may not work properly"
message. Press "Never show again" and press "Close", Visual Studio will still
work just fine.

Make sure to always run VS2005 as Administrator; it's debugging and
compiling features do not work without evelated permissions.

Now you may download SDL's development libraries from their website.
1.2.15 is recommended, but they should all be cross-compatible.
Extract the contents of "SDL-devel-1.2.*-VC.zip" like described below:

zip\SDL-1.2.*\lib\x86 -> C:\Program Files (x86)\Microsoft Visual Studio .NET 2003\Vc7\lib\
zip\SDL-1.2.*\include -> C:\Program Files (x86)\Microsoft Visual Studio .NET 2003\Vc7\include\SDL\

Now you should be all ready to develop.
Your install of VS2005 should also be capable of making working binaries for Win9x.
