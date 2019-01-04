# processDEMO
processDEMO shows the usage of Qt5 process handling in order to put the output of a given command into a QTextBrowser

This example uses an Amiga cross compiler toolchain (selectable compilers: gcc and vbcc) to compile a given source file, shows the compiler output and reacts on the success of the compiling process. 
Three parameters are taken via QFileDialog, beeing stored into a prefs file in the user's home directory: Path to vc, path to gcc and path to the source file to compile.
If prefs file doesn't exist at startup, user will be informed to save one.

Feel free to use this source for own studies. :)

# Screenshots
![procdemo01](https://user-images.githubusercontent.com/23148422/50656250-d97cfe00-0f92-11e9-9cef-3b9e6eac9705.png)
![procdemo02](https://user-images.githubusercontent.com/23148422/50656255-dda91b80-0f92-11e9-8f19-c72f67b5f3fd.png)
